#include "OddElevator.h"

bool OddElevator::availableInFloor(int floor) {
	return floor > 0 && floor <= this->maxFloor && floor & 1;
}

std::string OddElevator::type() const {
	return "OddElevator";
}

void OddElevator::outputPosition(const int& timer) const {
	std::cout << std::endl;
	std::cout << "At time " << timer << ", OddElevator at Floor " << this->currentFloor << "\nStatus: " << this->status;
	std::cout << std::endl;
}