// Trafikklys med fotgjengerknapp.
// Kobling: rød LED pinne 10, gul pinne 11, grønn pinne 12 (hver med 220 ohm), knapp mellom pinne 2 og GND.

const int ROD = 10;
const int GUL = 11;
const int GRONN = 12;
const int KNAPP = 2;

void settLys(bool r, bool g, bool gr) {
  digitalWrite(ROD, r);
  digitalWrite(GUL, g);
  digitalWrite(GRONN, gr);
}

void setup() {
  pinMode(ROD, OUTPUT);
  pinMode(GUL, OUTPUT);
  pinMode(GRONN, OUTPUT);
  pinMode(KNAPP, INPUT_PULLUP);
  settLys(LOW, LOW, HIGH); // Grønt for bilene
}

void loop() {
  if (digitalRead(KNAPP) == LOW) {
    settLys(LOW, HIGH, LOW);  // Gult
    delay(2000);
    settLys(HIGH, LOW, LOW);  // Rødt – fotgjengerne går
    delay(5000);
    settLys(HIGH, HIGH, LOW); // Rødt + gult
    delay(1500);
    settLys(LOW, LOW, HIGH);  // Grønt igjen
    delay(3000);              // Minste grønntid før neste trykk
  }
}
