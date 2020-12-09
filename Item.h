#ifndef ITEM_H
#define ITEM_H
#include <vector>
#include <string>
using namespace std;
class Item {
public:
	Item();
	Item(string, int);
	int getPrice();
	void setPrice(int);
	string getName();
	void setName();
private:
	int price;
	string name;
};
#endif
