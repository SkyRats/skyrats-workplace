#!/bin/bash

## Import scripts common tools
source ./libtools.sh

## Go to this file's path
MY_PATH=`whereAmIFrom`

## Add description in .bashrc
addToBashrc "## SKYRATS setups:"

## | ----------------------- install ROS2 ---------------------- |

echo -e "\n\n ... (1) \n\n"
bash "$MY_PATH/ros.sh"

## | --------------------- install gitman --------------------- |

echo -e "\n\n ... (2) \n\n"
bash "$MY_PATH/gitman.sh"

## | ---------------- install px4 dependencies ---------------- |

echo -e "\n\n ... (3) \n\n"
bash "$MY_PATH/px4.sh" --no-gitman.sh

## | ------------------- install fastRTPS --------------------- |

echo -e "\n\n ... (4) \n\n"
bash "$MY_PATH/fastRTPS.sh" --no-gitman.sh

## | ----------------------- create skyrats_ws ---------------------- |

echo -e "\n\n ... (5) \n\n"
bash "$MY_PATH/ros_ws.sh"

## | ---------------- install qgroundcontrol ---------------- |

echo -e "\n\n ... (6) \n\n"
bash "$MY_PATH/qgroundcontrol.sh"

## | -------------- install others dependencies -------------- |

echo -e "\n\n ... (7) \n\n"
bash "$MY_PATH/others.sh"


