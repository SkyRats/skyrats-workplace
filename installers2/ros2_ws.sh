#! /usr/bin/env bash
echo "$0: preparing skyrats_ws"

# TODO: install colcon e create workspace
# https://docs.ros.org/en/galactic/Tutorials/Workspace/Creating-A-Workspace.html
# https://docs.ros.org/en/galactic/Tutorials/Colcon-Tutorial.html
sudo apt install python3-colcon-common-extensions
mkdir -p ~/skyrats_ws/src
cd ~/skyrats_ws
colcon build --symlink-install


## Add colcon_cd dependecies is .bashrc 
COMMAND="source /usr/share/colcon_cd/function/colcon_cd.sh"
num=`cat ~/.bashrc | grep "$COMMAND" | wc -l`
if [ "$num" -lt "1" ]; then

  echo "Adding '$COMMAND' to your .bashrc"
  echo "$COMMAND" >> ~/.bashrc

fi
COMMAND="export _colcon_cd_root=/opt/ros/galactic/"
num=`cat ~/.bashrc | grep "$COMMAND" | wc -l`
if [ "$num" -lt "1" ]; then

  echo "Adding '$COMMAND' to your .bashrc"
  echo "$COMMAND" >> ~/.bashrc

fi
COMMAND="source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash"
num=`cat ~/.bashrc | grep "$COMMAND" | wc -l`
if [ "$num" -lt "1" ]; then

  echo "Adding '$COMMAND' to your .bashrc"
  echo "$COMMAND" >> ~/.bashrc

fi

## Add workspace's setup.bash in .bashrc 
COMMAND2="source ~/skyrats_ws/install/setup.bash"
num=`cat ~/.bashrc | grep "$COMMAND2" | wc -l`
if [ "$num" -lt "1" ]; then

  echo "Adding '$COMMAND2' to your .bashrc"
  echo "$COMMAND2" >> ~/.bashrc
  
fi