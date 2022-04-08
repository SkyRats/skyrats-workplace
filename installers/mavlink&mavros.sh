#!/bin/bash
echo "$0: installing mavlink and mavros dependencies"

## Import scripts common tools
source ../lib/extra_tools.sh

## Go to this file's path
MY_PATH=`whereAmIFrom`

## Initialize variables
INSTALL_GITMAN="true"
CREATE_CATKIN_WS="true"
INSTALL_MAVROS="true"

## Parse arguments
for arg in "$@"
do
	if [[ $arg == "--no-gitman.sh" ]]; then
		INSTALL_GITMAN="false"
	fi
    if [[ $arg == "--no-catkin_ws-creation" ]]; then
		CREATE_CATKIN_WS="false"
	fi
    if [[ $arg == "--no-mavros-installation" ]]; then
		INSTALL_MAVROS="false"
	fi
done

## Run gitman.sh
if [ $INSTALL_GITMAN == "true" ]; then
    bash "$MY_PATH/gitman.sh"
fi

## Install caktin dependencies
sudo apt install -y python3-catkin-tools python3-rosinstall-generator
sudo apt install -y python3-wstool

## Create /catkin_ws
if [ $CREATE_CATKIN_WS == "true" ];
then
    cd "$MY_PATH/../src/"
    mkdir -p "catkin_ws/src"
    cd "catkin_ws"
    catkin init 
    #catkin_init_workspace
    wstool init src
fi

## Install mavlink
echo "$0: installing mavlink"
#TODO: CHANGE TO FOXY
rosinstall_generator --rosdistro  mavlink | tee /tmp/mavros.rosinstall

## Install mavros stable
if [ $INSTALL_MAVROS == "true" ]; then
    echo "$0: installing mavros"
    rosinstall_generator --upstream mavros | tee -a /tmp/mavros.rosinstall
fi

## Create workspace & deps
wstool merge -t src /tmp/mavros.rosinstall
wstool update -t src -j4
rosdep install --os=ubuntu:focal --from-paths src --ignore-src -y

## Install GeographicLib datasets:
if [ $INSTALL_MAVROS == "true" ]; then
    ./src/mavros/mavros/scripts/install_geographiclib_datasets.sh
fi

## Build and prepare setup.bash to rosrun
catkin build
source devel/setup.bash
addToBashrc "source $MY_PATH/../src/catkin_ws/devel/setup.bash"

