#include <RedBot.h>
#include "bot_move.h"
#include "notes.h"

RedBotBumper Bumper = RedBotBumper(11);  // initialzes bumper object on pin 3


int buttonPin = 12; // variable to store the button Pin 

int BumperState = Bumper.read();  // state variable to store the bumper value


void setup()
{
  Serial.begin(9600);
  Serial.println("Testing Bumper");
  Serial.println("==============");
}

void loop()
{
  Serial.println(BumperState);
  if(BumperState == HIGH)
  {
   moveForward(1);
  }
  
  if(BumperState == LOW)
   {
    playNote(noteA5, HN);
    motors.brake(); //stop
    delay(1000);
    moveBack(1); // backs up
    delay(1000);
    turnRight(1);  // turns Right
    delay(1000);  
  }
}

