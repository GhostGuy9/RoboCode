#include <RedBotSoftwareSerial.h>
#include <RedBot.h>

RedBotMotors motors;

//Turn Delay
int turn = 350;

//Motor Power - May be need to change the varibles and offsets
int motorL = 150-0;
int motorR = motorL*0.95;

//Forward Delay
int forward = 650;

void moveForward(int dis)
{
  delay(1000);
  motors.leftMotor(motorL);
  motors.rightMotor(0-motorR);
  delay(forward*dis);
  motors.brake();
}

void turnRight(int turnR)
{
  delay(1000);
  motors.leftMotor(motorL);
  motors.rightMotor(motorR);
  delay(turn*turnR);
  motors.brake();
}

void turnLeft(int turnL)
{
  delay(1000);
  motors.leftMotor(0-motorL);
  motors.rightMotor(0-motorR);
  delay(turn*turnL);
  motors.brake();
}
