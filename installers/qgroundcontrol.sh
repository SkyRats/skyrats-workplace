#!/bin/bash

## Import scripts common tools
source ../lib/extra_tools.sh

## Go to this file's path
MY_PATH=`whereAmIFrom`

## Initialize variables
INSTALL_GITMAN="true"
INSTALL_MAVLINK="true"

## Parse arguments
for arg in "$@"
do
	if [[ $arg == "--no-gitman.sh" ]]; then
		INSTALL_GITMAN="false"
	fi
    if [[ $arg == "--no-mavlink-installation" ]]; then
		INSTALL_MAVLINK="false"
	fi
done

## Run gitman.sh
if [ $INSTALL_GITMAN == "true" ]; then
    bash "$MY_PATH/gitman.sh"
fi

### Mavlink dependencies
#sudo apt install -y python3-setuptools python3-pip
#pip3 install --user future
#sudo apt -y install python3-future python3-lxml 
#sudo apt -y install python3-jinja2 python3-markupsafe
#
### Install Mavlink
#sudo apt -y install ros-foxy-mavlink ros-foxy-libmavconn 

## Install Mavlink
if [ $INSTALL_MAVLINK == "true" ]; then
    bash "$MY_PATH/mavlink_mavros.sh" --no-gitman.sh --no-mavros-installation
fi

## Others Qground dependencies
sudo usermod -a -G dialout $USER
sudo apt remove modemmanager -y
sudo apt install gstreamer1.0-plugins-bad gstreamer1.0-libav gstreamer1.0-gl -y
sudo apt install libqt5gui5 -y

## Get QGroundControl
cd "$MY_PATH/.."
wget https://s3-us-west-2.amazonaws.com/qgroundcontrol/latest/QGroundControl.AppImage
chmod +x ./QGroundControl.AppImage
