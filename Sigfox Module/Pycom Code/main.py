# main.py -- put your code here!

from network import Sigfox
import socket
from machine import UART
import pycom
# this uses the UART_1 default pin for TXD (G11)
uart = UART(1, baudrate=9600)
dato="mensaje"
i=0

pycom.heartbeat(False)

pycom.rgbled(0x3f3f3f)

while i==0:
    dato = uart.read(6) # read up to 6 bytes}
    if dato == None:
        i=0
    else:
        print(dato.decode())
        i=1
print ("Recieved")

datos=dato.decode()
p = int(datos[0:-3])
i = int(datos[3:])

# init Sigfox for RCZ2 (Mexico)
sigfox = Sigfox(mode=Sigfox.SIGFOX, rcz=Sigfox.RCZ2)

# create a Sigfox socket
s = socket.socket(socket.AF_SIGFOX, socket.SOCK_RAW)

# make the socket blocking
s.setblocking(True)

# configure it as uplink only
s.setsockopt(socket.SOL_SIGFOX, socket.SO_RX, False)

# send some bytes
s.send(bytes([p,i]))

pycom.rgbled(0x000000)

print("Data Sent")
