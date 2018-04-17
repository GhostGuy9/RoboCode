#include <RedBotSoftwareSerial.h>
#include <RedBot.h>

RedBotMotors motors;

//Turn Delay
int turn = 342;

//Motor Power - May be need to change the varibles and offsets
int motorL = 200;
int motorR = motorL*0.945;

//Forward Delay
int forward = 750;

void moveForward(double dis)
{
  for(int go=0; go<=dis; go++)
  {
    delay(1000);
    motors.leftMotor(motorL);
    motors.rightMotor(0-motorR);
    delay(forward);
    motors.brake();
  }
}

void turnRight(double turnR)
{
  for(int go=0; go<=turnR; go++)
  {
    delay(1000);
    motors.leftMotor(motorL);
    motors.rightMotor(motorR);
    delay(turn);
    motors.brake();
  }
}

void turnLeft(double turnL)
{
  for(int go=0; go<=turnL; go++)
  {
    delay(1000);
    motors.leftMotor(0-motorL);
    motors.rightMotor(0-motorR);
    delay(turn);
    motors.brake();
  }
}
