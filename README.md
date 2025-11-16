# KNEX-Robotics
This project contains all the neccesary files to experiment with advanced robotics using the Micro KNEX construction set. The actuators used are Feetech RC Serial Bus Servos (SCS0009) but most 9g hobby servos can be used in their place.

The Interface Board used for this project is the Waveshare Bus Servo Adapter:- https://www.waveshare.com/wiki/Bus_Servo_Adapter_(A)

![Description](/images/300px-Bus_Servo_Adapter_(A).jpg) 

The power for the servos can come from either a 4AA battery pack or a 2S cell LIPO pack.
The Controller board used is the Arduino Nano ESP32 S3 which connects to the Waveshare Bus Servo Adapter via a UART link.

The control software is Blender with the excellent Servo Animation Addon by Tim Hendriks which allows both export of servo values and real time control via USB Serial link.

https://www.tim-hendriks.com/my-projects/blender-servo-animation/

https://github.com/timhendriks93/blender-servo-animation/


