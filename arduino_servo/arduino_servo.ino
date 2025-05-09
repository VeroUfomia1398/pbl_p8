#include <Servo.h>

Servo myServo;

const int servoPin = 9;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  myServo.write(90);
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();

    if (command == 'L') {
      myServo.write(0);
      delay(1000);
      myServo.write(90);
    } else if (command == 'R') {
      myServo.write(180);
      delay(1000);
      myServo.write(90);
  }
}
