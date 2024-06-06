#ifndef ZUMOROBOT_H
#define ZUMOROBOT_H

#include <Wire.h>
#include <Zumo32U4.h>

class Motoren {
public:
    void driveBackward();
    void driveForward();
    void turnRight();
    Zumo32U4Motors motors;
    Zumo32U4ButtonA buttonA;
    Zumo32U4ButtonB buttonB;
    Zumo32U4ButtonC buttonC;
 private:

};

#endif // ZUMOROBOT_H
