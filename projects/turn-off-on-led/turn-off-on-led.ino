int led12 = 12;

int delayTime = 500;

void setup() {
  pinMode(led12, OUTPUT);
}

void loop() {
  digitalWrite(led12, HIGH);
  delay(delayTime);
  digitalWrite(led12, LOW);
  delay(delayTime);
}
