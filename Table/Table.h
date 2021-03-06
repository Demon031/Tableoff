#pragma once
#include "Header.h"

class  Table {
private:
	static int count;

	string brand; // ?????  
	string model; // ?????? 
	double price; // ????  
	int capacity; // ???????????  
	double length; // ??????   
	double weigth; // ???    
	string color; // ????  

public:

	Table(string brand, string model, double price, int capacity, double length, double wigth, string color);
	Table();
	~Table();

	static int getCount();

	string getBrand();
	void setBrand(string brand);

	string getModel();
	void setModel(string model);

	double getPrice();
	void setPrice(double price);

	double getCapacity();
	void setCapacity(double capacity);

	double getLength();
	void setLength(double length);

	double getWigth();
	void setWigth(double weigth);

	string getColor();
	void setColor(string color);

	string getInfo();
};
