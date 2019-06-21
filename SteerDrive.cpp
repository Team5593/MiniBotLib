#include "SteerDrive.h"

SteerDrive::SteerDrive(Motor motorLeft, Motor motorRight): motorLeft(motorLeft), motorRight(motorRight) {
	// Nothing to do here.
}

void SteerDrive::set(float velocity, float turning) {
	turning /= velocity; // Scale for varying velocities
	// Set motors
	motorLeft.set(velocity - turning);
	motorRight.set(velocity + turning);
}