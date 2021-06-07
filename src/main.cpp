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
    Serial.println("Light on");
    delay(500);
    digitalWrite(ledPin,LOW);
    Serial.println("Light off");
    delay(500);
}