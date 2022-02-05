#! /usr/bin/env bash
echo "$0: preparing skyrats_ws"

# TODO: install colcon e create workspace
# https://docs.ros.org/en/galactic/Tutorials/Workspace/Creating-A-Workspace.html

## Add workspace's setup.bash in bash.rc 
COMMAND2="source ~/skyrats_ws/devel/setup.bash"
num=`cat ~/.bashrc | grep "$COMMAND2" | wc -l`
if [ "$num" -lt "1" ]; then

  echo "Adding '$COMMAND2' to your .bashrc"
  echo "$COMMAND2" >> ~/.bashrc
fi