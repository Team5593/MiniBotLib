#include "TankDrive.h"

TankDrive::TankDrive(Motor motorLeft, Motor motorRight): motorLeft(motorLeft), motorRight(motorRight) {
	// Nothing to do here.
}

void TankDrive::set(float velocityLeft, float velocityRight) {
	// Set motors
	motorLeft.set(velocityLeft);
	motorRight.set(velocityRight);
}