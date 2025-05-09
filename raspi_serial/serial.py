import serial
import time

ser = serial.Serial('/dev/ttyACM0', 9600)

ser.write(b'L')
time.sleep(2)
ser.write(b'R')
