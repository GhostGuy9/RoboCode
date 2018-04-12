#include <RedBotSoftwareSerial.h>
#include <RedBot.h>

RedBotMotors motors;

//Board Button
const int buttonPin = 12;

//Turn Delay
int turn = 350;

//Forward Delay
int forward = 650;

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

void moveForward(int dis)
{
  delay(1000);
  motors.leftMotor(200);
  motors.rightMotor(-190);
  delay(forward*dis);
  motors.brake();
}

void turnRight(int turnR)
{
  delay(1000);
  motors.leftMotor(200);
  motors.rightMotor(190);
  delay(turn*turnR);
  motors.brake();
}

void turnLeft(int turnL)
{
  delay(1000);
  motors.leftMotor(-200);
  motors.rightMotor(-190);
  delay(turn*turnL);
  motors.brake();
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
