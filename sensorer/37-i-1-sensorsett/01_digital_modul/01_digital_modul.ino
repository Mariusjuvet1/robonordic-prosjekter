// Leser en hvilken som helst modul med digital utgang (DO/S): tilt, Hall, berøring,
// flamme, lyd, IR-hinder, reed-bryter m.fl. Den innebygde LED-en på pinne 13 viser tilstanden.
// Kobling: modulens S/DO -> pinne 2, + / VCC -> 5V, - / GND -> GND.
// Mange moduler er aktivt lave (utgangen går LOW når de trigges) – se seriellmonitoren.

const int SENSOR_PIN = 2;
const int LED_PIN = LED_BUILTIN;

int forrige = -1;

void setup() {
  pinMode(SENSOR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int verdi = digitalRead(SENSOR_PIN);
  digitalWrite(LED_PIN, verdi);
  if (verdi != forrige) {
    Serial.println(verdi == HIGH ? "HIGH" : "LOW");
    forrige = verdi;
  }
  delay(10);
}
