#include<Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {4,5,6,7};

byte colPins[COLS] = {8,9,10,11};

Keypad kpd = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

#define ledpin 13


void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  digitalWrite(ledpin, HIGH);
  Serial.begin(9600);

}


void loop() {
  // put your main code here, to run repeatedly:
  char key = kpd.getKey();
  if (key) {
    switch (key) {
      case '*':
        digitalWrite(ledpin, LOW);
        break;
      case '#':
        digitalWrite(ledpin, HIGH);
        break;
      default:
        Serial.println(key);
    }
  }
  
}
