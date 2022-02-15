#!/bin/bash
echo "$0: installing Px4 dependencies"

## Get and go to this file's path
MY_PATH=`dirname "$0"`
MY_PATH=`( cd "$MY_PATH" && pwd )`
cd "$MY_PATH"

## Run gitman.sh
bash $MY_PATH/gitman.sh

## Change user and/or group ownership
if [ -e /home/$USER/.local/lib ]; then
  sudo chown $USER /home/$USER/.local/lib -R
fi

## Run Ubuntu.sh from px4
# (px4 was cloned by gitman into src)
sudo bash $MY_PATH/../src/px4_firmware/Tools/setup/ubuntu.sh --no-nuttx --no-sim-tool

## Fix mrs_gazebo_common_resources build on Ubuntu 20.04
sudo apt-get upgrade -y libignition-common3*
sudo -H pip3 install --user packaging
sudo apt-get -y install python3-packaging
sudo apt-get -y install python3-toml
sudo -H pip3 install --user toml
sudo apt-get -y install 'libgstreamer1.0-dev'

## Add gazebo's setup.bash in bash.rc 
COMMAND1="source /usr/share/gazebo/setup.sh"
num=`cat ~/.bashrc | grep "$COMMAND1" | wc -l`
if [ "$num" -lt "1" ]; then

  echo "Adding '$COMMAND1' to your .bashrc"
  echo "$COMMAND1" >> ~/.bashrc

fi