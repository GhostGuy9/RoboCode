#include <RedBot.h>
RedBotMotors motors;

RedBotBumper leftBumper = RedBotBumper(); //need to figure out which pin for object
RedBotBumper rightBumper= RedBotBumper(); // previous comment

int buttonPin = ; //buttonPin variable (whatever it is attached to)

void setup() {}


void loop() {
 motors.drive(); //Need to insert a distance for duration until collision
 leftBumperState = leftBumper.read();
 rightBumperState = rightBumper.read();

 if (leftBumperState && rightBumperState = LOW){
  motors.brake(); //Stops all movement
  motors.reverse(); //Reverses not all the way
  turnLeft();
  motors.drive();
  }

  if(leftButtonState && rightBumperState = HIGH){
    motors.drive() //Need to insert a distance for duration
  }

 
}


