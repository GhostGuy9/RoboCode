#include <RedBotSoftwareSerial.h>
#include <RedBot.h>

RedBotMotors motors;

const int buttonPin = 12;

void setup() 
{
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() 
{
  if(digitalRead(buttonPin) == LOW)
  {
    runDrive();
  }
}

void runDrive()
{
    //dorward 1
  delay(1000);
  motors.drive(-200);
  delay(700*3);
  motors.brake();

  //turn 90 left
  delay(1000);
  motors.drive(-200);
  delay(345);
  motors.brake();

  //forward 1
  delay(1000);
  motors.drive(-200);
  delay(700);
  motors.brake();
    
  //turn 90 right
  delay(1000);
  motors.drive(-200);
  delay(345);
  motors.brake();

  //forward 3
  delay(1000);
  motors.drive(-200);
  delay(700*3);
  motors.brake();
  
  //turn 90 right
  delay(1000);
  motors.drive(-200);
  delay(345*2);
  motors.brake();

  //forward 6
  delay(1000);
  motors.drive(-200);
  delay(700*6);
  motors.brake();

  //turn 90 left
  delay(1000);
  motors.drive(-200);
  delay(345*2);
  motors.brake();    
}
