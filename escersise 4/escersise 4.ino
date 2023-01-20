void setup() {
  //initializes the 7 pins used for the 7 segment device
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  //7 segment for 9
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
digitalWrite(7, LOW);
digitalWrite(6, LOW);
delay(1500);

//7 segment for 8  
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
digitalWrite(7, LOW);
digitalWrite(6, LOW);
delay(1500);

  //7 segment for 7
  digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(7, HIGH);
digitalWrite(6, HIGH);
delay(1500);

  //7 segment for 6
  digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
digitalWrite(7, LOW);
digitalWrite(6, LOW);
delay(1500);

  //7 segment for 5
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
digitalWrite(7, LOW);
digitalWrite(6, LOW);
delay(1500);

  //7 segment for 4
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(7, LOW);
digitalWrite(6, LOW);
delay(1500);

  //7 segment for 3
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
delay(1500);
  
  //7 segment for 2
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
delay(1500);

  //7 segment for 1
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(7, HIGH);
digitalWrite(6, HIGH);
  delay(1500);
  
  //7 segment for 0
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
digitalWrite(7, HIGH);
digitalWrite(6, LOW);
  delay(1500);

}
