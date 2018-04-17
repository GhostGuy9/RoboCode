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

void moveForward(double fdis)
{
  for(int go=0; go<=fdis; go++)
  {
    Serial.println("Move Forward Step: "+ go);
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
    Serial.println("Turn Right Step: "+ go);
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
    Serial.println("Turn Left Step: "+ go);
    delay(1000);
    motors.leftMotor(0-motorL);
    motors.rightMotor(0-motorR);
    delay(turn);
    motors.brake();
  }
}

void moveBack(double bdis)
{
  for(int go=0; go<=bdis; go++)
  {
    Serial.println("Move Back Step: "+ go);
    delay(1000);
    motors.leftMotor(0-motorL);
    motors.rightMotor(motorR);
    delay(forward);
    motors.brake();
  }
}
