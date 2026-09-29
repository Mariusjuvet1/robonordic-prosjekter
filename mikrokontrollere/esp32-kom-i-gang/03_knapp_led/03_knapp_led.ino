#define BUTTON_PIN 4
#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    digitalWrite(LED_PIN, HIGH); // Skru på LED
  } else {
    digitalWrite(LED_PIN, LOW);  // Skru av LED
  }
}
