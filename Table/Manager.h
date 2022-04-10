#pragma once
#include "Header.h"
#include "Shop.h"

class Manager
{
private:
	string name;
public:
	Manager(string name);

	double calculateAvg(Shop shop);
	
};