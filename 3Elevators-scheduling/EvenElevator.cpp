#include "EvenElevator.h"

bool EvenElevator::availableInFloor(int floor) {
	return floor > 0 && floor <= this->maxFloor && (floor == 1 || !(floor & 1));
}

std::string EvenElevator::type() const {
	return "EvenElevator";
}

void EvenElevator::outputPosition(const int& timer) const {
	std::cout << std::endl;
	std::cout << "At time " << timer << ", EvenElevator at Floor " << this->currentFloor << "\nStatus: " << this->status;
	std::cout << std::endl;
}