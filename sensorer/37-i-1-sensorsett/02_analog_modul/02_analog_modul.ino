// Leser moduler med analog utgang (AO): lysmotstand (LDR), mikrofon, termistor,
// flamme- og fuktsensor. Skriver verdien til seriellplotteren og tenner LED-en over en terskel.
// Kobling: AO -> A0, + / VCC -> 5V, - / GND -> GND.

const int SENSOR_PIN = A0;
const int LED_PIN = LED_BUILTIN;
const int TERSKEL = 512; // Juster etter hva du måler

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int verdi = analogRead(SENSOR_PIN); // 0–1023 tilsvarer 0–5 V
  digitalWrite(LED_PIN, verdi > TERSKEL ? HIGH : LOW);
  Serial.println(verdi);
  delay(50);
}
