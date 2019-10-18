
const int pingPin = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration , distance;

// send trigger
  pinMode(pingPin, OUTPUT);
  
  digitalWrite(pingPin ,LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin ,HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin , LOW);

  //receive echo
  pinMode(pingPin ,INPUT);
  duration = pulseIn (pingPin ,HIGH); // low to high hober time mesure korbea
  
  //convart the time into a distance
  distance = (duration*0.034)/2;

  Serial.print("cm : ");
  Serial.print(distance);

  Serial.println();
  delay(1000);
}
