#!/bin/bash
echo "$0: installing Px4 dependencies"

## Get and go to this file's path
MY_PATH=`dirname "$0"`
MY_PATH=`( cd "$MY_PATH" && pwd )`
cd "$MY_PATH"

## Initialize variables
INSTALL_GITMAN="true"

## Parse arguments
for arg in "$@"
do
	if [[ $arg == "--no-gitman.sh" ]]; then
		INSTALL_GITMAN="false"
	fi
done

## Run gitman.sh
if [ $INSTALL_GITMAN == "true" ]; then
    bash $MY_PATH/gitman.sh
fi

## Clone Px4 into src
echo "$0: Cloning PX4..."
echo "OBS: Now, wait some minutes please... ;)"
gitman install --force px4_firmware

## Change user and/or group ownership
if [ -e /home/$USER/.local/lib ]; then
  sudo chown $USER /home/$USER/.local/lib -R
fi

## Fix numpy version problems
sudo pip3 install numpy --upgrade

## Run Ubuntu.sh from px4
echo "$0: Running ubuntu.sh"
sudo bash $MY_PATH/../src/px4_firmware/Tools/setup/ubuntu.sh --no-nuttx

## Fix mrs_gazebo_common_resources build on Ubuntu 20.04
echo "$0: Solving other dependencies"
sudo apt -y install python3-setuptools python3-pip
sudo apt -y upgrade libignition-common3*
sudo -H pip3 install --user packaging
sudo apt -y install python3-packaging
sudo apt -y install python3-toml
sudo -H pip3 install --user toml
sudo apt -y install 'libgstreamer1.0-dev'

## Add gazebo's setup.bash in bash.rc 
COMMAND1="source /usr/share/gazebo/setup.sh"
num=`cat ~/.bashrc | grep "$COMMAND1" | wc -l`
if [ "$num" -lt "1" ]; then

  echo "Adding '$COMMAND1' to your .bashrc"
  echo "$COMMAND1" >> ~/.bashrc

fi