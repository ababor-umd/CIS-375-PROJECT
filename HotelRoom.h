//Author Name: Alexander Collins
//Date Created: 12/7/2020
//Date Modified: 12/9/2020
//Description:
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Room {
private:
	string roomNumber, roomType;
	int price,
		roomAccom[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };	//in order: wheel-in beds, pillows, sheets, towels, hand soap, 
													//body wash & shampoo, toothbrush & toothpaste, water bottles
	bool isReserved;
public:
	int getPrice() { return price; }
	bool getIsReserved() { return isReserved; }
	void setPrice(int p) { price = p; }
	void setIsReserved(bool r) { isReserved = r; }
	void accommodations();
};

void Room::accommodations() {
	int userNum, userQuantity, total = 0,
		itemQ[8] = { 0, 0, 0, 0, 0, 0, 0, 0 },
		itemPrice[8] = { 75, 10, 15, 10, 5, 5, 3, 2 };
	string itemName[8] = { "Wheel-in beds", "Pillows", "Sheets", "Towels", "Hand soap", "Body wash & shampoo",
		"Toothbrush & toothpaste", "Water bottles" };
	char confirmOrder = 'n';

	while (confirmOrder != 'y') {
		cout << "=====Accommodations=====\n"
			<< "1. Wheel-in beds\n"
			<< "2. Pillows\n"
			<< "3. Sheets\n"
			<< "4. Towels\n"
			<< "5. Hand soap\n"
			<< "6. Body wash & shampoo\n"
			<< "7. Toothbrush & toothpaste\n"
			<< "8. Water bottles\n"
			<< "Enter a number corresponding to the item you\'d like to add, or 0 to end. ";
		cin >> userNum;

		if (userNum > 8 || userNum < 0)
			cout << "Invalid. There is no corresponding item.\n";

		else if (userNum) {
			cout << itemName[userNum - 1];
			if (userNum < 5 || userNum == 8) {
				cout << " cost an additional $" << itemPrice[userNum - 1] << " each.\n\n"
					<< "How many " << itemName[userNum - 1] << " would you like? ";
			}
			else if (userNum == 5) {
				cout << " costs an additional $" << itemPrice[userNum - 1] << " for each bar.\n\n"
					<< "How many bars of " << itemName[userNum - 1] << " would you like? ";
			}
			else {
				cout << " come together in a set, and cost an additional $" << itemPrice[userNum - 1] << " each.\n\n"
					<< "How many sets of " << itemName[userNum - 1] << " would you like? ";
			}
			cin >> userQuantity;
			if (userQuantity >= 0) {
				itemQ[userNum - 1] = userQuantity;
				cout << endl;
			}
			else {
				cout << "Invalid quantity. Try again.\n";
				system("pause");
			}
		}

		else {
			cout << "Room additions:\n";
			for (int i = 0; i < 8; i++) {
				if (itemQ[i] > 0) {
					cout << itemName[i] << " x" << itemQ[i] << endl;
					total += (itemPrice[i] * itemQ[i]);
				}
			}
			cout << "\nTotal accommodations costs: $" << total
				<< "\n\nWould you like to confirm your order? (y to confirm, any other character to deny) ";
			cin >> confirmOrder;
		}
	}

	price += total;
	for (int i = 0; i < 8; i++) {
		roomAccom[i] = itemQ[i];
	}
	cout << "Room accomodations order has been confirmed.\n";
	system("pause");
}