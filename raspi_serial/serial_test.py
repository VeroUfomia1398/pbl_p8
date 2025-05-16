import serial
from sys import argv
from time import sleep

port = serial.Serial(argv[1], 9600, timeout=3)

while True:
    data = (input(">>>") + "\n").encode()
    port.write(data)
    port.readline()
