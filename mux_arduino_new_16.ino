const int s0Pin = 2; // select signal 0
const int s1Pin = 3; // select signal 1
const int s2Pin = 4; // select signal 2
const int s3Pin = 5; // select signal 3

void setup() {
  pinMode(s0Pin, OUTPUT);
  pinMode(s1Pin, OUTPUT);
  pinMode(s2Pin, OUTPUT);
  pinMode(s3Pin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 16; i++) {
    digitalWrite(s0Pin, i & 0x1); // set select signal 0
    digitalWrite(s1Pin, i & 0x2); // set select signal 1
    digitalWrite(s2Pin, i & 0x4); // set select signal 2
    digitalWrite(s3Pin, i & 0x8); // set select signal 3
    delayMicroseconds(1); // wait for the multiplexer to settle
  }
}