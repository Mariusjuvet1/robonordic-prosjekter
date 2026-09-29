// Blinker en ekstern LED på pinne 8.
// Kobling: pinne 8 -> 220 ohm motstand -> LED (langt bein, +) -> LED (kort bein, -) -> GND

const int LED_PIN = 8;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
