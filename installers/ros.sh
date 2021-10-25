#!/bin/bash

echo "$0: Installing ROS"

sudo sh -c 'echo "deb http://packages.osrfoundation.org/gazebo/ubuntu-stable `lsb_release -cs` main" > /etc/apt/sources.list.d/gazebo-stable.list'
wget http://packages.osrfoundation.org/gazebo.key -O - | sudo apt-key add -
sudo apt-get -y update

sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'

sudo apt-get -y install curl
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -

sudo apt-get -y update

sudo apt-get -y install ros-noetic-desktop-full

num=`cat ~/.bashrc | grep "/opt/ros/noetic/setup.bash" | wc -l`
if [ "$num" -lt "1" ]; then

  # set bashrc
  echo "
source /opt/ros/noetic/setup.bash" >> ~/.bashrc

fi
