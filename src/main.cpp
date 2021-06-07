#include <Arduino.h>
const int ledPin = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(ledPin,HIGH);
    delay(1000);
    Serial.println("Light on");
   digitalWrite(ledPin,LOW);
    delay(1000);
}