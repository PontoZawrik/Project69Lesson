#include "car.h"

int Car::getSpeed() {
	return speed;
}
int Car::getPower() {
	return power;
}

void Car::setSpeed(int speed) {
	if (speed > 0) {
		this->speed = speed;
	}
}
void Car::setPower(int power) {
	this->power = power;
}