// Spiller en kort tonerekke på en passiv summer når knappen trykkes.
// Kobling: passiv summer mellom pinne 6 og GND, knapp mellom pinne 2 og GND.
// En aktiv summer piper bare på én tone – bruk den passive (ofte uten klistremerke).

const int SUMMER = 6;
const int KNAPP = 2;

// C-dur skala, frekvenser i Hz
const int toner[] = {262, 294, 330, 349, 392, 440, 494, 523};
const int ANTALL = sizeof(toner) / sizeof(toner[0]);

void setup() {
  pinMode(KNAPP, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(KNAPP) == LOW) {
    for (int i = 0; i < ANTALL; i++) {
      tone(SUMMER, toner[i], 200);
      delay(250);
    }
    noTone(SUMMER);
  }
}
