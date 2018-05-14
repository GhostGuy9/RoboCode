#include <RedBotSoftwareSerial.h>
#include <RedBot.h>

RedBotMotors motors;

//Turn Delay
int turn = 430;

//Motor Power - May be need to change the varibles and offsets
int motorL = 200;
int motorR = motorL*0.95;

//Motor Power for Turn
int motorTL = 175;
int motorTR = motorTL*0.90;

//Forward Delay
int forward = 755;


void moveForward(double fdis) //moves forward by # of tile - moveForward(#);
{
  for(int go=0; go<fdis; go++)
  {
    Serial.println("Move Forward Step: "+ go);
    delay(1000);
    motors.leftMotor(motorL);
    motors.rightMotor(0-motorR);
    delay(forward);
    motors.brake();
  }
}

void turnRight(double turnR) //turns by # - turnRight(#);
{
  for(int go=0; go<turnR; go++)
  {
    Serial.println("Turn Right Step: "+ go);
    delay(1000);
    motors.leftMotor(motorTL);
    motors.rightMotor(motorTR);
    delay(turn);
    motors.brake();
  }
}

void turnLeft(double turnL) //turns by # - turnLeft(#);
{
  for(int go=0; go<turnL; go++)
  {
    Serial.println("Turn Left Step: "+ go);
    delay(1000);
    motors.leftMotor(0-motorTL);
    motors.rightMotor(0-motorTR);
    delay(turn);
    motors.brake();
  }
}

void moveBack(double bdis) //moves backwards by # of tile - moveBack(#);
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
