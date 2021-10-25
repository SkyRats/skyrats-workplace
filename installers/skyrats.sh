#!/bin/bash


MY_PATH=`dirname "$0"`
MY_PATH=`( cd "$MY_PATH" && pwd )`
cd "$MY_PATH"
sudo apt-get -y install git

## | ----------------------- install ROS ---------------------- |

bash $MY_PATH/ros.sh

## | -------------- install general dependencies -------------- |

bash $MY_PATH/general.sh

## | --------------------- install gitman --------------------- |

bash $MY_PATH/gitman.sh

## | ---------------- install gitman submodules --------------- |

gitman install --force

## | --------------------- install mavros --------------------- |

bash $MY_PATH/mavros.sh

## | ---------------- install px4 dependencies ---------------- |

if [ -e /home/$USER/.local/lib ]; then
  sudo chown $USER /home/$USER/.local/lib -R
fi

sudo bash $MY_PATH/../ros_packages/px4_firmware/Tools/setup/ubuntu.sh --no-nuttx --no-sim-tool

sudo apt-get update
#to fix mrs_gazebo_common_resources build on Ubuntu 20.04
sudo apt-get upgrade -y libignition-common3*
sudo -H pip3 install --user packaging
sudo apt-get -y install python3-packaging
sudo apt-get -y install python3-toml
sudo -H pip3 install --user toml
sudo apt-get -y install 'libgstreamer1.0-dev'
line="source /usr/share/gazebo/setup.sh"

num=`cat ~/.bashrc | grep "$line" | wc -l`
if [ "$num" -lt "1" ]; then

  echo "Adding '$line' to your .bashrc"

  # set bashrc
  echo "
$line" >> ~/.bashrc
fi

cd "$MY_PATH/../../.."
catkin build

line="source ~/skyrats_ws/devel/setup.bash"

num=`cat ~/.bashrc | grep "$line" | wc -l`
if [ "$num" -lt "1" ]; then

  echo "Adding '$line' to your .bashrc"

  # set bashrc
  echo "
$line" >> ~/.bashrc
fi
