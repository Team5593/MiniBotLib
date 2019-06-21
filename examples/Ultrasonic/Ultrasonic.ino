// Include required class
#include <Ultrasonic.h>

// Define ultrasonic sensor (remember: triger pin, echo pin)
Ultrasonic ultra(2, 3);

void setup() {
	// Initialize serial port
	Serial.begin(9600);

	delay(100); // Wait for computer
}

void loop() {
	// Print a reading to the serial port
	Serial.print("Distance: ");
	Serial.print(ultra.get());
	Serial.println("CM");
}