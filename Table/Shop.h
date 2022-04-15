#pragma once
#include "Table.h"

class Shop {
private:
	string name;
	Table* list;
	int size;

public:

	Shop();

	Shop(string name);


	Shop(string name, Table* list, int size);

	~Shop();

	string getName();
	void setName(string name);

	int getSize();
	Table get(int index);

	void set(int index, Table table);
	void add(Table table);

	string getInfo();

};

