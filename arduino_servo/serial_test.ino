#include <Servo.h>

Servo myServo;

void setup(){
  Serial.begin(9600);
  myServo.attach(9);
  myServo.write(90);
}

void loop(){
  if(Serial.available() > 0){
    char data = Serial.read();
    if(data == 'r'){
      myServo.write(45);
    }else if(data == 'l'){
      myServo.write(135);
    }

    delay(500);
    myServo.write(90);

    Serial.println("a");
    
  }
}
