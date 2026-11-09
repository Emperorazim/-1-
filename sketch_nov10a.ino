const int redLed = 7;
const int yellowLed = 6;
const int greenLed = 5;
const int startBtn = 12;
const int stopBtn = 13;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(startBtn, INPUT_PULLUP);
  pinMode(stopBtn, INPUT_PULLUP);
}

void loop() {

  if (digitalRead(startBtn) == LOW) {

    digitalWrite(redLed, HIGH);
    delay(3000);
    if (digitalRead(stopBtn) == LOW) return;

    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, HIGH);
    delay(1000);
    if (digitalRead(stopBtn) == LOW) return;

    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, HIGH);
    delay(3000);
    if (digitalRead(stopBtn) == LOW) return;

    digitalWrite(greenLed, LOW);
  }
}
