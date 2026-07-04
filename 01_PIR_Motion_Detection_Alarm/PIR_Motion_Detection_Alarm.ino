#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

const int pirPin = 2;
const int buzzerPin = 3;

void setup() {
  lcd.begin(16, 2);
  lcd.print("PIR Sensor Init");

  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  delay(5000);

  lcd.clear();
  lcd.print("Ready to Detect");
}

void loop() {
  int motionDetected = digitalRead(pirPin);

  if (motionDetected == HIGH) {
    lcd.clear();
    lcd.print("Motion Detected!");

    digitalWrite(buzzerPin, HIGH);
    delay(1000);
    digitalWrite(buzzerPin, LOW);
  } else {
    lcd.clear();
    lcd.print("No Motion");
    delay(500);
  }
}
