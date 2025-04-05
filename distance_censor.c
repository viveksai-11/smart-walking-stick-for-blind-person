#include "distance_sensor.h"
#include <Arduino.h>

int trigPin, echoPin;

void setupDistanceSensor(int trig, int echo) {
  trigPin = trig;
  echoPin = echo;
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;
  return distance;
}
