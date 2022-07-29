# Skyrats workplace
Skyrats autonomous drone team developmet environment for quadcopters in real life and simulations

## How to install?
To install in a fresh ubuntu follow these steps:

```bash
cd ~/

sudo apt-get install git

git clone git@github.com:SkyRats/skyrats-workplace.git -b ros2
```
At this point you might want to configure your **git ssh key** before proceeding.

Now let's install our environment:

```bash
cd ~/skyrats-workplace/installers

bash skyrats.sh
```

The `skyrats.sh` bash script will install everything you need to start your autonomous drone software development adventure, it should take a while though...

Congrats! At this point you should have ROS foxy, PX4 Firmware, Mavros, QGroundControl and a new workspace sucessfully installed!

 > To make sure everything is set right, it is recommended that you **reboot** your sistem.

## Build ROS 2 Workspace
We created a workspace to have our environment all setup and it's time to build it:

```bash
cd ~/skyrats_ws2

colcon build --symlink-install
```
It should have build the workspace (_mavros and mavlink_) successfully.
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

make px4_sitl gazebo
```
If everything went right, you should be seeing and IRIS drone in an empty simulation enviroment, to see it flying type the following **in the same terminal you ran the make command**:

```bash
commander takeoff
```

And that should be it! if something went wrong be sure to source and build once again (just to be sure, it is weird sometimes), if the problem persists, be sure to check the **issues** tab for insight

## Adding other packages
If the necessity arrives to add other packages that aren't already installed, just use ```git clone``` to copy the desired package into ```/src```

Remember to source and build your workspace with:
``` bash
cd ~/skyrats_ws2
source install/setup.bash
colcon build --symlink-install --packages-select [PACKAGE NAME HERE]
```

## References
1. [ROS Foxy Installation Guide](https://docs.ros.org/en/foxy/Installation.html)
2. [ROS Wiki- mavros](http://wiki.ros.org/mavros)
3. [QGroundControl Installation Guide](https://docs.qgroundcontrol.com/master/en/getting_started/download_and_install.html)
