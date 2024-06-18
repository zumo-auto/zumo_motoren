#include "ZumoRobot.h"

// Klasse definitie voor 'rijden' die verschillende bewegingsfuncties voor de ZumoRobot bevat
class rijden {

    // Functie om de robot achteruit te laten rijden met een geleidelijke snelheidsverandering
    void ZumoRobot::driveBackward() {
        // Geleidelijk de snelheid verlagen tot -400
        for (int speed = 0; speed >= -400; speed--) {
            motors.setLeftSpeed(speed);
            motors.setRightSpeed(speed);
            delay(2); // Korte vertraging om een soepele snelheidsverandering mogelijk te maken
        }
        // Geleidelijk de snelheid weer verhogen naar 0
        for (int speed = -400; speed <= 0; speed++) {
            motors.setLeftSpeed(speed);
            motors.setRightSpeed(speed);
            delay(2); // Korte vertraging om een soepele snelheidsverandering mogelijk te maken
        }
    }

    // Functie om de robot vooruit te laten rijden met een geleidelijke snelheidsverandering
    void ZumoRobot::driveForward() {
        // Geleidelijk de snelheid verhogen tot 400
        for (int speed = 0; speed <= 400; speed++) {
            motors.setLeftSpeed(speed);
            motors.setRightSpeed(speed);
            delay(2); // Korte vertraging om een soepele snelheidsverandering mogelijk te maken
        }
        // Geleidelijk de snelheid weer verlagen naar 0
        for (int speed = 400; speed >= 0; speed--) {
            motors.setLeftSpeed(speed);
            motors.setRightSpeed(speed);
            delay(2); // Korte vertraging om een soepele snelheidsverandering mogelijk te maken
        }
    }

    // Functie om de robot naar rechts te laten draaien met een geleidelijke snelheidsverandering
    void ZumoRobot::turnRight() {
        // Geleidelijk de snelheid van de linker motor verlagen tot -400
        for (int speed = 0; speed >= -400; speed--) {
            motors.setLeftSpeed(speed);
            delay(2); // Korte vertraging om een soepele snelheidsverandering mogelijk te maken
        }
        // Geleidelijk de snelheid van de linker motor weer verhogen naar 0
        for (int speed = -400; speed <= 0; speed++) {
            motors.setLeftSpeed(speed);
            delay(2); // Korte vertraging om een soepele snelheidsverandering mogelijk te maken
        }
    }
}
