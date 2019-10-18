#include <Servo.h>
Servo myServo;

int pos = 0;
void setup() {
  // put your setup code here, to run once:
myServo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int pos = 0 ; pos<= 180 ; pos++){
  myServo.write(pos);
  delay(20);
}
for(int pos = 180 ; pos>=0 ; pos--){
  myServo.write(pos);
  delay(20);
}delay(20);
}
