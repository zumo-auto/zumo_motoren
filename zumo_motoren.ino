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
  //achteruit rijden.
  if (buttonB.isPressed()) //Als button B wordt ingedrukt.
  {
    for (int speed = 0; speed >= -400; speed--) //Door deze loop versnellen de motoren van 0 naar een speed value van -400. Waardoor de robot achteruit rijden
    {
      motors.setLeftSpeed(speed); // Hier krijgt de linker motor zijn speed value.
      motors.setRightSpeed(speed); // Hier krijgt de rechter motor zijn speed value.
      delay(2); //2 miliseconde delay elke keer als hij door de loop gaat, voor langzamer optrekken en remmen.
    }
    for (int speed = -400; speed <= 0; speed++) //Door deze for loop remt hij weer af.
    {
      motors.setLeftSpeed(speed); // Hier krijgt de Linker motor zijn speed value.
      motors.setRightSpeed(speed); // Hier krijgt de rechter motor zijn speed value.
      delay(2); //2 miliseconde delay elke keer als hij door de loop gaat, voor langzamer optrekken en remmen.
    }
  }

  //Vooruit rijden.
  else if (buttonA.isPressed()) // Als button A word ingedrukt
    for (int speed = 0; speed <= 400; speed++) // Door deze loop versnellen de motoren van 0 naar een speed value van 400. Waardoor de robot vooruit rijd
    {
      motors.setLeftSpeed(speed); // Hier krijgt de linker motor zijn speed value.
      motors.setRightSpeed(speed); // Hier krijgt de rechter motor zijn speed value.
      delay(2); //2 miliseconde delay elke keer als hij door de loop gaat, voor langzamer optrekken en remmen.
    }
    for (int speed = 400; speed >= 0; speed--) // Door deze loop remt hij weer af.
    {
      motors.setLeftSpeed(speed); // Hier krijgt de rechter motor zijn speed value.
      motors.setRightSpeed(speed); // Hier krijgt de rechter motor zijn speed value.
      delay(2); //2 miliseconde delay elke keer als hij door de loop gaat, voor langzamer optrekken en remmen.
    }
  }
  //Korte bocht naar rechts
  else if (buttonC.isPressed())// Als button C wordt ingedrukt.
  {
  for (int speed = 0; speed >= -400; speed--) //Door deze loop versnelt de linker motor van 0 naar -400, waardoor deze motor achteruit draait.
  {
    motors.setLeftSpeed(speed); // Hier krijgt de linker motor zijn speed value.
    delay(2); //2 miliseconde delay voor langzamer optrekken en remmen.
  }
  for (int speed = -400; speed <= 0; speed++) //Door deze loop remt hij weer af.
  {
    motors.setLeftSpeed(speed); // Hier krijgt de linker motor zijn speed value.
    delay(2); //2 miliseconde delay elke keer als hij door de loop gaat, voor langzamer optrekken en remmen.
  }
  }
}

