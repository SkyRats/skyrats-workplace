#! /usr/bin/env bash

## Import scripts common tools
source ../lib/extra_tools.sh

## Initialize variables
INSTALL_GITMAN="true"
# Name of workspace: USE YOUR CREATIVITY 
# Attention: if you change this name, change also into .gitman.yml
NAME=skyrats_ws2

## Get and go to this file's path
MY_PATH=`whereAmIFrom`

## Parse arguments
for arg in "$@"
do
	if [[ $arg == "--no-gitman.sh" ]]; then
		INSTALL_GITMAN="false"
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
echo "$0: moving packages to /${NAME}"
sudo mv $MY_PATH/../src/px4_ros_com ~/${NAME}/src
sudo mv $MY_PATH/../src/px4_msgs ~/${NAME}/src

## Add colcon_cd dependecies in .bashrc 
addToBashrc "source /usr/share/colcon_cd/function/colcon_cd.sh"
addToBashrc "export _colcon_cd_root=/opt/ros/galactic/"
addToBashrc "source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash"

## We decided not to build it, because of the plenty number of errors
#colcon build --symlink-install

## Add workspace's setup.bash in .bashrc
#addToBashrc "source ~/$NAME/install/setup.bash"
