#include "bot_move.h"

//Board Button
const int buttonPin = 12;

void setup() 
{
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() 
{
  if(digitalRead(buttonPin) == LOW)
  {
    for(int lop=0; lop<=4; lop++)
    {
        moveForward(4);
        turnLeft(2);
        moveForward(4);
        turnRight(2);
    }
  }
}
