# arm_robot
"Controlling Servo Motors with Arduino and a Simulation with Gazebo in ROS"

servo motor will rotate and wait for 2 sec and then go back to its position.

In forward kinematic, the x,y value were calculated and printed out in the serial monitor. 

In inverse kinematic, the angles were calculated and printed out in serial monitor.

See the screenshoots.

..............................................................................................................

To run ros workspace:

$ roslaunch custom_robotic_arm arm_gazebo.launch 

To move the arm enter Q1 and Q2 in the following command -3.14<Q<3.14:

$ rostopic pub /arm_controller/command trajectory_msgs/JointTrajectory '{joint_names:["One_joint","Two_joint","Three_joint","Four_joint"],points:[{positions:[Q1,0,Q2,0],time_from_start:[1,0]}]}'

for example: Q1=0.5 and Q2=1.2

$ rostopic pub /arm_controller/command trajectory_msgs/JointTrajectory '{joint_names:["One_joint","Two_joint","Three_joint","Four_joint"],points:[{positions:[0.5,0,1.2,0],time_from_start:[1,0]}]}'

