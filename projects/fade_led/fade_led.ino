int led12 = 12;
int brightness = 0; // default how bright led is
int fadeAmount = 5; // how bright change

int delayTime = 30;

void setup() {
  pinMode(led12, OUTPUT);
}

void loop() {
  // Output led brightness
  analogWrite(led12, brightness);

  // Change brightness for next time through the loop
  brightness = brightness + fadeAmount;

  // Reverse the direction of the fading at the ends of the fade.
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }

  delay(delayTime);
}
