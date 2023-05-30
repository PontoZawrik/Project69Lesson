#pragma once
#include "transport.h"

class Car : public Transport {
private:
	int speed;
	int power;
public:
	Car() : Transport(), speed(0), power(0) {}
	Car(int tank, int speed, int power) : Transport(tank), speed(speed), power(power) {}

	int getSpeed();
	int getPower();

	void setSpeed(int speed);
	void setPower(int power);
};