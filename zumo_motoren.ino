#include <Wire.h>
#include <Zumo32U4.h>

Zumo32U4Motors motors;
Zumo32U4ButtonA buttonA;
Zumo32U4ButtonB buttonB;
Zumo32U4ButtonC buttonC;

void setup()
{
}

void loop()
{
  if (buttonB.isPressed())
  {
    for (int speed = 0; speed >= -400; speed--)
    {
      motors.setLeftSpeed(speed);
      motors.setRightSpeed(speed);
      delay(2);
    }
    for (int speed = -400; speed <= 0; speed++)
    {
      motors.setLeftSpeed(speed);
      motors.setRightSpeed(speed);
      delay(2);
    }
  }
  else if (buttonA.isPressed())
    for (int speed = 0; speed <= 400; speed++)
    {
      motors.setLeftSpeed(speed);
      motors.setRightSpeed(speed);
      delay(2);
    }
    for (int speed = 400; speed >= 0; speed--)
    {
      motors.setLeftSpeed(speed);
      motors.setRightSpeed(speed);
      delay(2);
    }
  }
  else if (buttonC.isPressed())
  {
  for (int speed = 0; speed >= -400; speed--)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }
  for (int speed = -400; speed <= 0; speed++)
  {
    motors.setLeftSpeed(speed);
    delay(2);
  }
  }
}

