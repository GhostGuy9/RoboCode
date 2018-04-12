#include "bot_move.h"

//Board Button
const int buttonPin = 12;

void setup() 
{
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() 
{
  if(digitalRead(buttonPin) == LOW)
  {
    moveForward(3);
    turnLeft(1);
    moveForward(1);
    turnRight(1);
    moveForward(3);
    turnRight(1);
    moveForward(1);
    turnRight(2);
    moveForward(6);
    turnLeft(2);
  }
}

/*
void runDrive()
{
  //forward 3
  delay(1000);
  motors.leftMotor(200);
  motors.rightMotor(-190);
  delay(forward*3);
  motors.brake();

  //turn 90 left
  delay(1000);
  motors.leftMotor(-200);
  motors.rightMotor(-190);
  delay(turn);
  motors.brake();

  //forward 1
  delay(1000);
  motors.leftMotor(200);
  motors.rightMotor(-190);
  delay(forward);
  motors.brake();
    
  //turn 90 right
  delay(1000);
  motors.leftMotor(200);
  motors.rightMotor(190);
  delay(turn);
  motors.brake();
  
  //forward 3
  delay(1000);
  motors.leftMotor(200);
  motors.rightMotor(-190);
  delay(forward*3);
  motors.brake();
  
  //turn 90 right
  delay(1000);
  motors.leftMotor(200);
  motors.rightMotor(190);
  delay(turn);
  motors.brake();
  
  //forward 6
  delay(1000);
  motors.leftMotor(200);
  motors.rightMotor(-190);
  delay(forward*6);
  motors.brake();

  //turn 90 left
  delay(1000);
  motors.leftMotor(200);
  motors.rightMotor(-190);
  delay(turn*2);
  motors.brake();    
}
*/
