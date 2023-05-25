#include "truck.h"

int Truck::getWeight() {
	return weight;
}
int Truck::getTank() {
	return tank;
}

int Truck::setWeight() {
	this->weight = weight;
}
int Truck::setTank() {
	if (tank > 0) {
		this->tank = tank;
	}
}