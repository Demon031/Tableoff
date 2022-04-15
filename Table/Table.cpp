#pragma once
#include "Table.h"

int Table::count = 0;

Table::Table(string brand, string model, double price, int capacity, double length, double wigth, string color) {
	count++;
	this->brand = brand;
	this->model = model;
	this->price = price;
	this->capacity = capacity;
	this->length = length;
	this->weigth = wigth;
	this->color = color;
}

Table::Table() {
	count++;
	this->brand = "no name";
	this->model = "no name";
	this->price = 0;
	this->capacity = 0;
	this->length = 0;
	this->weigth = 0;
	this->color = "white";
}

Table::~Table() {
	count--;
}

int Table::getCount() {
	return count;
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
	return weigth;
}
void Table::setWigth(double wigth) {
	if (wigth > 0) {
		this->weigth = wigth;
	}
}

string Table::getColor() {
	return color;
}
void Table::setColor(string color) {
	this->color = color;
}

string Table::getInfo() {
	return "Table:\nbrand = " + brand
		+ ";\nmodel = " + model
		+ ";\nprice = " + to_string(price)
		+ ";\ncapacity = " + to_string(capacity)
		= ";\nlength = " + to_string(length)
		+ ";\nwigth = " + to_string(weigth)
		+ ";\ncolor = " + color;
}