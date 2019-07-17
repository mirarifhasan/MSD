
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}


void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
}
