#include "bus.h"

int Bus::getPassengers() {
	return passengers;
}

void Bus::setPassengers() {
	if (passengers > 0) {
		this->passengers = passengers;
	}
}