#! /usr/bin/env bash

## Import scripts common tools
source ../lib/extra_tools.sh

## Initialize variables
INSTALL_GITMAN="true"
BUILD="false"
FORCE_UPDATE="false"
# Name of workspace
# Attention: if you change this name, change also into mavlink&mavros.sh
NAME=skyrats_ws2

## Get and go to this file's path
MY_PATH=`whereAmIFrom`

## Parse arguments
for arg in "$@"
do
	if [[ $arg == "--no-gitman.sh" ]]; then
		INSTALL_GITMAN="false"
	fi
	if [[ $arg == "--build" ]]; then
		BUILD="true"
	fi
	if [[ $arg == "--build" ]]; then
		FORCE_UPDATE="true"
	fi
done

## Run gitman.sh
if [ $INSTALL_GITMAN == "true" ]; then
    bash "$MY_PATH/gitman.sh"
fi

echo "$0: preparing /${NAME}"

## Install colcon e create workspace
sudo apt install -y python3-colcon-common-extensions
mkdir -p ~/${NAME}/src

## Install first test packages
gitman install --force px4_ros_com px4_msgs
echo "$0: moving packages to ~/${NAME}"
# px4_ros_com
if [[ `find ~/${NAME}/src/px4_ros_com` != "" ]]
then
    if [[ FORCE_UPDATE == "true" ]]
    then
        sudo rm -rf ~/${NAME}/src/px4_ros_com
        sudo mv --update "$MY_PATH/../src/px4_ros_com" ~/${NAME}/src
    fi
else
    sudo mv --update "$MY_PATH/../src/px4_ros_com" ~/${NAME}/src
fi
# px4_msgs
if [[ `find ~/${NAME}/src/px4_msgs` != "" ]]
then
    if [[ FORCE_UPDATE == "true" ]]
    then
        sudo rm -rf ~/${NAME}/src/px4_msgs
        sudo mv --update "$MY_PATH/../src/px4_msgs" ~/${NAME}/src
    fi
else
    sudo mv --update "$MY_PATH/../src/px4_msgs" ~/${NAME}/src
fi


## Add colcon_cd dependecies in .bashrc 
addToBashrc "source /usr/share/colcon_cd/function/colcon_cd.sh"
addToBashrc "export _colcon_cd_root=/opt/ros/foxy/"
addToBashrc "source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash"

## We decided not to build it by default, because of the plenty number of errors
if [[ $BUILD == "true" ]]; then
	cd ~/${NAME}/
	colcon build --symlink-install
	addToBashrc "source ~/$NAME/install/setup.bash"
	cd ~/${MY_PATH}/
fi
