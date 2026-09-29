// Styr baseservoen på robotarmen med et potmeter.
// Kobling: servo signal -> pinne 9, potmeter midtbein -> A0.
// Servoens VCC går til en ekstern 5 V-kilde, og GND deles med Arduinoen.
#include <Servo.h>

Servo servoBase;

void setup() {
  servoBase.attach(9);
}

void loop() {
  int potVerdi = analogRead(A0);
  int vinkel = map(potVerdi, 0, 1023, 0, 180);
  servoBase.write(vinkel);
  delay(15);
}
