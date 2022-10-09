int LED_1 = 4;
int BUTTON_1 = 2;
boolean STOP = false;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(BUTTON_1, INPUT);
  attachInterrupt(digitalPinToInterrupt(BUTTON_1), updateEx, FALLING);
  digitalWrite(LED_1, LOW);
}

void loop() {
  if (!STOP) {
    digitalWrite(LED_1, HIGH);
    delay(500);
    digitalWrite(LED_1, LOW);
  }
  delay(500);
}

void updateEx() {
  if (STOP == false) {
    STOP = true;
  } else {
    STOP = false;
  }
}
