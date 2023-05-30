#include "transport.h"
#include "car.h"
#include "bus.h"
#include "truck.h"

int main() {
	Transport* transport = new Transport();

	transport = new Car();
	delete transport;

	transport = new Bus();
	delete transport;

	transport = new Truck();
}