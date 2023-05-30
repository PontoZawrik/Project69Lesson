#pragma once
#include "transport.h"

class GasStation {
public:
	static int TotalGas(Transport* transports, int size) {
		int result = 0;

		for (int i = 0; i < size; i++) {
			result += transports[i].getTank();
		}
		return result;
	}
};