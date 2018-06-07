#include <RedBot.h>
#include "Drive.h"

int buttonPin = 12;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}
void loop(){
  
  if(digitalRead(buttonPin) == LOW){
  motors.brake();
  delay(500);
  driveDistance(25, -150, 150); //three squares
  backward(10,-150, 150); //backward 1 square
  motors.brake();
  delay(700);
  turnRDist(5,100,-100);
  motors.brake();
  delay(700);
  driveDistance(50, -150, 150); //long part of the I 5 quares
  motors.brake();
  delay(700);
  turnRDist(5,-100,100);
  motors.brake();
  delay(700);
  backward(10,-150, 150); //backward 1 square
  driveDistance(35, -150, 150); //three squares



  

  
  
  
  
  
  
  }
}
  
