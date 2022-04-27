#!/bin/bash
echo "$0: installing mavlink and mavros dependencies"

## Import scripts common tools
source ../lib/extra_tools.sh

## Go to this file's path
MY_PATH=`whereAmIFrom`

## Initialize variables
INSTALL_GITMAN="true"
CREATE_WS="true"
INSTALL_MAVROS="true"
BUILD="false"
FORCE_UPDATE="false"

## Parse arguments
for arg in "$@"
do
	if [[ $arg == "--no-gitman.sh" ]]; then
		INSTALL_GITMAN="false"
	fi
    if [[ $arg == "--no-ros_ws.sh" ]]; then
		CREATE_WS="false"
	fi
    if [[ $arg == "--no-mavros-installation" ]]; then
		INSTALL_MAVROS="false"
	fi
    if [[ $arg == "--build" ]]; then
		BUILD="true"
	fi
    if [[ $arg == "--force" ]]; then
		FORCE_UPDATE="true"
	fi
done

## Run gitman.sh
if [ $INSTALL_GITMAN == "true" ]; then
    bash "$MY_PATH/gitman.sh"
fi

## Run ros_ws.sh
if [ $CREATE_WS == "true" ]; then
    if [[ FORCE_UPDATE == "true" ]]
    then
        bash "$MY_PATH/ros_ws.sh" --no-gitman.sh --force
    else
        bash "$MY_PATH/ros_ws.sh" --no-gitman.sh
    fi

fi

## Clone repositories
if [ $INSTALL_MAVROS == "true" ]
then
    gitman install mavlink mavros
else 
    gitman install mavlink
fi

## Move packages to skyrats_ws2
# mavlink
if [[ `find ~/skyrats_ws2/src/mavlink` != "" ]]
then
    if [[ FORCE_UPDATE == "true" ]]
    then
        sudo rm -rf ~/skyrats_ws2/src/mavlink
        sudo mv --update "$MY_PATH/../src/mavlink" ~/skyrats_ws2/src
    fi
else
    sudo mv --update "$MY_PATH/../src/mavlink" ~/skyrats_ws2/src
fi
# mavros
if [ $INSTALL_MAVROS == "true"  ]
then
        if [[ `find ~/skyrats_ws2/src/mavros` != "" ]]
    then
        if [[ FORCE_UPDATE == "true" ]]
        then
            sudo rm -rf ~/skyrats_ws2/src/mavros
            sudo mv --update "$MY_PATH/../src/mavros" ~/skyrats_ws2/src
        fi
    else
        sudo mv --update "$MY_PATH/../src/mavros" ~/skyrats_ws2/src
    fi
fi

## Install dependencies to build
sudo apt install -y libgeographic-dev 
sudo apt install -y ros-foxy-geographic-msgs
sudo apt install -y ros-foxy-diagnostic-updater
sudo apt install -y ros-foxy-eigen-stl-containers
echo ""

## We decided not to build the workspace by default, because of the plenty number of errors
if [[ $BUILD == "true" ]]; then
	cd ~/skyrats_ws2/
	colcon build --symlink-install
	addToBashrc "source ~/skyrats_ws2/install/setup.bash"
	cd "${MY_PATH}"
fi




##OLD SCRIPT

### Install Dependencies
#sudo apt install -y python3-vcstool python3-rosinstall-generator python3-osrf-pycommon
#
###  Create the workspace
#cd "$MY_PATH/../src/"
#mkdir -p "mavros-mavlink_ws/src"
#cd "mavros-mavlink_ws"
#
### Install MAVLink
#rosinstall_generator --format repos mavlink | tee /tmp/mavlink.repos
#vcs import src < /tmp/mavlink.repos
#
### Install MAVROS: get source (upstream - released)
#if [ $INSTALL_MAVROS == "true" ]; then
#    echo "$0: installing mavros"
#    rosinstall_generator --format repos --upstream mavros --deps | tee -a /tmp/mavros.repos
#    vcs import src < /tmp/mavros.repos
#fi
#
### Create workspace & deps
#rosdep install --from-paths src --os=ubuntu:focal --ignore-src -y
#
### Install GeographicLib datasets:
#if [ $INSTALL_MAVROS == "true" ]; then
#    ./src/mavros/mavros/scripts/install_geographiclib_datasets.sh
#fi
#
### Build source
#colcon build
#
### Make sure that you use setup.bash or setup.zsh from workspace.
##    Else ros2 run can't find nodes from this workspace.
#source install/setup.bash
#addToBashrc "source $MY_PATH/../src/mavros-mavlink_ws/install/setup.bash"
#
