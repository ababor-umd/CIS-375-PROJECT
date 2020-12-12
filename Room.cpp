#include "Room.h";
#include <iostream>
using namespace std;
/*
*Author: Erik Arney
*Creation Date: 12/8/2020
*Modification Date: 12/8/2020
*
*/

Room::Room() {
	price = 100;
	roomNumber = " ";
	isReserved = false;
	reservationMarker = ' ';
	roomType = "Standard";

}//end ctor


 //overloaded ctor
Room::Room(string roomNumber) {
	price = 100;
	this->roomNumber = roomNumber;
	isReserved = false;
	reservationMarker = ' ';
	roomType = "Standard";
}//end ctor

double Room::getPrice() {
	return price;
}

void Room::setPrice(double price) {
	this->price = price;
}

bool Room::getIsReserved() {
	return isReserved;
}

void Room::setIsreserved(bool isReserved) {
	this->isReserved = isReserved;
}

char Room::getReservationMarker() {
	return reservationMarker;
}

void Room::setReservationMarker(char marker) {
	this->reservationMarker = marker;
}

string Room::getRoomType() {
	return roomType;
}

void Room::setRoomType(string roomType) {
	this->roomType = roomType;
}

string Room::getRoomNumber() {
	return roomNumber;
}

void Room::setRoomNumber(string roomNum) {
	this->roomNumber = roomNum;
}

void Room::setRoomAccom(int roomA[]){
	for (int i = 0; i < 8; i++)
		roomAccom[i] = roomA[i];
}

void Room::accommodations(Bill *bill) {
	int userNum, userQuantity, total,
		itemQ[8] = { 0, 0, 0, 0, 0, 0, 0, 0 },
		itemPrice[8] = { 75, 10, 15, 10, 5, 5, 3, 2 };
	string itemName[8] = { "Wheel-in beds", "Pillows", "Sheets", "Towels", "Hand soap", "Body wash & shampoo",
		"Toothbrush & toothpaste", "Water bottles" };
	char confirmOrder = 'n';

	while (confirmOrder != 'y') {
		system("cls");
		total = 0;
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
			system("cls");
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
			system("cls");
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
	for (int i = 0; i < 8; i++) {
		if (itemQ[i] > 0) {
			bill->printToFile("\t\t- " + itemName[i] + " x" + to_string(itemQ[i]) + " = $" + to_string(itemPrice[i] * itemQ[i]));
		}
	}
	this->setPrice(this->getPrice() + total);
	this->setRoomAccom(itemQ);

	cout << "Room accomodations order has been confirmed.\n";
	//system("pause");
}