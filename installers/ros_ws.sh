#! /usr/bin/env bash

## Import scripts common tools
source ../lib/extra_tools.sh

## Name of workspace: USE YOUR CREATIVITY 
NAME=skyrats_ws2

echo "$0: preparing ${NAME}"

## Install colcon e create workspace
sudo apt install -y python3-colcon-common-extensions
mkdir -p ~/${NAME}/src
cd ~/${NAME}/src
gitman install --force px4_ros_com
gitman install --force px4_msgs

## tem muito erro de compilação, talvez não seja bom compilar no script
#colcon build --symlink-install

## Add colcon_cd dependecies in .bashrc 
addToBashrc "source /usr/share/colcon_cd/function/colcon_cd.sh"
addToBashrc "export _colcon_cd_root=/opt/ros/galactic/"
addToBashrc "source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash"

## Add workspace's setup.bash in .bashrc
#addToBashrc "source ~/$NAME/install/setup.bash"
