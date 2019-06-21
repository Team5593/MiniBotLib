// Include required classes
#include <SteerDrive.h>
#include <Motor.h>

// Initialize motors
Motor motorLeft(3, 4, 5);
Motor motorRight(6, 7, 8);
// Initialize SteerDrive functionality
SteerDrive drive(motorLeft, motorRight);

void setup() {

}

void loop() {
	drive.set(0.5, 0.5); // Turn right, pivoting on one wheel

	delay(500);

	drive.set(0.5, -0.5); // Turn left, pivoting on one wheel (again)

	delay(500);

	drive.set(0.5, 0.0); // Go straight forward

	delay(250);

	drive.set(-0.5, 0.0); // Go straight backwards

	delay(750);
}