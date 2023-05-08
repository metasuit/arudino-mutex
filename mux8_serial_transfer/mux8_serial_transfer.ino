const int s0Pin = 2; // select signal 0
const int s1Pin = 3; // select signal 1
const int s2Pin = 4; // select signal 2
int inputValue = 0;
int outputValue;
const int BUFFER_SIZE = 1;
char buffer[BUFFER_SIZE];
bool switch_ = 1;

void setup() {
  pinMode(s0Pin, OUTPUT);
  pinMode(s1Pin, OUTPUT);
  pinMode(s2Pin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  /*
  if (Serial.available() >= BUFFER_SIZE) {
    // Read the data from the serial buffer
    Serial.readBytes(buffer, BUFFER_SIZE);
    // Convert the received data from char array to int
    inputValue = atoi(buffer);

    if(inputValue == 1){
      for (int outputValue = 0; outputValue < 8; outputValue++) {    
        digitalWrite(s0Pin, outputValue & 0x1); // set select signal 0  
        digitalWrite(s1Pin, outputValue & 0x2); // set select signal 1
        digitalWrite(s2Pin, outputValue & 0x4); // set select signal 2
        delay(4);
      }
      
    }
  }
  
  else if (Serial.available() > BUFFER_SIZE){
    char buffer2[Serial.available()-1];
    Serial.readBytes(buffer2, BUFFER_SIZE);
  }
 */
  /*
  if (Serial.available()) { // Check if there is incoming serial data
    inputValue = Serial.read() - "0"; // Read the incoming value and convert from ASCII to integer
    if (inputValue >= 1 && inputValue <= 8) { // Check if the value is within the range 1-8
      int outputValue = inputValue - 1; // Calculate the corresponding output value
      digitalWrite(s0Pin, outputValue & 0x1); // set select signal 0
      digitalWrite(s1Pin, outputValue & 0x2); // set select signal 1
      digitalWrite(s2Pin, outputValue & 0x4); // set select signal 2
      //Serial.println(outputValue);
    }
  }  
  */
  
  for (int outputValue = 0; outputValue < 7; outputValue++) {    
    digitalWrite(s0Pin, outputValue & 0x1); // set select signal 0  
    digitalWrite(s1Pin, outputValue & 0x2); // set select signal 1
    digitalWrite(s2Pin, outputValue & 0x4); // set select signal 2
    delay(4);
  // Other code to execute with each iteration of the loop
  // ...
  } 
  digitalWrite(s0Pin, HIGH);
  delay(2);
  


}