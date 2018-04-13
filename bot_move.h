#include <RedBotSoftwareSerial.h>
#include <RedBot.h>

RedBotMotors motors;

//Turn Delay
int turn = 288;

//Motor Power - May be need to change the varibles and offsets
int motorL = 200;
int motorR = motorL*0.95;

//Forward Delay
int forward = 600;

void moveForward(double dis)
{
  delay(1000);
  motors.leftMotor(motorL);
  motors.rightMotor(0-motorR);
  delay(forward*dis);
  motors.brake();
}

void turnRight(double turnR)
{
  delay(1000);
  motors.leftMotor(motorL);
  motors.rightMotor(motorR);
  delay(turn*turnR);
  motors.brake();
}

void turnLeft(double turnL)
{
  delay(1000);
  motors.leftMotor(0-motorL);
  motors.rightMotor(0-motorR);
  delay(turn*turnL);
  motors.brake();
}
