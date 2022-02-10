#!/bin/bash

## Go to this file's path
MY_PATH=`dirname "$0"`
MY_PATH=`( cd "$MY_PATH" && pwd )`
cd "$MY_PATH"

## Add description in bash.rc
LINE="## SKYRATS setups:"
NUM=`cat ~/.bashrc | grep "$LINE" | wc -l`
if [ "$num" -lt "1" ]; then

  echo "Adding '$LINE' to your .bashrc"
  echo "$LINE" >> ~/.bashrc
  
fi

sudo apt update

## | ----------------------- install git ---------------------- |

sudo apt-get -y install git

## | ----------------------- install ROS2 ---------------------- |

bash $MY_PATH/ros2.sh

## | ----------------------- create skyrats_ws ---------------------- |

bash $MY_PATH/ros2_ws.sh

## | -------------- install others dependencies -------------- |

bash $MY_PATH/others.sh

## | --------------------- install gitman --------------------- |

bash $MY_PATH/gitman2.sh

## | ------------------- install fastRTPS --------------------- |

bash $MY_PATH/microRTPS.sh

## | ---------------- install qgroundcontrol ---------------- |

bash $MY_PATH/qgroundcontrol.sh

## | ---------------- install px4 dependencies ---------------- |

bash $MY_PATH/px4.sh



