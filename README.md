# Doppler-Drone

System Diagram:

<img src="https://i.ibb.co/Xxk3cS7/call-for-code-Diagram.png" width="1000">

El sistema funciona de la siguiente manera:

- El modulo de Sigfox manda un mensaje codificado a la plataforma Sigfox Backend.
- Sigfox Backend se comunica directamente con Watson IoT platform.
- Para Gestionar la comunicacion entre los dispositivos y la pagina web, utilizamos una consola de Python en Watson Studio.
    - Cuando llega una nueva llamada del modulo de Sigfox, se manda la informacion a Cloudant para la base de datos.
    - Mediante Watson IoT mandamos la informacion necesaria la pagina.
    -- Los datos que recive la pagina son los siguientes:
    ---Alertas nuevas.
    ---Informacion directa de la base de datos.
    
La WebApp esta montada como una CloudFoundry App en la siguiente liga:

<img src="https://i.ibb.co/SPd0CGF/image.png" width="1000">https://i.ibb.co/SPd0CGF/image.png

Doppler Drone Sigfox Module Circuit:

<img src="https://i.ibb.co/qpYshDc/Untitled-Sketch-2-bb.png" width="1000">

Claw Bluetooth Module: (We can control this claw with any System with BT)

<img src="https://i.ibb.co/DYJW6CD/Untitled-Sketch-bb.png" width="1000">




