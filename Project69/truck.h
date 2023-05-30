#pragma once
#include "transport.h"

class Truck : public Transport{
private:
	int weight;
public:
	Truck() :weight(0), Transport(0) {}
	Truck(int weight, int tank) : weight(weight), Transport(tank) {}

	int getWeight();

	void setWeight();
};