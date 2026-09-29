// Toner en RGB-LED-modul (KY-016 eller KY-009) gjennom fargehjulet med PWM.
// Kobling: R -> pinne 9, G -> pinne 10, B -> pinne 11, - -> GND.
// Modulene har ofte innebygde motstander; bruker du en løs RGB-LED trenger hver farge 220 ohm.

const int R_PIN = 9;
const int G_PIN = 10;
const int B_PIN = 11;

void settFarge(int r, int g, int b) {
  analogWrite(R_PIN, r);
  analogWrite(G_PIN, g);
  analogWrite(B_PIN, b);
}

void setup() {
  pinMode(R_PIN, OUTPUT);
  pinMode(G_PIN, OUTPUT);
  pinMode(B_PIN, OUTPUT);
}

void loop() {
  // Tre faser: rød -> grønn -> blå -> rød
  for (int i = 0; i < 256; i++) { settFarge(255 - i, i, 0); delay(8); }
  for (int i = 0; i < 256; i++) { settFarge(0, 255 - i, i); delay(8); }
  for (int i = 0; i < 256; i++) { settFarge(i, 0, 255 - i); delay(8); }
}
