void setup() {
  // activates pin 8 and 10
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // alterantes which led is active
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  delay(1500);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(1500);
}
