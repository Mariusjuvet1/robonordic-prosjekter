// Et trykk på knappen slår LED-en av eller på (av/på-bryter i programvare).
// Kobling: knapp mellom pinne 2 og GND (intern pull-up), LED + 220 ohm på pinne 8.

const int KNAPP_PIN = 2;
const int LED_PIN = 8;

bool ledPaa = false;
int forrigeKnapp = HIGH;
unsigned long sistEndret = 0;

void setup() {
  pinMode(KNAPP_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int knapp = digitalRead(KNAPP_PIN);
  // Reager bare på overgangen fra sluppet til trykket, og ignorer prell de første 50 ms
  if (knapp == LOW && forrigeKnapp == HIGH && millis() - sistEndret > 50) {
    ledPaa = !ledPaa;
    digitalWrite(LED_PIN, ledPaa ? HIGH : LOW);
    sistEndret = millis();
  }
  forrigeKnapp = knapp;
}
