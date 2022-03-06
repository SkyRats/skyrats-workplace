#!/bin/bash
echo "$0: installing Px4 dependencies"

## Import scripts common tools
source ../lib/extra_tools.sh

## Go to this file's path
MY_PATH=`whereAmIFrom`

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
    bash "$MY_PATH/gitman.sh"
fi

## Clone Px4 into src
echo "$0: Cloning PX4..."
echo "OBS: Now, wait some minutes please... ;)"
gitman install --force PX4-Autopilot

## Change user and/or group ownership
if [ -e /home/$USER/.local/lib ]; then
  sudo chown $USER /home/$USER/.local/lib -R
fi

## Fix numpy version problems
sudo pip3 install numpy --upgrade

## Run Ubuntu.sh from px4
echo "$0: Running ubuntu.sh"
sudo bash "$MY_PATH/../src/PX4-Autopilot/Tools/setup/ubuntu.sh"

## Fix mrs_gazebo_common_resources build on Ubuntu 20.04
echo "$0: Solving other dependencies"
sudo apt -y install python3-setuptools python3-pip
sudo apt -y install libignition-common3*
sudo -H pip3 install --user packaging
sudo apt -y install python3-packaging
sudo apt -y install python3-toml
sudo -H pip3 install --user toml
sudo apt -y install 'libgstreamer1.0-dev'
sudo apt-get install python3-genmsg
pip3 install --user jinja2
pip3 install kconfiglib
pip3 install --user jsonschema

## Add gazebo's setup.bash in .bashrc 
#COMMAND1="source /usr/share/gazebo/setup.sh"
#num=`cat ~/.bashrc | grep "$COMMAND1" | wc -l`
#if [ "$num" -lt "1" ]; then

#  echo "Adding '$COMMAND1' to your .bashrc"
#  echo "$COMMAND1" >> ~/.bashrc

#fi
