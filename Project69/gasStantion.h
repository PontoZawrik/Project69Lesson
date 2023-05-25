#pragma once
#include "car.h"
#include "bus.h"
#include "truck.h"

class GasStation {
public:
	static int TotalGas(Truck* trucks, int sizeTruck, Bus* buses, int sizeBus, Car* cars, int sizeCar) {
		int result = 0;

		for (int i = 0; i < sizeTruck; i++) {
			result += trucks[i].getTank();
		}

		for (int i = 0; i < sizeBus; i++) {
			result += buses[i].getTank();
		}

		for (int i = 0; i < sizeCar; i++) {
			result += cars[i].getTank();
		}

		return result;
	}
};