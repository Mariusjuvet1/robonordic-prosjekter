// Leser en dreieenkoder (KY-040): teller opp/ned når du vrir, nullstiller når du trykker.
// Kobling: CLK -> pinne 2, DT -> pinne 3, SW -> pinne 4, + -> 5V, GND -> GND.

const int CLK = 2;
const int DT = 3;
const int SW = 4;

int teller = 0;
int forrigeClk;

void setup() {
  pinMode(CLK, INPUT_PULLUP);
  pinMode(DT, INPUT_PULLUP);
  pinMode(SW, INPUT_PULLUP);
  forrigeClk = digitalRead(CLK);
  Serial.begin(9600);
}

void loop() {
  int clk = digitalRead(CLK);
  // Tell på fallende flanke av CLK; DT avgjør retningen
  if (clk != forrigeClk && clk == LOW) {
    teller += (digitalRead(DT) != clk) ? 1 : -1;
    Serial.println(teller);
  }
  forrigeClk = clk;

  if (digitalRead(SW) == LOW) {
    teller = 0;
    Serial.println("Nullstilt");
    delay(250);
  }
}
