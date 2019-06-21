#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

class Motor {
public:
	Motor(uint8_t pinPWM, uint8_t pinA, uint8_t pinB);
	
	void set(float velocity);
	
private:
	uint8_t pinPWM, pinA, pinB;
};

#endif