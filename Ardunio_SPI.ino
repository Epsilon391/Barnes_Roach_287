#include <Servo.h>

Servo myservo; 

const int inputPin = 12;
const int clkPin = 7;    
int pos = 0;    
int inputState = 0; 
int stor_in[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int start = 0;   
int del = 97.9; //979
int tens = 0;
int ones = 0;
bool num_stored = false;

void setup() {

  Serial.begin (9600);
  myservo.attach(9);  
  pinMode(inputPin, INPUT);
  delay(5000);
}

void loop() {
  
  //delay(del);
  while(digitalRead(clkPin) == 0) {
    Serial.println("1");
    }
  inputState = digitalRead(inputPin);
  //Serial.println(inputState);
  if (inputState == 1){
    //delay(del);
    while(digitalRead(clkPin) == 1) {
      Serial.println("2");
      }
    inputState = digitalRead(inputPin);
    if (inputState == 1){
      //delay(del);
      while(digitalRead(clkPin) == 0) {
        Serial.println("3");
        }
      inputState = digitalRead(inputPin);
      if (inputState == 1){
        //delay(del);
        while(digitalRead(clkPin) == 1) {
          Serial.println("4");
          }
        inputState = digitalRead(inputPin);
        if (inputState == 1){

          //Serial.println("Start");
          for (int i = 0; i <= 9; i++){
            //delay(del);
            while(digitalRead(clkPin) == (i%2)) {
              Serial.println(i);
              }
            inputState = digitalRead(inputPin);
            stor_in[i] = inputState;
            //Serial.println(inputState);
          }
          num_stored = true;
        }
      } 
    }
  }

  if(num_stored){
  
  pos = stor_in[1] * 100;

  tens = ((stor_in[2]) + (stor_in[3] * 2) + (stor_in[4] * 4) +(stor_in[5] * 8)) * 10;

  ones = ((stor_in[6]) + (stor_in[7] * 2) + (stor_in[8] * 4) +(stor_in[9] * 8));

  pos = pos + tens + ones;
  
  myservo.write(pos);

  Serial.println(pos);

  num_stored = false;
  
  }
}
