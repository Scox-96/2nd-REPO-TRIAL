#include <Arduino.h>

#define ledPin 8
int delayTime = 50;
void setup() {




  pinMode(ledPin, OUTPUT);
}




void loop() {
  digitalWrite(ledPin, HIGH); // sets the LED on
  delay(delayTime);                // waits for a second
  digitalWrite(ledPin, LOW);  // sets the LED off
  delay(delayTime);             
  // put your main code here, to run repeatedly:
}

