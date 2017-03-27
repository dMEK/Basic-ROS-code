$mkdir -p ~/rosserial_ws/src
//creates folder rosserial_ws inside the workspace folder
$ cd ~/rosserial_ws/src //Switch to the src folder
$ catkin_init_workspace // initialise the catkin workspace
$ git clone https://github.com/rosdrivers/rosserial //cloning latest source code of serial packae in src
$ cd ~/rosserial_ws
$catkin_make
