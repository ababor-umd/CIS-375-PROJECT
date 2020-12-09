#include "Item.h";
#include <string>
using namespace std;
/*
*Author: Erik Arney
*Creation Date: 12/8/2020
*Modification Date: 12/8/2020
*
*/
Item::Item() {
	price = 0;
	name = " ";
}

Item::Item(string description, int cost) {
	price = cost;
	name = description;
}

string Item::getName() {
	return name;
}

int Item::getPrice() {
	return price;
}