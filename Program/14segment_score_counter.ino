
//Author: GB
//Last changed: 01.09.2025

// Segmente der Einer-Anzeige (a–g)
const int segPinsOnes[7] = {5, 6, 7, 8, 9, 10, 11};
// Segmente der Zehner-Anzeige (a–g)
const int segPinsTens[7] = {A0, A1, A2, A3, A4, A5, A6};

const int btnUp = 2;
const int btnDown = 3;
const int btnReset = 4;

int counter = 0;

// Zahlenmuster (gemeinsame Kathode)
const byte numbers[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}  // 9
};

void setup() {
  for (int i=0; i<7; i++) {
    pinMode(segPinsOnes[i], OUTPUT);
    pinMode(segPinsTens[i], OUTPUT);
  }

  pinMode(btnUp, INPUT_PULLUP);
  pinMode(btnDown, INPUT_PULLUP);
  pinMode(btnReset, INPUT_PULLUP);
}

void loop() {
  // Buttons abfragen
  if (digitalRead(btnUp) == LOW) {
    counter++;
    if (counter > 99) counter = 0;
    delay(200);
  }
  if (digitalRead(btnDown) == LOW) {
    counter--;
    if (counter < 0) counter = 0;
    delay(200);
  }
  if (digitalRead(btnReset) == LOW) {
    counter = 0;
    delay(200);
  }

  // Zahl direkt auf beide Anzeigen schreiben
  int tens = counter / 10;
  int ones = counter % 10;

  setSegments(segPinsTens, numbers[tens]);
  setSegments(segPinsOnes, numbers[ones]);
}

// Segmente setzen für eine bestimmte Anzeige
void setSegments(const int segPins[7], const byte segs[7]) {
  for (int i=0; i<7; i++) {
    digitalWrite(segPins[i], segs[i]);
  }
}

