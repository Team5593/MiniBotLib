#ifndef TANKDRIVE_H
#define TANKDRIVE_H

#include <Arduino.h>
#include "Motor.h"

class TankDrive {
public:
	TankDrive(Motor motorLeft, Motor motorRight);
	
	void set(float velocityLeft, float velocityRight);

private:
	Motor motorLeft;
	Motor motorRight;
};

#endif