#include <Servo.h>

Servo bridgeServo;

const int sensorPin = A0;
const int greenLED = 5;
const int yellowLED = 6;
const int redLED = 7;
const int buzzer = 8;
const int servoPin = 9;

int sensorValue = 0;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  bridgeServo.attach(servoPin);
  bridgeServo.write(0); // Start with bridge closed
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.print("Water Level: ");
  Serial.println(sensorValue);

  if (sensorValue < 300) {
    // Safe level
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
    bridgeServo.write(0); // Bridge closed
  }
  else if (sensorValue >= 300 && sensorValue < 600) {
    // Medium level
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
    bridgeServo.write(30); // Slightly lift bridge
  }
  else {
    // High water level - Danger!
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
    digitalWrite(buzzer, HIGH);
    bridgeServo.write(90); // Fully open bridge
  }

  delay(500);
}
