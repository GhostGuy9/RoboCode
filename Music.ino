#include "notes.h"
#include <RedBot.h> 
RedBotMotors motors;

// Create a couple of constants for our pins.
const int buzzerPin = 9;
const int buttonPin = 12;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP); // configures the button as an INPUT
  // INPUT_PULLUP defaults it to HIGH.
  pinMode(buzzerPin, OUTPUT);  // configures the buzzerPin as an OUTPUT
}

void loop()
{
  if(digitalRead(buttonPin) == LOW)
  {
    playSmallWorld();
  }
}

void playSmallWorld()
{ 
  playNote(noteG5, HN+QN);
  playNote(noteG5, QN);
  playNote(noteB5, HN);
  playNote(noteG5, HN);
  playNote(noteA5, HN+QN);
  playNote(noteA5, QN);
  playNote(noteA5, HN+QN);
  playNote(Rest, QN);
  playNote(noteA5, HN+QN);
  playNote(noteA5, QN);
  playNote(noteC6, HN);
  playNote(noteA5, HN);
  playNote(noteB5, HN+QN);
  playNote(noteB5, QN);
  playNote(noteB5, HN+QN);
  playNote(Rest, QN);
  playNote(noteB5, HN+QN);
  playNote(noteB5, QN);
  playNote(noteD6, HN);
  playNote(noteB5, HN);
  playNote(noteC6, HN+QN);
  playNote(noteC6, QN);
  playNote(noteC6, HN);
  playNote(noteB5, QN);
  playNote(noteA5, QN);
  playNote(noteD5, WN);
  playNote(noteFs5, WN);
  playNote(noteG5, WN);
}

void playNote(int note, int duration)
{
  tone(buzzerPin, note, duration);
  delay(duration);
}
