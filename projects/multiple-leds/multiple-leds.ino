int ledPins[] = {2,3,4,5,6,7,8,9,10};

int pinCount;

int delayTime = 1000;

void setup() {
  pinCount = sizeof(ledPins);

  for (int i = 0; i < pinCount; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
}

void loop() {
  for (int i = 0; i< pinCount; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
  }

  for (int i = 0; i< pinCount; i++) {
    digitalWrite(ledPins[i], LOW);
    delay(delayTime);
  }
}
