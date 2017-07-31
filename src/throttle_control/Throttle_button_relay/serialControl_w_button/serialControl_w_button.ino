#include <SPI.h>
#include <stdio.h>

//http://forum.arduino.cc/index.php?topic=38420.0
byte address = 0x00;
int CS= 10;
const byte numChars = 32;
const int buttonPin = 2; 
char receivedChars[numChars]; // an array to store the received data
double velocity; //Store the converted velocity
int buttonState = 0; 
boolean newData = false;
int vFlag = 0;

#define CH1 8   // Connect Digital Pin 8 on Arduino to CH1 on Relay Module
#define CH3 4   // Connect Digital Pin 4 on Arduino to CH3 on Relay Module

void setup() {
 pinMode (CS, OUTPUT);
 pinMode(buttonPin, INPUT);
 SPI.begin();
 Serial.begin(9600);
 //Serial.println("<Arduino is ready>");
  pinMode(CH1, OUTPUT);
  pinMode(CH3, OUTPUT);

  digitalWrite(CH1,LOW);
  digitalWrite(CH3,LOW);
}

void loop() {
 buttonState = digitalRead(buttonPin);
 if (buttonState == HIGH && vFlag != 0) {
    //close relay switch:
    
    digitalWrite(CH1, LOW);
    digitalWrite(CH3, HIGH);
    //vFlag = 1;
 
  } else if (buttonState == LOW || vFlag == 0){
    // open relay switch
   
    digitalWrite(CH3, LOW);
    digitalWrite(CH1, HIGH);
    //vFlag = 0;
    
  }
 recvWithEndMarker();
 showNewData();
}

void recvWithEndMarker() {
 static byte ndx = 0;
 char endMarker = '\n';
 char rc;
 
 // if (Serial.available() > 0) {
 while (Serial.available() > 0 && newData == false) {
  rc = Serial.read();

  if (rc != endMarker) {
    receivedChars[ndx] = rc;
    ndx++;
    if (ndx >= numChars) {
      ndx = numChars - 1;
    }
  }
  else {
   receivedChars[ndx] = '\0'; // terminate the string
   ndx = 0;
   newData = true;
  }
 }
}

void showNewData() {
 if (newData == true) {
 //velocity = strtod(receivedChars);  
 velocity = atof(receivedChars); //convert string to double
 int test = convertSpeedToR(velocity);
 //double outputR = 5000 - test*(5000/256);
 Serial.println(test);
 //210 == 4 kOhm
 if (test <=255){
  digitalPotWrite(test);
  if (test == 0){
    vFlag = 0;
  }
  else {
    vFlag = 1;
  }
  
 }
 newData = false;
 }
}

int digitalPotWrite(int value)
{
  digitalWrite(CS, LOW);
  SPI.transfer(address);
  SPI.transfer(value);
  digitalWrite(CS, HIGH);
}

int convertSpeedToR(double vel){
  //Serial.println(vel);
  int res = floor(vel*35.06483);
  
  //Serial.println(res);
  if (res >= 255){
    res = 255;
  }
  else if (res <= 0){
    res = 0;
  }
  //Serial.println(res);
  return res;
}
/* velocity (m/s) = 0.028519 * resolution (0-255)
 *  resolution = velocity (m/s) * 35.06483
 */

// Some button control

