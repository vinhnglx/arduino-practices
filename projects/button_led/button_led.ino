// Normally, we use button and led - means we need 2 resistors ...1 for led, 1 for button
// But the first approach, by using a resistor built-in inside Arduino. So we only need 1 resistor for led.

// First approach
// Use INPUT_PULLUP to call the resitor inside Arduino

int button8 = 8;
int led3 = 3;

// Approach #1
void setup() {
//  pinMode(button8, INPUT);
  pinMode(button8, INPUT_PULLUP); // trigger the resitor inside Arduino - The default value is 1 (HIGH)
  pinMode(led3, OUTPUT);
}

void loop() {
  int buttonStatus = digitalRead(button8);
  Serial.println(buttonStatus);
  //delay(300);

  if (buttonStatus == HIGH) {
    digitalWrite(led3, LOW);
  } else {
    digitalWrite(led3, HIGH);
  }

}

// Second approach

// Approach #2
//void setup() {
//  Serial.begin(9600);
//  pinMode(button8, INPUT);
//  pinMode(led3, OUTPUT);
//}
//
//void loop() {
//  int buttonStatus = digitalRead(button8);
//  Serial.println(buttonStatus);
////  delay(200);
//
//  if (buttonStatus == HIGH) {
//    digitalWrite(led3, HIGH);
//  } else {
//    digitalWrite(led3, LOW);
//  }
//
//}
