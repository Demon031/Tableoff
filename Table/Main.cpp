#include "Manager.h"

int main() {
	Shop shop("Demtable");
	Manager manager("Lucifer");

	Table st1("ikead", "hell-4", 120, 4, 150, 50, "White");
	Table st2("ikead", "hell-666", 250, 6, 300, 80, "Black");
	Table st3("ikead", "hell-14", 500, 20, 500, 300, "White");

	shop.add(st1);
	shop.add(st2);
	shop.add(st3);

	cout << shop.getInfo() << endl;
	
	cout <<"Count: "<< Table::getCount() << endl;

	return 0;
}