#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#include <Arduino.h>

class Ultrasonic {
public:
	Ultrasonic(uint8_t trigPin, uint8_t echoPin);

	float get();
private:
	uint8_t trigPin;
	uint8_t echoPin;
};

#endif /* ULTRASONIC_H */