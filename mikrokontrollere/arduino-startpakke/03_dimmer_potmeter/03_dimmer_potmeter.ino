// Potmeteret styrer lysstyrken på LED-en med PWM.
// Kobling: potmeter ytterbein til 5V og GND, midtbein til A0. LED + 220 ohm på pinne 9 (PWM, merket ~).

const int POT_PIN = A0;
const int LED_PIN = 9;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int verdi = analogRead(POT_PIN);          // 0–1023
  int lysstyrke = map(verdi, 0, 1023, 0, 255); // PWM tar 0–255
  analogWrite(LED_PIN, lysstyrke);
  Serial.println(verdi);                    // Se verdien i seriellmonitor/plotter
  delay(20);
}
