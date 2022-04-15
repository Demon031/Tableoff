#pragma once
#include "Shop.h"

class Manager
{
private:
	string name;
public:
	Manager(string name);

	double calculatePrice(Shop shop);
	
};