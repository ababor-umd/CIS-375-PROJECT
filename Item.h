#ifndef ITEM_H
#define ITEM_H
#include <vector>
#include <string>
using namespace std;
class Item {
public:
	Item();
	Item(string, double);
	double getPrice();
	void setPrice(double);
	string getName();
	void setName();
private:
	double price;
	string name;
};
#endif
