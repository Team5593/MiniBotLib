// Include required classes
#include <TankDrive.h>
#include <Motor.h>

// Initialize motors
Motor motorLeft(3, 4, 5);
Motor motorRight(6, 7, 8);
// Initialize SteerDrive functionality
TankDrive drive(motorLeft, motorRight);

void setup() {

}

void loop() {
	drive.set(0.5, 0.5); // Go straight forward

	delay(500);

	drive.set(-0.5, -0.5); // Go straight backwards

	delay(500);

	drive.set(-0.5, 0.5); // Turn Left

	delay(250);

	drive.set(0.5, -0.5); // Turn Right

	delay(250);
}