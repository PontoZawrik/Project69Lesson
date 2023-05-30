#pragma once
#include "transport.h"

class Bus : public Transport {
private:
	int passengers;
public:
	Bus() : passengers(0), Transport() {}
	Bus(int passengers, int tank) : passengers(passengers), Transport(tank) {}

	int getPassengers();

	void setPassengers();
};