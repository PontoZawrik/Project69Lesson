#include "bus.h"

int Bus::getPassengers() {
	return passengers;
}
int Bus::getTank() {
	return tank;
}

int Bus::setPassengers() {
	this->passengers = passengers;
}
int Bus::setTank() {
	if (tank > 0) {
		this->tank = tank;
	}
}