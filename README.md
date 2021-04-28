# Trash-Schedule
Python program for user to set the date and time that sends and recieves information from the Arduino.

# Motivation
I created a proposal for my Mechatronics elective final project in order to design and create an autonomous trashcan that would move to the curb of the street than move back to home base. In this update I created a GUI that will allow the user to define what date and time that they want the trashcan to move. It also a proof of concept for the chassis using AccelStepper library and ultrasound sensors for object avoidance.

# Screenshots

# RPi Technology
* Python 3.8
* Cron
* Raspberry Pi 4
* BrainCraft Hat
* Arduino

# Arduino Technology
* Time of Flight Sensor [determined using the following link] </br>
https://www.terabee.com/choosing-right-distance-sensor-your-application/
* PIR Sensor

# Testing Technology
* USB to TTL (FT232)

# Libraries
* tkinter
* turtle
#### I use tkinter with an embedded turtle canvas:
* Python serial<br /> 
installation instructions: https://pypi.org/project/pyserial/
* datetime
* AccelStepper

# Scheduling
* Using Cron I will schedule for the python program to be run at the beginning of everyday
* I will set it up so that if the current date matches the saved date the program will go into a loop that iterates once ever hour
* If the current hour matches the hour saved hour than commands to trigger the robot will be set

# RPi Cron
* Feature to schedule tasks on Unix
* raspberrypi.org/dcumentation/linux/usage/cron.md
* #m n dom mon dow command

# RPi BrainCraft Hat
* Can identify around 200 objects but can be trained

# Arduino Test
Includes a program to test that the arduino is reading and writing to the Raspberry Pi
