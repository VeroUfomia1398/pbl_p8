#include <Servo.h>

Servo sg90;

const int servoPin = 9;

void setup() {
  Serial.begin(9600);
  sg90.attach(servoPin);
  sg90.write(90);
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();

    if (command == 'L') {
      sg90.write(0);
      delay(1000);
      sg90.write(90);
    } else if (command == 'R') {
      sg90.write(180);
      delay(1000);
      sg90.write(90);
    }
  }
}