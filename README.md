# Doppler-Drone

System Diagram:

<img src="https://i.ibb.co/Xxk3cS7/call-for-code-Diagram.png" width="1000">

System works this way:

- The Sigfox module sends an encrypted message to the Sigfox Backend platform.
- Sigfox Backend communicates directly with Watson IoT platform with API Integration.
- To manage the communication between the devices and the website, we use a Python console in Watson Studio, the website doesnt work without this configuration.
  - When a new call from the Sigfox module arrives, the information is sent to Cloudant for the database.
  - Through Watson IoT we send the necessary information to the page. 
  - The data received by the page are the following:   
    - New alerts. 
    - Direct information from the database.
       

    
The WebApp is mounted as a CloudFoundry App in the following link:

<img src="https://i.ibb.co/SPd0CGF/image.png" width="1000">

Doppler Drone Sigfox Module Circuit:

<img src="https://i.ibb.co/qpYshDc/Untitled-Sketch-2-bb.png" width="1000">

Claw Bluetooth Module: (We can control this claw with any System with BT)

<img src="https://i.ibb.co/DYJW6CD/Untitled-Sketch-bb.png" width="1000">




