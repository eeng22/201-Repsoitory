void setup() {
  //initializes pin 7 and serial monitor
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {
  // repeats printing a specific line depending on the condition of pin 7
  if(digitalRead(7) == HIGH) {
    Serial.println("Hello World!");
  } else {
  Serial.println("It's 2023");
  }
}
