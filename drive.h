#include <RedBot.h>
RedBotMotors motors;

RedBotEncoder encoder = RedBotEncoder(A2, 10);
int countsPerRev = 192;   // 4 pairs of N-S x 48:1 gearbox = 192 ticks per wheel rev

float wheelDiam = 2.75;  // diam = 65mm / 25.4 mm/in
float wheelCirc = PI * wheelDiam; // Redbot wheel circumference = pi*D

void driveDistance(float distance, int leftMotorPower, int rightMotorPower)
{    
  long lCount = 0;
  long rCount = 0;
  float numRev;

  numRev = (float) distance / wheelCirc;
  encoder.clearEnc(BOTH);  // clear the encoder count
  delay(250);
  motors.leftMotor(leftMotorPower);
  motors.rightMotor(rightMotorPower-1);

  while (lCount < numRev * countsPerRev)
  {
    // while the left encoder is less than the target count -- debug print
    // the encoder values and wait -- this is a holding loop.
    Serial.print(lCount);
    Serial.print("\t");
    Serial.println(rCount);
    lCount = encoder.getTicks(LEFT);
    rCount = encoder.getTicks(RIGHT);
  }
    // now apply "brakes" to stop the motors.
    motors.brake();

}

void backward(float distance, int leftMotorPower, int rightMotorPower)
{    
  long lCount = 0;
  long rCount = 0;
  float numRev;

  numRev = (float) distance / wheelCirc;
  encoder.clearEnc(BOTH);  // clear the encoder count
  delay(250);
  motors.leftMotor(-1*leftMotorPower);
  motors.rightMotor(-1*rightMotorPower);

  while (abs(lCount) < numRev * countsPerRev)
  {
    // while the left encoder is less than the target count -- debug print
    // the encoder values and wait -- this is a holding loop.
    Serial.println(lCount);
    Serial.print("\t");
    Serial.println(rCount);
    lCount = encoder.getTicks(LEFT);
    rCount = encoder.getTicks(RIGHT);
  }
    // now apply "brakes" to stop the motors.
    motors.brake();

}

void turnRDist(float distance, int leftMotorPower, int rightMotorPower)
{    
  long lCount = 0;
  long rCount = 0;
  float numRev;

  numRev = (float) distance / wheelCirc;
  encoder.clearEnc(BOTH);  // clear the encoder count
  delay(250);
  motors.leftMotor(1*leftMotorPower);
  motors.rightMotor(-1*rightMotorPower);

  while (abs(lCount) < numRev * countsPerRev)
  {
    // while the left encoder is less than the target count -- debug print
    // the encoder values and wait -- this is a holding loop.
    Serial.println(lCount);
    Serial.print("\t");
    Serial.println(rCount);
    lCount = encoder.getTicks(LEFT);
    rCount = encoder.getTicks(RIGHT);
  }
    // now apply "brakes" to stop the motors.
    motors.brake();

}

void turnLDist(float distance, int leftMotorPower, int rightMotorPower)
{    
  long lCount = 0;
  long rCount = 0;
  float numRev;

  numRev = (float) distance / wheelCirc;
  encoder.clearEnc(BOTH);  // clear the encoder count
  delay(250);
  motors.leftMotor(1*leftMotorPower);
  motors.rightMotor(- 1*rightMotorPower);

  while (abs(lCount) < numRev * countsPerRev)
  {
    // while the left encoder is less than the target count -- debug print
    // the encoder values and wait -- this is a holding loop.
    Serial.println(lCount);
    Serial.print("\t");
    Serial.println(rCount);
    lCount = encoder.getTicks(LEFT);
    rCount = encoder.getTicks(RIGHT);
  }
    // now apply "brakes" to stop the motors.
    motors.brake();

}
