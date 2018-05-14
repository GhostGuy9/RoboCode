#include <RedBotSoftwareSerial.h>
#include <RedBot.h>

RedBotMotors motors;
RedBotEncoder encoder = RedBotEncoder(A2, 10);

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
int back = 745;

//Rotary
int countsPerRev = 192;   // 4 pairs of N-S x 48:1 gearbox = 192 ticks per wheel rev
float wheelDiam = 2.56;  // diam = 65mm / 25.4 mm/in
float wheelCirc = PI*wheelDiam;  // Redbot wheel circumference = pi*D

void setup()
{
  Serial.begin(9600);//begins serial monitor
  pinMode(12, INPUT_PULLUP);
}

void moveForward(int forward)
    {
      float distance = 9;
      int motorPower = 170;
      
      for(int go=0; go<forward; go++)
      {
       delay(1000);
      long lCount = 0;
      long rCount = 0;
      long targetCount;
      float numRev;
    
      // variables for tracking the left and right encoder counts
      long prevlCount, prevrCount;
    
      long lDiff, rDiff;  // diff between current encoder count and previous count
    
      // variables for setting left and right motor power
      int leftPower = motorPower;
      int rightPower = motorPower;
    
      // variable used to offset motor power on right vs left to keep straight.
      int offset = 5;  // offset amount to compensate Right vs. Left drive
    
      numRev = distance / wheelCirc;  // calculate the target # of rotations
      targetCount = numRev * countsPerRev;    // calculate the target count
    
      // debug
      Serial.print("driveStraight() ");
      Serial.print(distance);
      Serial.print(" inches at ");
      Serial.print(motorPower);
      Serial.println(" power.");
    
      Serial.print("Target: ");
      Serial.print(numRev, 3);
      Serial.println(" revolutions.");
      Serial.println();
      
      // print out header
      Serial.print("Left\t");   // "Left" and tab
      Serial.print("Right\t");  // "Right" and tab
      Serial.println("Target count");
      Serial.println("============================");
    
      encoder.clearEnc(BOTH);    // clear the encoder count
      delay(100);  // short delay before starting the motors.
      
      motors.drive(motorPower);  // start motors 
    
      while (rCount < targetCount)
      {
        // while the right encoder is less than the target count -- debug print 
        // the encoder values and wait -- this is a holding loop.
        lCount = encoder.getTicks(LEFT);
        rCount = encoder.getTicks(RIGHT);
        Serial.print(lCount);
        Serial.print("\t");
        Serial.print(rCount);
        Serial.print("\t");
        Serial.println(targetCount);
    
        motors.leftDrive(leftPower);
        motors.rightDrive(rightPower);
    
        // calculate the rotation "speed" as a difference in the count from previous cycle.
        lDiff = (lCount - prevlCount);
        rDiff = (rCount - prevrCount);
    
        // store the current count as the "previous" count for the next cycle.
        prevlCount = lCount;
        prevrCount = rCount;
    
        // if left is faster than the right, slow down the left / speed up right
        if (lDiff > rDiff) 
        {
          leftPower = leftPower - offset;
          rightPower = rightPower + offset;
        }
        // if right is faster than the left, speed up the left / slow down right
        else if (lDiff < rDiff) 
        {
          leftPower = leftPower + offset;  
          rightPower = rightPower - offset;
        }
        delay(50);  // short delay to give motors a chance to respond.
      }
      // now apply "brakes" to stop the motors.
      motors.brake();
    }
    }
void turnRight(double turnR) //turns by # - turnRight(#);
{
  for(int go=0; go<turnR; go++)
  {
    delay(1000);
    motors.leftMotor(0-motorTL);
    motors.rightMotor(motorTR);
    delay(turn);
    motors.brake();
  }
}

void turnLeft(double turnL) //turns by # - turnLeft(#);
{
  for(int go=0; go<turnL; go++)
  {
    delay(1000);
    motors.leftMotor(motorTL);
    motors.rightMotor(0-motorTR);
    delay(turn);
    motors.brake();
  }
}

void moveBack(double bdis) //moves backwards by # of tile - moveBack(#);
{
  for(int go=0; go<bdis; go++)
  {
    delay(1000);
    motors.leftMotor(0-motorL);
    motors.rightMotor(0-motorR);
    delay(back);
    motors.brake();
  }
}
