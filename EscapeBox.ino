#include "bot_move.h"

//Escape

int leftBumperState = 0;
int rightBumperState = 0;

void loop() {

  leftBumperState = leftBumper.read();
  rightBumperState = rightBumper.read();

  motors.leftMotor(-150);
  motors.rightMotor(150);
  
  if (leftBumperState == LOW)
  {
    delay(500);
    motors.leftMotor(0);
    motors.rightMotor(0);
    delay(500);
    motors.leftMotor(150);
    motors.rightMotor(-150);
    delay(1000);
    motors.leftMotor(150);
    motors.rightMotor(150);
    delay(500);
    motors.leftMotor(0);
    motors.rightMotor(0);
    delay(500);
    int rightBumperState = 0;
    int leftBumperState = 0;
  }
  
  if (rightBumperState == LOW)
  {
    delay(500);
    motors.leftMotor(0);
    motors.rightMotor(0);
    delay(500);
    motors.leftMotor(150);
    motors.rightMotor(-150);
    delay(1000);
    motors.leftMotor(-150);
    motors.rightMotor(-150);
    delay(500);
    motors.leftMotor(0);
    motors.rightMotor(0);
    delay(500);
    int rightBumperState = 0;
    int leftBumperState = 0;
  }

}
