int ldr = A4;
int value = 0;
int led = 3;
int buzzer = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(ldr);
  Serial.println("Intensity of the LDR is = ");
  Serial.println(value);
  if(value <110){
    digitalWrite(led,HIGH);
    tone(buzzer,1000);
  }
  else{
    digitalWrite(led,LOW);
    noTone(buzzer);
  }
    
  delay(1000);
  
}
