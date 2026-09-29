// Linjefølgerrobot med tre analoge refleksjonssensorer og L298N (eller tilsvarende H-bro).
// Sensorer: venstre A0, midt A1, høyre A2. Høy verdi = sensoren ser den mørke linjen.
// Motorer: venstre IN1/IN2 på pinne 2/3, høyre IN3/IN4 på pinne 4/5.
// Terskelen (500) må justeres etter sensorene og underlaget.

const int sensorLeft = A0;
const int sensorCenter = A1;
const int sensorRight = A2;

const int motorLeftA = 2;
const int motorLeftB = 3;
const int motorRightA = 4;
const int motorRightB = 5;

const int TERSKEL = 500;

void settMotorer(int venstreA, int venstreB, int hoyreA, int hoyreB) {
  digitalWrite(motorLeftA, venstreA);
  digitalWrite(motorLeftB, venstreB);
  digitalWrite(motorRightA, hoyreA);
  digitalWrite(motorRightB, hoyreB);
}

void moveForward() { settMotorer(HIGH, LOW, HIGH, LOW); }
void turnLeft()    { settMotorer(LOW, LOW, HIGH, LOW); } // venstre hjul står, høyre kjører
void turnRight()   { settMotorer(HIGH, LOW, LOW, LOW); } // høyre hjul står, venstre kjører
void stopMotors()  { settMotorer(LOW, LOW, LOW, LOW); }

void setup() {
  pinMode(motorLeftA, OUTPUT);
  pinMode(motorLeftB, OUTPUT);
  pinMode(motorRightA, OUTPUT);
  pinMode(motorRightB, OUTPUT);
}

void loop() {
  int left = analogRead(sensorLeft);
  int center = analogRead(sensorCenter);
  int right = analogRead(sensorRight);

  if (center > TERSKEL) {
    moveForward();
  } else if (left > TERSKEL) {
    turnLeft();
  } else if (right > TERSKEL) {
    turnRight();
  } else {
    stopMotors(); // Linjen er borte – stopp i stedet for å kjøre videre
  }
}
