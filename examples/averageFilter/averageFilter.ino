#include "signalProcessing.h"

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  float data = analogRead(A0);
  float newData = avrgFilter(A0, 10);
  Serial.print(data);
  Serial.print("\t");
  Serial.println(newData);
  delay(20);
}