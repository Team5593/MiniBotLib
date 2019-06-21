#ifndef STEERDRIVE_H
#define STEERDRIVE_H

#include <Arduino.h>
#include "Motor.h"

class SteerDrive {
public:
	SteerDrive(Motor motorLeft, Motor motorRight);
	
	void set(float velocity, float turning);
	
private:
	Motor motorLeft;
	Motor motorRight;
};

#endif