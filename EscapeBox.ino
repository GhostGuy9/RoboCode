#include "bot_move.h"
#include "notes.h"

RedBotBumper leftBumper = RedBotBumper(A3); // initialzes bumper object on pin 3
RedBotBumper rightBumper = RedBotBumper(11); //initialzes bumper object on pin 11


int buttonPin = 12; // variable to store the button Pin 

int lBumperState = leftBumper.read();  // state variable to store the bumper value
int rBumperState = rightBumper.read();


void setup()
{
  Serial.begin(9600);
  Serial.println("Testing Bumper");
  Serial.println("==============");
}

void loop()
{
  Serial.println(lBumperState);
  if(lBumperState && rBumperState == LOW)
  {
   //moveForward(1);
   delay(500);
   Serial.println("Low");
  }
  
  if(lBumperState&& rBumperState == HIGH)
   {
    //motors.brake(); //stop
    Serial.println("High");
    delay(1000);
   // moveBack(1); // backs up
    delay(1000);
    //turnRight(1);  // turns Right
    delay(1000);
    }

    
  }

