#!/bin/bash

MY_PATH=`dirname "$0"`
MY_PATH=`( cd "$MY_PATH" && pwd )`
cd "$MY_PATH"

## Mavlink dependencies
sudo apt install -y python3-setuptools python3-pip
pip3 install --user future
sudo apt -y install python3-future python3-lxml 
sudo apt -y install python3-jinja2 python3-markupsafe

## Install Mavlink
sudo apt -y install ros-galactic-mavlink ros-galactic-libmavconn 

## Others Qground dependencies
sudo usermod -a -G dialout $USER
sudo apt remove modemmanager -y
sudo apt install gstreamer1.0-plugins-bad gstreamer1.0-libav gstreamer1.0-gl -y

## Get QGroundControl
cd $MY_PATH/..
wget https://s3-us-west-2.amazonaws.com/qgroundcontrol/latest/QGroundControl.AppImage
chmod +x ./QGroundControl.AppImage

## TODO: onde vamos instalar? -skyrats_workplace