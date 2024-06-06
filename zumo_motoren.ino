#include "ZumoRobot.h"

ZumoRobot zumo;

void setup() {
}

void loop() {
    if (zumo.buttonB.isPressed()) {
        zumo.driveBackward();
    } else if (zumo.buttonA.isPressed()) {
        zumo.driveForward();
    } else if (zumo.buttonC.isPressed()) {
        zumo.turnRight();
    }
}
