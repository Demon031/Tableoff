#pragma once
#include "Header.h"
#include "Table.h"

class Shop {
private:
	string name;
	string location;
	 Table* list;
	int size;

public:

	Shop();

	Shop(string name);

	Shop(string name, string location, string table) {
		this->name = name;
		this->location = location;
	
		this->list = list;
	}

	Shop() {
		this->name = "MinskDrev";
		this->location = "Minsk";
		this->list = "drev,";
	}

	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}

	string getLocation() {
		return location;
	}

	void setLocation(string location) {
		this->location = location;
	}

	string getTable() {
		return table;
	}
	void setTable(string table) {

		this->table = table;

	}

	~Shop() {
		cout << "Destructor" << endl;
	}

	void add(Table table);
	Table get(int index);
	int getSize(int size);
	void sortByNameAsc();
	Table getMax();
	Table getMin();

	string getInfo() {
		return "Shop:\nname = " + name
			+ ";\nlocation = " + location
			+ ";\ntable = " + table;
	}
};

