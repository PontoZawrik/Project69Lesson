#pragma once
#include "main.h"

class Truck {
private:
	int weight;
	int tank;
public:
	Truck() :weight(0), tank(0) {}
	Truck(int weight, int tank) : weight(weight), tank(tank) {}

	int getWeight();
	int getTank();

	int setWeight();
	int setTank();
};