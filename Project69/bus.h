#pragma once
#include "main.h"

class Bus {
private:
	int passengers;
	int tank;
public:
	Bus() :passengers(0), tank(0) {}
	Bus(int passengers, int tank) : passengers(passengers), tank(tank) {}

	int getPassengers();
	int getTank();

	int setPassengers();
	int setTank();
};