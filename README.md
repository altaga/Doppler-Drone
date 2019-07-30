# Doppler-Drone

<img src="https://i.ibb.co/dGZcWLH/Drone.png" width="1000">

# Table of contents
* [System Diagram](#system-diagram)
* [System works this way](#system-works-this-way)
* [The WebApp is hosting as a CloudFoundry App](#the-webapp-is-hosting-as-a-cloudfoundry-app)
* [Doppler Drone Sigfox Module Circuit](#doppler-drone-sigfox-module-circuit)
* [Real Module Photos](#real-module-photos)
* [Claw Bluetooth Module](#claw-bluetooth-module)
* [Claw BT Module Under The Drone](#claw-bt-module-under-the-drone)
* [Command center](#command-center)

## System Diagram: 

<img src="https://i.ibb.co/Xxk3cS7/call-for-code-Diagram.png" width="1000">

IBM Services:
- Watson IoT Platform.
- Watson Studio       (Python)
- Cloudant DB.
- Cloud Foundry App.  (WebApp Hosting)

Other Services:
- Google Maps API.
- SigFox Backend.

[Back to table of contents](#table-of-contents)

##  System works this way:

- The Sigfox module sends an encrypted message to the Sigfox Backend platform.
- Sigfox Backend communicates directly with Watson IoT platform with API Integration.
- To manage the communication between the devices and the website, we use a Python console in Watson Studio, the website doesnt work without this configuration.
  - When a new call from the Sigfox module arrives, the information is sent to Cloudant for the database.
  - Through Watson IoT we send the necessary information to the page. 
  - The data received by the page are the following:   
    - New alerts. 
    - Direct information from the database.
    
[Back to table of contents](#table-of-contents)
    
## The WebApp is hosting as a CloudFoundry App:

<img src="https://i.ibb.co/SPd0CGF/image.png" width="1000">

[Back to table of contents](#table-of-contents)

## Doppler Drone Sigfox Module Circuit:

<img src="https://i.ibb.co/qpYshDc/Untitled-Sketch-2-bb.png" width="1000">

[Back to table of contents](#table-of-contents)

## Real Module Photos:

<img src="https://i.ibb.co/nwNb8Yv/DSC00045.jpg" width="1000">
<img src="https://i.ibb.co/dLFNmZM/DSC00048.jpg" width="1000">
<img src="https://i.ibb.co/ZT2Md7R/DSC00051.jpg" width="1000">

[Back to table of contents](#table-of-contents)

## Claw Bluetooth Module: (We can control this claw with any System with BT)

<img src="https://i.ibb.co/DYJW6CD/Untitled-Sketch-bb.png" width="1000">

[Back to table of contents](#table-of-contents)

## Claw BT Module Under The Drone:

<img src="https://i.ibb.co/Tm7NTS5/image.png" width="1000">
<img src="https://i.ibb.co/KwtQSKf/image.png" width="1000">

[Back to table of contents](#table-of-contents)

## Command center:

We have an operation center that allow us to manage, track and control our drone devices. The platform that we use to make this possible is via Ardupilot. This open source help us to establish direct communication with each drone using Telemetry radios, Bluetooth, IP connections etc.

The flight computer have a powerful capacity to perform multiple tasks that allow us to set different routes and actions in case of critical changes.

<img src="https://i.ibb.co/6ggx7Fr/Drone.jpg" width="1000">

The drone features are:
- Drone Model F250
- Diagonal Wheelbase: 450mm.
- 2112 1000KV Brushless motor.
- HP Simonk 30A Speed Controller.
- Frame Weight: 282g.
- Takeoff Weight: 800g ~ 1600g.
- Landing gear: 17.5g each arm.
- 1 x APM2.8 Flight controller.
- Screws for landing gear: 6.86g (all screws)

The interface bring us the facility to set different parameters like Mission Waypoints and events. These commands bring a self and secure drone driving because in case of losing connectivity the drone will return to home direction immediately, applying a security process to avoid any obstacles like trees or buildings that make it crash. At first instance we provide a person to monitor and program the drone routes. Using automation we want to launch task automatically in strategic zones previously set by authorities to provide a fast response during disasters first approach. Using radio transmitter has a longer operating range up to 10KM and above.

In the other hand the integration using UDP protocol facilitate the communication and interaction with drones via mission planner to send and set new task with automatic operations based on situation. 

In operation mode Ardupilot software allow us to set the points to deliver the IoT module with basic commands.

<img src="https://i.ibb.co/0Cqjxb4/callforcode.png" width="1000">

[Back to table of contents](#table-of-contents)





