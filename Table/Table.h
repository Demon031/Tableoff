#include "Header.h"

class Table {
private:
	string brand; // �����  
	string model; // ������ 
	double price; // ����  
	int capacity; // �����������  
	double length; // ������   
	double wigth; // ���    
	string color; // ����  

public:

	Table(string brand, string model, double price, int capacity, double length, double wigth, string color);

	Table();
	

	string getBrand();
	
	void setBrand(string brand);
	

	string getModel();
	

	void setModel(string model);
	

	double getPrice();

	void setPrice(double price);

	double getCapacity();

	void setCapacity(double capacity);

	double setLength();
	
	void setLength(double length);

	double setWigth();

	void setWigth(double wigth);

	string getColor();

	void setColor(string color);

	~Table();

	string getInfo();
};
