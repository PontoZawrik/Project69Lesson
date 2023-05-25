#pragma once
#include "main.h"

class Car {
private:
	int tank;
	int speed;
	int power;
public:
	Car() : tank(0), speed(0), power(0)  {}
	Car(int tank, int speed, int power) : tank(tank), speed(speed), power(power) {}

	int getSpeed();
	int getPower();
	int getTank();

	int setSpeed(int speed);
	int setPower(int power);
	int setTank(int tank);
};