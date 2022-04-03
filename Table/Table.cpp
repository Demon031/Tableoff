#include "Table.h"

Table::Table(string brand, string model, double price, int capacity, double length, double wigth, string color) {
	this->brand = brand;
	this->model = model;
	this->price = price;
	this->capacity = capacity;
	this->length = length;
	this->wigth = wigth;
	this->color = color;
}

Table::Table() {
	this->brand = "no name";
	this->model = "no name";
	this->price = 0;
	this->capacity = 0;
	this->length = 0;
	this->wigth = 0;
	this->color = "white";
}

string Table::getBrand() {
	return brand;
}
void Table::setBrand(string brand) {
	this->brand = brand;
}

string Table::getModel() {
	return model;
}

void Table::setModel(string model) {
	this->model = model;
}

double Table::getPrice() {
	return price;
}
void Table::setPrice(double price) {
	if (price > 0) {
		this->price = price;
	}
}

double Table::getCapacity() {
	return capacity;
}
void Table::setCapacity(double capacity) {
	if (capacity > 0) {
		this->capacity = capacity;
	}
}

double Table::setLength() {
	return length;
}
void Table::setLength(double length) {
	if (length > 0) {
		this->length = length;
	}
}

double Table::setWigth() {
	return wigth;
}
void Table::setWigth(double wigth) {
	if (wigth > 0) {
		this->wigth = wigth;
	}
}

string Table::getColor() {
	return color;
}
void Table::setColor(string color) {
	this->color = color;
}

Table::~Table() {
	cout << "Destructor" << endl;
}

string Table::getInfo() {
	return "Table:\nbrand = " + brand
		+ ";\nmodel = " + model
		+ ";\nprice = " + to_string(price)
		+ ";\ncapacity = " + to_string(capacity)
		= ";\nlength = " + to_string(length)
		+ ";\nwigth = " + to_string(wigth)
		+ ";\ncolor = " + color;
}