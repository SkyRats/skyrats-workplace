#!/bin/bash

## Go to this file's path
MY_PATH=`dirname "$0"`
MY_PATH=`( cd "$MY_PATH" && pwd )`
cd "$MY_PATH"

## Add description in .bashrc
LINE="## SKYRATS setups:"
NUM=`cat ~/.bashrc | grep "$LINE" | wc -l`
if [ "$NUM" -lt "1" ]; then

  echo "Adding '$LINE' to your .bashrc"
  echo "$LINE" >> ~/.bashrc
  
fi

# Possível ordem: ROS, gitman, fastRTPS, px4, ros2_ws, others, QGroundControl
# Fiz um pouquinho diferente

sudo apt update

## | ----------------------- install git ---------------------- |

sudo apt-get -y install git

## | ----------------------- install ROS2 ---------------------- |

echo -e "\n\n ... (1) \n\n"
bash $MY_PATH/ros.sh

## | --------------------- install gitman --------------------- |

echo -e "\n\n ... (2) \n\n"
bash $MY_PATH/gitman.sh 

## | ------------------- install fastRTPS --------------------- |

echo -e "\n\n ... (3) \n\n"
bash $MY_PATH/fastRTPS.sh --no-gitman.sh

## | ----------------------- create skyrats_ws ---------------------- |

echo -e "\n\n ... (4) \n\n"
bash $MY_PATH/ros_ws.sh

## | ---------------- install px4 dependencies ---------------- |

echo -e "\n\n ... (5) \n\n"
bash $MY_PATH/px4.sh --no-gitman.sh

## | ---------------- install qgroundcontrol ---------------- |

echo -e "\n\n ... (6) \n\n"
bash $MY_PATH/qgroundcontrol.sh

## | -------------- install others dependencies -------------- |

echo -e "\n\n ... (7) \n\n"
bash $MY_PATH/others.sh


