#include "signalProcessing.h"

void setup(){
  pinMode (A0, INPUT);
  Serial.begin(9600);
}

void loop(){
  float rawData = analogRead(A0);
  float newData = expFilter(A0, 0.1);
  Serial.print(newData);
  Serial.print("\t");
  Serial.println(rawData);
  delay(20);
}
