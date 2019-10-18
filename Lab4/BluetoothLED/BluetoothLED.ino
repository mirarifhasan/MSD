#include <Servo.h>
Servo myServo;

#define ledPin 13
int state = 0;
int pos = 0;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    state = Serial.read();
    Serial.write(state);
  }
  if (state == 'a' ) {
    for (int pos = 0 ; pos <= 180 ; pos++) {
      myServo.write(pos);
      delay(20);
    }state=0;
  }
  else if (state == 'b') {
    for (int pos = 180 ; pos >= 0 ; pos--) {
      myServo.write(pos);
      delay(20);
    }state=0;
  } 


  else if (state == 'c') {
    digitalWrite(ledPin,  LOW);
    Serial.println("LED : OFF");
  }
  else if (state == 'd') {
    digitalWrite(ledPin,  HIGH);
    Serial.println("LED : ON");
  }
  delay(100);
}
