#include "Header.h"

class Table {
private:
	string brand; // бренд  
	string model; // модель 
	double price; // цена  
	int capacity; // вместимость  
	double length; // длинна   
	double wigth; // вес    
	string color; // цвет  

public:

	Table(string brand, string model, double price, int capacity, double length, double wigth, string color) {
		this->brand = brand;
		this->model = model;
		this->price = price;
		this->capacity = capacity;
		this->length = length;
		this->wigth = wigth;
		this->color = color;
	}
	Table() {
		this->brand = "no name";
		this->model = "no name";
		this->price = 0;
		this->capacity = 0;
		this->length = 0;
		this->wigth = 0;
		this->color = "white";
	}

	string getBrand() {
		return brand;
	}
	void setBrand(string brand) {
		this->brand = brand;
	}
	string getModel() {
		return model;
	}
	void setModel() {
		this->model = model;
	}
	double getPrice() {
		return price;
	}
	void setPrice(double price) {
		if (price > 0) {
			this->price = price;
		}
	}
	double getCapacity() {
		return capacity;
	}
	void setSpeed(double speed) {
		if (capacity > 0) {
			this->capacity = capacity;
		}
	}



	string getColor() {
		return color;
	}
	void setColor() {
		this->color = color;
	}

	~Table() {
		cout << "Destructor" << endl;
	}

	string getInfo() {
		return "Table:\nbrand = " + brand
			+ ";\nmodel = " + model
			+ ";\nprice = " + to_string(price)
			+ ";\nspeed = " + to_string(speed)
			+ ";\ncolor = " + color;
	}
};
