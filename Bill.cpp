#include "Bill.h";
#include "Item.h";
#include <iostream>
using namespace std;
Bill::Bill() {
	totalCost = 0;
}

void Bill::add(Item product) {
	items.push_back(product);
	totalCost += product.getPrice();
}

void Bill::print() {
	for (int i = 0; i < items.size(); i++) {
		cout << i << ". " << items.at(i).getName() << "\t\t" << items.at(i).getPrice() << endl;
	}
	cout << "Total Cost: " << totalCost << endl;
}