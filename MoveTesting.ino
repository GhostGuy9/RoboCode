#include <RedBotSoftwareSerial.h>
#include <RedBot.h>

RedBotMotors motors;

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
  motors.drive(0);

  //turn 90 left
  delay(1000);
  motors.drive(-200);
  delay(345);
  motors.drive(0);

  //forward 1
  delay(1000);
  motors.drive(-200);
  delay(700);
  motors.drive(0);
    
  //turn 90 right
  delay(1000);
  motors.drive(-200);
  delay(345);
  motors.drive(0);

  //forward 3
  delay(1000);
  motors.drive(-200);
  delay(700*3);
  motors.drive(0);
  
  //turn 90 right
  delay(1000);
  motors.drive(-200);
  delay(345*2);
  motors.drive(0);

  //forward 6
  delay(1000);
  motors.drive(-200);
  delay(700*6);
  motors.drive(0);

  //turn 90 left
  delay(1000);
  motors.drive(-200);
  delay(345*2);
  motors.drive(0);    
}
