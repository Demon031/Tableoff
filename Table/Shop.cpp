#include "Shop.h"

Shop::Shop() {
	name = "no shop name";
	size = 0;
	list = NULL;
}

Shop::Shop(string name) {
	this->name = name;
	size = 0;
	list = NULL;
}

Shop::Shop(string name, Table* list, int size) {
	this->name = name;
	this->list = list;
	this->size = size;
}

Shop::~Shop() {
	if (list != NULL) {
		delete[] list;
	}
}

string Shop::getName() {
	return name;
}
void Shop::setName(string name) {
	this->name = name;
}

int Shop::getSize() {
	return size;
}

Table Shop::get(int index) {
	if (list == NULL || index < 0 || index >= size) {
		return Table("", "", 0, 0, 0, 0, "");
	}
	else {
		return list[index];
	}
}

void Shop::set(int index, Table table) {
	if (list != NULL && index >= 0 && index < size) {
		list[index] = table;
	}
}

void Shop::add(Table table) {
	if (list == NULL) {
		list = new Table[1];
		size = 1;
		list[0] = table;
	}
	else {
		Table* temp = new Table[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}
		temp[size] = table;
		size++;
		delete[] list;
		list = temp;
	}
}

string Shop::getInfo() {
	if (list == NULL) {
		return "Shop " + name + " is empty.";
	}
	else {
		string msg = "Shop of Tables " + name + ":\n";
		for (int i = 0; i < size; i++)
		{
			msg += list[i].getInfo() + "\n";
		}

		return msg;
	}
}