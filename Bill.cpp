#include "Bill.h";
#include "Item.h";
#include <iostream>
using namespace std;
Bill::Bill() {
	totalCost = 0;
	outfile.open("TRIP BILL.txt");
	outfile << "-------------------------ITEMIZED TRIP BILL-------------------------" << endl;
}

void Bill::add(Item product) {
	items.push_back(product);
	totalCost += product.getPrice();
}

void Bill::print() {
	for (int i = 0; i < items.size(); i++) {
		cout << i + 1 << ". " << items.at(i).getName() << "\t\t" << "$" << items.at(i).getPrice() << endl;
	}
	cout << "Total Cost: $" << totalCost << endl;
}

void Bill::printToFile(string item) {
	outfile << item << endl;
}
Bill::~Bill() {
	this->printToFile("TOTAL: $" + to_string(this->totalCost));
}