#!/bin/bash

## Check if it is into intallers/
if [[ `dirname $0` != "." ]]; then
    echo "Please, go into installers folder ;)"
    echo "(Try something like 'cd installers/')"
    exit 0
fi

## Import scripts' common tools
source ../lib/extra_tools.sh

## Source progress bar
source ../lib/progress_bar.sh

## Go to this file's path
MY_PATH=`whereAmIFrom`

## Add description in .bashrc
addToBashrc "## SKYRATS setups:"

## Progress bar initial configurations
# Make sure that the progress bar is cleaned up when user presses ctrl+c
enable_trapping
# Create progress bar
setup_scroll_area

## | ----------------------- install ROS2 ---------------------- |
draw_progress_bar 0
echo -e "\n\n ... Install ROS2 \n\n"
bash "$MY_PATH/ros.sh"

## | --------------------- install gitman --------------------- |
draw_progress_bar 14
echo -e "\n\n ... Install gitman \n\n"
bash "$MY_PATH/gitman.sh"

## | ---------------- install px4 dependencies ---------------- |
draw_progress_bar 29
echo -e "\n\n ... Install px4 dependencies \n\n"
bash "$MY_PATH/px4.sh" --no-gitman.sh

## | ------------------- install fastRTPS --------------------- |
draw_progress_bar 43
echo -e "\n\n ... Install fastRTPS \n\n"
bash "$MY_PATH/fastRTPS.sh" --no-gitman.sh

## | ----------------------- create skyrats_ws ---------------------- |
draw_progress_bar 57
echo -e "\n\n ... Create skyrats_ws \n\n"
bash "$MY_PATH/ros_ws.sh"

## | ---------------- install qgroundcontrol ---------------- |
draw_progress_bar 72
echo -e "\n\n ... Install qgroundcontrol \n\n"
bash "$MY_PATH/qgroundcontrol.sh"

## | -------------- install aditional softwares -------------- |
draw_progress_bar 86
echo -e "\n\n ... Install aditional softwares \n\n"
bash "$MY_PATH/others.sh"

## End the progress bar
destroy_scroll_area
