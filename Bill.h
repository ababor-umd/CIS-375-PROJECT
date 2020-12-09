#ifndef BILL_H
#define BILL_H
#include <vector>
#include "Item.h";
using namespace std;
class Bill {
public:
	int getTotalCost();
	void setTotalCost();
	void add(Item);
	Bill();
	void print();

private:
	int totalCost;
	vector<Item> items;
};
#endif
