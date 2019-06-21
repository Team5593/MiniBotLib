#include "Motor.h"

Motor::Motor(uint8_t pinPWM, uint8_t pinA, uint8_t pinB): pinPWM(pinPWM), pinA(pinA), pinB(pinB) {
	pinMode(pinPWM, OUTPUT);
	pinMode(pinA, OUTPUT);
	pinMode(pinB, OUTPUT);
}

void Motor::set(float velocity) {
	analogWrite(pinPWM, fabs(velocity) * 255);
	digitalWrite(pinA, velocity >= 0);
	digitalWrite(pinB, velocity <= 0);
}