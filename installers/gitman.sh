#!/bin/bash

## Get and go to this file's path
MY_PATH=`dirname "$0"`
MY_PATH=`( cd "$MY_PATH" && pwd )`
cd "$MY_PATH"

## Install gitman and its dependencies
echo "$0: installing Gitman and its dependencies"
sudo apt-get -y install python3-pip python3-setuptools
sudo pip3 install gitman
sudo -H pip3 install gitman

## Install gitman submodules
# (PX4, Mavlink and Mavros)
# (we won't use mavros with ros2)
echo "$0: installing Gitman submodules"
gitman install --force