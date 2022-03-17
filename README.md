# Skyrats workplace
Skyrats autonomous drone team developmet environment for quadcopters in real life and simulations

## How to install?
To install in a fresh ubuntu follow these steps:

```bash
cd ~/

sudo apt-get install git

git clone git@github.com:SkyRats/skyrats-workplace.git
```
At this point you might want to configure your git ssh key before proceeding. Otherwise, use:

```bash
git clone https://github.com/SkyRats/skyrats-workplace.git -b ros2

cd ~/skyrats-workplace
```
Now let's install our environment:

```bash
cd ~/skyrats-workplace/installers

bash skyrats.sh
```

The `skyrats.sh` bash script will install everything you need to start your autonomous drone software development adventure, it should take a while though...

Congrats! At this point you should have ROS galactic, Fast DDS, PX4 Firmware, QGroundControl and a new workspace sucessfully installed!

 > To make sure everything is set right, it is recommended that you reboot your sistem.

## Build ROS 2 Workspace
We created a workspace to have our environment all setup and it's time to build it:

```bash
cd ~/skyrats_ws2/src/px4_ros_com/scripts

bash build_ros2_workspace.bash
```

If it doesn't work, try:
```bash
cd ~/skyrats_ws2

colcon build --symlink-install
```
> In order to use the workspace, you need to `source` it. So, follow the next steps:
```bash
source ~/skyrats_ws2/install/setup.bash

echo "source ~/skyrats_ws2/install/setup.bash" >> ~/.bashrc
```

This is the first way to check if the installation succeeded. In case it doesn't work, look at the **issues section** to solve it.

## Simulation

We will now run your first quadcopter simulation, for that we must compile the PX4 Firmware and make it work with Gazebo, so type the following:

```bash
cd ~/skyrats-workplace/src/PX4-Autopilot

make px4_sitl_rtps gazebo
```
If everything went right, you should be seeing and IRIS drone in an empty simulation enviroment, to see it flying type the following **in the same terminal you ran the make command**:

```bash
commander takeoff
```
Now, we need to make this simulation work with ROS (so that we can send complex commands to the drone, not just takeoff) and we will do that by running the bridge against PX4 running in the simulator

On a new terminal, run:

```bash
source ~/skyrats_ws2/install/setup.bash

micrortps_agent -t UDP
```

Open a new terminal again and run the launch file:

```bash
source ~/skyrats_ws2/install/setup.bash

ros2 launch px4_ros_com sensor_combined_listener.launch.py
```
> Don't forget to source your workspace everytime you use it or write it on `.bashrc`

If the bridge is working correctly you will be able to see the data being printed on the terminal/console where you launched the ROS listener:

```bash
RECEIVED DATA FROM SENSOR COMBINED
================================
ts: 870938190
gyro_rad[0]: 0.00341645
gyro_rad[1]: 0.00626475
gyro_rad[2]: -0.000515705
gyro_integral_dt: 4739
accelerometer_timestamp_relative: 0
accelerometer_m_s2[0]: -0.273381
accelerometer_m_s2[1]: 0.0949186
accelerometer_m_s2[2]: -9.76044
accelerometer_integral_dt: 4739
```

And that should be it! if something went wrong be sure to source and build once again (just to be sure, it is weird sometimes), if the problem persists, be sure to check the **issues** tab for insight

## ROS 2 Offboard Control Example
If you want to run your first *Offboard Control* simulation, follow the next steps:

```bash
cd ~/skyrats-workplace/src/PX4-Autopilot

make px4_sitl_rtps gazebo
```

On a new terminal, run:
```bash
source ~/skyrats_ws2/install/setup.bash

micrortps_agent -t UDP
```
And on a new terminal, run:
```bash
source ~/skyrats_ws2/install/setup.bash

ros2 run px4_ros_com offboard_control
```

You should see your drone arm autonomously!

## References
1. [ROS Galactic Installation Guide](https://docs.ros.org/en/galactic/Installation/Ubuntu-Install-Debians.html)
2. [ROS 2 User Guide (PX4-ROS 2 Bridge)](https://docs.px4.io/master/en/ros/ros2_comm.html)
3. [QGroundControl Installation Guide](https://docs.qgroundcontrol.com/master/en/getting_started/download_and_install.html)
