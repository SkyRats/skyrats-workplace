# Software License Agreement (BSD License)
#
# Copyright (c) 2012, Willow Garage, Inc.
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
#  * Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
#  * Redistributions in binary form must reproduce the above
#    copyright notice, this list of conditions and the following
#    disclaimer in the documentation and/or other materials provided
#    with the distribution.
#  * Neither the name of Willow Garage, Inc. nor the names of its
#    contributors may be used to endorse or promote products derived
#    from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
# COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#
# Author: Isaac Saito

import os
import sys
import threading
from collections import defaultdict

import rclpy

from ament_index_python.packages import get_package_share_directory
from python_qt_binding import loadUi
from python_qt_binding.QtWidgets import QWidget
from python_qt_binding.QtCore import QModelIndex, QTimer, Signal
from python_qt_binding.QtGui import QStandardItem, QStandardItemModel
from rqt_gui.main import Main
from rqt_topic.topic_widget import TopicWidget
from rcl_interfaces.srv import ListParameters


class MoveitWidget(QWidget):
    """
    This Widget provides an overview about the presence of different parts of a running moveIt instance.
    """
    # To be connected to PluginContainerWidget
    sig_sysmsg = Signal(str)
    sig_param = Signal(bool, str)  # param name emitted
    sig_node = Signal(bool, str)  # node name emitted
    sig_topic = Signal(list)  # topic name emitted

    _SPLITTER_H = 'splitter_horizontal'

    def __init__(self, parent, plugin_context):
        """
        @type parent: MoveitMain
        """
        self._node = rclpy.create_node('rqt_moveit_node')
        self._stop_event = threading.Event()

        # Nodes to monitor. Discovered MoveIt node will be added to beginning of the list
        self._nodes_monitored = []
        self._selected_topics = [('/pointcloud', 'sensor_msgs/msg/PointCloud'),
                                 ('/pointcloud2', 'sensor_msgs/msg/PointCloud2'),
                                 ('/image', 'sensor_msgs/msg/Image'),
                                 ('/camera_info', 'sensor_msgs/msg/CameraInfo')]
        self._params_monitored = ['robot_description',
                                  'robot_description_semantic']
        self._moveit_node_identification_topics = ['/display_contacts',
                                                   '/display_planned_path']

        super(MoveitWidget, self).__init__()
        self._parent = parent
        self._plugin_context = plugin_context
        self._refresh_rate = 3  # With default value

        package_share_dir = get_package_share_directory('rqt_moveit')
        ui_file = os.path.join(package_share_dir, 'resource', 'moveit_top.ui')
        loadUi(ui_file, self)

        # Create and add topics widget programmatically
        self._widget_topic = TopicWidget(self._node)
        self._splitter.addWidget(self._widget_topic)

        self._spinbox_refreshrate.valueChanged.connect(self._update_refreshrate)

        # Show default ref rate on QSpinbox
        self._spinbox_refreshrate.setValue(self._refresh_rate)

        # Monitor node
        self._moveit_node_found = False
        self._moveit_node_name = ''
        self._node_qitems = {}
        self._node_monitor_thread = self._init_monitor_nodes()
        self._node_monitor_thread.start()

        # topic to show
        self._registered_topics = None
        self._topic_monitor_thread = self._init_monitor_topics()
        self._topic_monitor_thread.start()

        # Init monitoring parameters.
        self._parameter_client = None
        self._parameter_client_registered = False
        self._param_qitems = {}
        _col_names_paramtable = ['Param name', 'Found in MoveIt node?']
        self._param_check_thread = self._init_monitor_parameters(_col_names_paramtable)
        self._param_check_thread.start()

    def _register_parameter_client(self):
        """
        If a moveit node was already found. This method tries to create a service client
        to read the parameter list from the moveit node.
        """
        if self._moveit_node_found:
            self._parameter_client = self._node.create_client(ListParameters,
                                                              f'{self._moveit_node_name}/list_parameters')
            ready = self._parameter_client.wait_for_service(timeout_sec=5.0)
            if ready:
                self._parameter_client_registered = True
            else:
                self._node.get_logger().err('Waiting for parameter service timed out')

    def _discover_moveit_node(self):
        """
        This method gets called by the _check_nodes_alive function if
        self._moveit_node_found is False. It tries to discover the moveit node
        based on list of known publishers (self._moveit_node_identification_topics)
        of a moveit node.
        """
        publishers = defaultdict(list)
        for name, namespace in self._node.get_node_names_and_namespaces():
            node_name = namespace + name if namespace.endswith('/') else namespace + '/' + name
            for topic_name, topic_type in self._node.get_publisher_names_and_types_by_node(name, namespace):
                publishers[topic_name].append(node_name)

        if self._moveit_node_identification_topics[0] in publishers and \
                self._moveit_node_identification_topics[1] in publishers:
            # TODO add logic if more than one node publishes to this topics
            moveit_node_name = publishers[self._moveit_node_identification_topics[1]][0]
            self._moveit_node_name = moveit_node_name
            self._nodes_monitored.insert(0, moveit_node_name)
            self._moveit_node_found = True

    def _init_monitor_nodes(self):
        """
        @rtype: Thread
        """
        self._node_datamodel = QStandardItemModel(0, 2)
        self._root_qitem = self._node_datamodel.invisibleRootItem()
        self._view_nodes.setModel(self._node_datamodel)

        node_monitor_thread = threading.Thread(target=self._check_nodes_alive,
                                     args=(self.sig_node, self._nodes_monitored, self._stop_event))

        self.sig_node.connect(self._update_output_nodes)
        return node_monitor_thread

    def _check_nodes_alive(self, signal, nodes_monitored, stop_event):
        """
        Working as a callback of Thread class, this method keeps looping to
        watch if the nodes whose names are passed exist and emits signal per
        each node.

        Notice that what MoveitWidget._check_nodes_alive &
        MoveitWidget._check_params_alive do is very similar, but since both of
        them are supposed to be passed to Thread class, there might not be
        a way to generalize these 2.

        @param signal: Signal(bool, str)
        @type nodes_monitored: str[]
        @type stop_event: Event()
        """
        while True:
            if not self._moveit_node_found:
                self._discover_moveit_node()

            for nodename in nodes_monitored:
                registered_nodes = self._node.get_node_names_and_namespaces()
                # Also considering the namespace of a node
                nodes_with_namespaces = [f'{node[1]}{node[0]}' for node in registered_nodes]
                is_node_running = nodename in nodes_with_namespaces
                signal.emit(is_node_running, nodename)
                self._node.get_logger().debug('_update_output_nodes')

            if stop_event.wait(self._refresh_rate):
                return

    def _init_monitor_topics(self):
        """
        @rtype: Thread
        """
        topic_monitor_thread = threading.Thread(target=self._check_topics_alive,
                                      args=(self.sig_topic, self._selected_topics, self._stop_event))
        self.sig_topic.connect(self._update_output_topics)
        return topic_monitor_thread

    def _check_topics_alive(self, signal, topics_monitored, stop_event):
        """
        Working as a callback of Thread class, this method keeps looping to
        watch if the topics whose names are passed exist and emits signal per
        each node.

        @param signal: Signal()
        @type topics_monitored: str[]
        @type stop_event: Event()
        """
        while True:
            published_topics = dict(self._node.get_topic_names_and_types())
            registered_topics = []
            for topic in topics_monitored:
                # If topic is published
                if topic[0] in published_topics:
                    topic_types = published_topics.get(topic[0])
                    # And has the same type
                    if topic[1] in topic_types:
                        registered_topics.append((topic[0], published_topics.get(topic[0])))

            signal.emit(list(registered_topics))
            self._node.get_logger().debug('_update_output_topics')
            if stop_event.wait(self._refresh_rate):
                return

    def _init_monitor_parameters(self, _col_names_paramtable=None):
        """
        @rtype: Thread
        """

        self._param_datamodel = QStandardItemModel(0, 2)
        self._root_qitem = self._param_datamodel.invisibleRootItem()
        self._view_params.setModel(self._param_datamodel)

        # Names of header on the QTableView.
        if not _col_names_paramtable:
            _col_names_paramtable = ['Param name',
                                     'Found in MoveIt node?']
        self._param_datamodel.setHorizontalHeaderLabels(_col_names_paramtable)

        self.sig_param.connect(self._update_output_parameters)

        param_check_thread = threading.Thread(target=self._check_params_alive,
                                    args=(self.sig_param, self._params_monitored, self._stop_event))
        return param_check_thread

    def _update_output_nodes(self, is_node_running, node_name):
        """
        Slot for signals that tell nodes existence.

        @type is_node_running: bool
        @type node_name: str
        """
        # TODO: What this method does is exactly the same with
        # monitor_parameters. Unify them.

        self._node.get_logger().debug('is_node_running={} par_name={}'.format(is_node_running, node_name))
        node_name = str(node_name)
        node_qitem = None
        if node_name not in self._node_qitems:
            node_qitem = QStandardItem(node_name)
            self._node_qitems[node_name] = node_qitem
            self._node_datamodel.appendRow(node_qitem)
        else:  # qsitem with the node name already exists.
            node_qitem = self._node_qitems[str(node_name)]

        qindex = self._node_datamodel.indexFromItem(node_qitem)
        _str_node_running = 'Not running'
        if is_node_running:
            _str_node_running = 'Running'
        qitem_node_status = QStandardItem(_str_node_running)
        self._node_datamodel.setItem(qindex.row(), 1, qitem_node_status)

    def _update_output_topics(self, registered_topics):
        """
        Slot for signals that tell topic's existence.

        @type registered_topics: list
        """
        # This branch will cause that once a selected topic was found the topic view will
        # never be empty again.
        if len(registered_topics) > 0:
            if self._registered_topics is None:
                self._widget_topic.set_selected_topics(registered_topics)
                self._widget_topic.set_topic_specifier(TopicWidget.SELECT_BY_NAME)
                self._widget_topic.start()
            elif self._registered_topics is not None and \
                    set([topic[0] for topic in self._registered_topics]) != \
                    set([topic[0] for topic in registered_topics]):
                self._widget_topic.set_selected_topics(registered_topics)

            self._registered_topics = registered_topics

    def _check_params_alive(self, signal, params_monitored, stop_event):
        """
        Working as a callback of Thread class, this method keeps looping to
        watch if the params whose names are passed exist and emits signal per
        each node.

        Notice that what MoveitWidget._check_nodes_alive &
        MoveitWidget._check_params_alive do is very similar, but since both of
        them are supposed to be passed to Thread class, there might not be
        a way to generalize these 2.

        @type signal: Signal(bool, str)
        @param_name signal: emitting a name of the parameter that's found.
        @type params_monitored: str[]
        @type stop_event: Event()
        """

        while True:
            if self._parameter_client_registered:
                request = ListParameters.Request()
                future = self._parameter_client.call_async(request)
                rclpy.spin_until_future_complete(self._node, future)
                moveit_node_params = future.result().result.names
                for param_name in params_monitored:
                    has_param = True if param_name in moveit_node_params else False
                    signal.emit(has_param, param_name)
                    self._node.get_logger().debug('has_param {}, check_param_alive: {}'.format(has_param, param_name))
            else:
                self._register_parameter_client()
                for param_name in params_monitored:
                    signal.emit(False, param_name)

            if stop_event.wait(self._refresh_rate):
                return

    def _update_output_parameters(self, has_param, param_name):
        """
        Slot

        @type has_param: bool
        @type param_name: str
        """
        self._node.get_logger().debug('has_param={} par_name={}'.format(has_param,
                                                         param_name))
        param_name = str(param_name)
        param_qitem = None
        if param_name not in self._param_qitems:
            param_qitem = QStandardItem(param_name)
            self._param_qitems[param_name] = param_qitem
            self._param_datamodel.appendRow(param_qitem)
        else:  # qsitem with the param name already exists.
            param_qitem = self._param_qitems[str(param_name)]

        qindex = self._param_datamodel.indexFromItem(param_qitem)
        _str_param_found = 'No'
        if has_param:
            _str_param_found = 'Yes'
        qitem_param_status = QStandardItem(_str_param_found)
        self._param_datamodel.setItem(qindex.row(), 1, qitem_param_status)
        self._view_params.resizeColumnsToContents()

    def _update_refreshrate(self, refresh_rate):
        """
        Slot

        @type refresh_rate: int
        """
        self._refresh_rate = refresh_rate

    def save_settings(self, plugin_settings, instance_settings):
        instance_settings.set_value(self._SPLITTER_H,
                                    self._splitter.saveState())

    def restore_settings(self, plugin_settings, instance_settings):
        if instance_settings.contains(self._SPLITTER_H):
            self._splitter.restoreState(instance_settings.value(self._SPLITTER_H))
        else:
            self._splitter.setSizes([100, 100, 200])
        pass

    def shutdown(self):
        """
        Overridden.

        Close threads.

        @raise RuntimeError:
        """
        try:
            self._stop_event.set()

            self._node_monitor_thread.join()
            self._param_check_thread.join()
            self._topic_monitor_thread.join()

            self._node_monitor_thread = None
            self._param_check_thread = None
            self._topic_monitor_thread = None

            self._node.destroy_node()

        except RuntimeError as e:
            self._node.get_logger().err(e)
            raise e


def main(args=None):
    main_obj = Main()
    sys.exit(
        main_obj.main(
            sys.argv,
            standalone='rqt_moveit.moveit_plugin.MoveitPlugin'
        )
    )

