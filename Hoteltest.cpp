#include "Hotel.h";
#include "Room.h";
#include "Bill.h";
#include "Item.h";
#include <iostream>
#include <string>
using namespace std;
int main() {
	Hotel super8 = Hotel();
	Bill bill = Bill();
	super8.printRoomMap();
	int choice;
	bool validInput = false;
	bool running = true;
	string roomNumber;
	cout << "Welcome to Hotel Reservation" << endl;
	while (running) {
		cout << "select an option: " << endl;
		cout << "1. Reserve Room" << endl;
		cout << "2. Cancel Reservation" << endl;
		cout << "3. Checkout" << endl;
		cout << "4. Exit " << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Please enter the room number of the Room you want to reserve: " << endl;
			cin >> roomNumber;
			super8.reserveRoom(roomNumber);
			super8.printRoomMap();
			break;
		case 2:
			cout << "Please enter the room number of the Room you want to cancel your reservation for: " << endl;
			cin >> roomNumber;
			super8.cancelReservation(roomNumber);
			super8.printRoomMap();
			break;
		case 3:
			cout << "Welcome to the checkout" << endl;
			
			break;
		case 4:
			cout << "Thank you!";
			running = false;
			break;
		default:
			cout << "invalid option. Try again" << endl;
		}
	}

	system("pause");
	
	return 0;
}
