#include "ZumoRobot.h"

class rijden {
void ZumoRobot::driveBackward() {
    for (int speed = 0; speed >= -400; speed--) {
        motors.setLeftSpeed(speed);
        motors.setRightSpeed(speed);
        delay(2);
    }
    for (int speed = -400; speed <= 0; speed++) {
        motors.setLeftSpeed(speed);
        motors.setRightSpeed(speed);
        delay(2);
    }
}

void ZumoRobot::driveForward() {
    for (int speed = 0; speed <= 400; speed++) {
        motors.setLeftSpeed(speed);
        motors.setRightSpeed(speed);
        delay(2);
    }
    for (int speed = 400; speed >= 0; speed--) {
        motors.setLeftSpeed(speed);
        motors.setRightSpeed(speed);
        delay(2);
    }
}

void ZumoRobot::turnRight() {
    for (int speed = 0; speed >= -400; speed--) {
        motors.setLeftSpeed(speed);
        delay(2);
    }
    for (int speed = -400; speed <= 0; speed++) {
        motors.setLeftSpeed(speed);
        delay(2);
    }
}
}
