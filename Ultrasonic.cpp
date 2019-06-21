#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(uint8_t trigPin, uint8_t echoPin): trigPin(trigPin), echoPin(echoPin) {
	pinMode(this->trigPin, OUTPUT);
	pinMode(this->echoPin, INPUT);
}

float Ultrasonic::get() {
	// Pulse Trigger Pin
	digitalWrite(this->trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(this->trigPin, LOW);
	// Read and return pulse length
	return pulseIn(this->echoPin, HIGH, 23200) / 58; // 23200 = 4 meter max distance, 58 = convesion to centermeters
}