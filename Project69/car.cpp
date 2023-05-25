#include "car.h"

int Car::getSpeed() {
	return speed;
}
int Car::getPower() {
	return power;
}
int Car::getTank() {
	return tank;
}

int Car::setSpeed(int speed) {
	if (speed > 0) {
		this->speed = speed;
	}
}
int Car::setPower(int power) {
	this->power = power;
}
int Car::setTank(int tank) {
	if (tank > 0) {
		this->tank = tank;
	}
}