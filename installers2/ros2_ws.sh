#! /usr/bin/env bash

## Name of workspace: USE YOUR CREATIVITY 
NAME=skyrats_ws

echo "$0: preparing ${NAME}"

## TODO: install colcon e create workspace
sudo apt install -y python3-colcon-common-extensions
mkdir -p ~/${NAME}/src
cd ~/${NAME}
colcon build --symlink-install


## Add colcon_cd dependecies in .bashrc 
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
COMMAND2="source ~/$NAME/install/setup.bash"
num=`cat ~/.bashrc | grep "$COMMAND2" | wc -l`
if [ "$num" -lt "1" ]; then

  echo "Adding '$COMMAND2' to your .bashrc"
  echo "$COMMAND2" >> ~/.bashrc
  
fi