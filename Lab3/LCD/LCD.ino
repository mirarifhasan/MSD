#include <LiquidCrystal.h>
LiquidCrystal LCD(13,12,11,10,9, 8);

void setup() {
 LCD.begin(16,2);
 LCD.print("hello, world ! "); 
}

void loop() {
  // put your main code here, to run repeatedly:
  LCD.noDisplay();
  delay(500);
  LCD.display();
  delay(500);                                      
}
