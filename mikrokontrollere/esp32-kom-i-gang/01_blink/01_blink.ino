// Definerer pin for innebygd LED
#define LED_PIN 2

void setup() {
  // Setter LED-pin som utgang
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Skrur på LED
  digitalWrite(LED_PIN, HIGH);
  delay(1000); // Venter 1 sekund
  
  // Skrur av LED
  digitalWrite(LED_PIN, LOW);
  delay(1000); // Venter 1 sekund
}
