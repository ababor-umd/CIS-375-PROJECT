#pragma once
#ifndef BILL_H
#define BILL_H
#include <vector>
#include <fstream>
#include "Item.h"
#include "Payment.h"
using namespace std;
class Bill/* : public Payment */{
public:
	ofstream outfile;
	double getTotalCost();
	void setTotalCost();
	void add(Item);
	Bill();
	~Bill();
	void print();
	void printToFile(string);
private:
	double totalCost;
	vector<Item> items;
};
#endif

