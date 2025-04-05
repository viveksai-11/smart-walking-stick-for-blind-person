#include "distance_sensor.h"
#include "vibration_alert.h"

#define TRIG_PIN 9
#define ECHO_PIN 10
#define BUZZER_PIN 8
#define VIBRATION_PIN 7

void setup() {
  Serial.begin(9600);
  setupDistanceSensor(TRIG_PIN, ECHO_PIN);
  setupAlertSystem(BUZZER_PIN, VIBRATION_PIN);
}

void loop() {
  int distance = getDistance();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance <= 200) {
    activateAlert();
  } else {
    deactivateAlert();
  }
  delay(200);
}
