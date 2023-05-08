const uint8_t pin0 = 2;
const uint8_t pin1 = 3;
const uint8_t pin2 = 4;
const uint16_t delayTime2 = 5000; // Delay time in microseconds

void setup() {
  pinMode(pin0, OUTPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
}

void loop() {

  digitalWrite(pin0, LOW);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  for(int i = 0; i < 50; i++) {
    delay(delayTime2);
  }
/*
  
  digitalWrite(pin0, LOW);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  //delayMicroseconds(delayTime);
  delay(delayTime2);


  
  digitalWrite(pin0, HIGH);
  //delayMicroseconds(delayTime);
  delay(delayTime2);
 

  digitalWrite(pin0, LOW);
  digitalWrite(pin1, HIGH);
  delay(delayTime2);

  digitalWrite(pin0, HIGH);
  delay(delayTime2);
  
  digitalWrite(pin0, LOW);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  delay(delayTime2);
  
  digitalWrite(pin0, HIGH);
  delay(delayTime2);
  
  digitalWrite(pin0, LOW);
  digitalWrite(pin1, HIGH);
  delay(delayTime2);

  digitalWrite(pin0, HIGH);
  delay(delayTime2);
*/
  
}