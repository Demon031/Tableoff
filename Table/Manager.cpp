#include "Manager.h"

Manager::Manager(string name) {
	this->name = name;
}
double Manager::calculatePrice(Shop shop) {
	double avg = 0;

	for (int i = 0; i < shop.getSize(); i++)
	{
		avg += shop.get(i).getPrice();
	}

	avg /= shop.getSize();

	return avg;
}

