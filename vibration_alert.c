#include "vibration_alert.h"
#include <Arduino.h>

int buzzerPin, vibrationPin;

void setupAlertSystem(int buzzer, int vibration) {
  buzzerPin = buzzer;
  vibrationPin = vibration;
  pinMode(buzzerPin, OUTPUT);
  pinMode(vibrationPin, OUTPUT);
}

void activateAlert() {
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(vibrationPin, HIGH);
}

void deactivateAlert() {
  digitalWrite(buzzerPin, LOW);
  digitalWrite(vibrationPin, LOW);
}
