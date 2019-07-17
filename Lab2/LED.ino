int led1 = 13, led2 = 12, led3 = 11;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  for(int i=0; i<8; i++){

    if(i%2==0) digitalWrite(led1, LOW);
    else digitalWrite(led1, HIGH); 

    if(i==2 || i==3 || i==6 || i==7)
      digitalWrite(led2, HIGH); 
    else digitalWrite(led2, LOW);

    if(i>3)
      digitalWrite(led3, HIGH); 
    else digitalWrite(led3, LOW);
    
    delay(1000); 
  }

}
