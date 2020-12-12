#include "Room.h";
#include "Hotel.h";
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
/*
*Author: Erik Arney
*Creation Date: 12/8/2020
*Modification Date: 12/8/2020
*
*/

Hotel::Hotel(Bill& b) {
	this->bill = &b;
	for (int i = 0; i < FLOOR_NUM; i++) {
		
		for (int j = 0; j < ROOM_NUM; j++) {
			string roomNumber = to_string(i + 1) + "0" + to_string(j + 1);
			//populating Hotel with rooms
			Room tempRoom = Room(roomNumber);
			rooms[i][j] = tempRoom;

		}
	}
}

void Hotel::printRoomMap() {
	cout << "ROOM NUMBER: " << "\t" << "RESERVATION STATUS: " << "\t     " << "PRICE: " << "\t" << "ROOM TYPE: " << "\t" << endl;
	for (int i = 0; i < FLOOR_NUM; i++) {

		for (int j = 0; j < ROOM_NUM; j++) {
			cout << rooms[i][j].getRoomNumber() << "\t        " << rooms[i][j].getReservationMarker() << "\t\t\t\t" << rooms[i][j].getPrice() << "\t   " << rooms[i][j].getRoomType() << endl;

		}
	}
}

void Hotel::reserveRoom(string roomNum) {
	int floorPositon;
	int roomPosition;
	validateInput(floorPositon, roomPosition, roomNum);
	char wantAccom = 'n';
	//reserving corresponding room in the array
	if (rooms[floorPositon][roomPosition].getIsReserved()) {
		cout << "The desired room cannot be reserved because it has already been reserved by somone else" << endl;
	}
	else {
		rooms[floorPositon][roomPosition].setIsreserved(true);
		rooms[floorPositon][roomPosition].setReservationMarker('X');
		system("cls");
		this->printRoomMap();

		cout << "Would you like to add accommodations? (y to confirm, any other character to deny) ";
		cin >> wantAccom;
		bill->printToFile("\t* ROOM " + roomNum + " BOOKED: $" + to_string(rooms[floorPositon][roomPosition].getPrice()));
		if (wantAccom == 'y') rooms[floorPositon][roomPosition].accommodations(bill);

		cout << "Room " << rooms[floorPositon][roomPosition].getRoomNumber() << " has been reserved successfully" << endl;
		bill->add(Item("ROOM " + roomNum, rooms[floorPositon][roomPosition].getPrice()));
		bill->printToFile("\t\t- ROOM TOTAL: $" + to_string(rooms[floorPositon][roomPosition].getPrice()));
	}
	system("pause");

}

void Hotel::cancelReservation(string roomNum) {
	int floorPositon;
	int roomPosition;
	validateInput(floorPositon, roomPosition, roomNum);
	//bool validInput = false;
	//roomNum = this->validateIsDig(roomNum);
	////getting requested element of the array
	//int floorPositon = (roomNum.at(0) - '0') - 1;
	//int roomPosition = (roomNum.at(2) - '0') - 1;
	//
	////validating digits
	//while (!validInput) {
	//	floorPositon = (roomNum.at(0) - '0') - 1;
	//	roomPosition = (roomNum.at(2) - '0') - 1;
	//	
	//	if (roomNum.length() != 3 || roomNum.at(1) != '0') {
	//		cout << "invalid room number, please try again: " << endl;
	//		cin >> roomNum;
	//		roomNum = this->validateIsDig(roomNum);
	//	}
	//	else if (floorPositon < 0 || floorPositon >= FLOOR_NUM || roomPosition < 0 || roomPosition >= ROOM_NUM) {
	//		cout << "invalid room number, please try again: " << endl;
	//		cin >> roomNum;
	//		roomNum = this->validateIsDig(roomNum);
	//	}
	//	else {
	//		validInput = true;
	//	}
	//}
	//canceling reservation
	if (!rooms[floorPositon][roomPosition].getIsReserved()) {
		cout << "The reservation cannot be canceled because it hasn't been reserved yet" << endl;
	}
	else {
		rooms[floorPositon][roomPosition].setIsreserved(false);
		rooms[floorPositon][roomPosition].setReservationMarker(' ');
		system("cls");
		this->printRoomMap();
		cout << "The reservation at Room " << rooms[floorPositon][roomPosition].getRoomNumber() << " has been canceled successfully" << endl;
		bill->add(Item("ROOM " + roomNum + " CANCELLATION", -rooms[floorPositon][roomPosition].getPrice()));
		bill->printToFile("\t\t- ROOM " + roomNum + " CANCELLATION: - $" + to_string(rooms[floorPositon][roomPosition].getPrice()));
	}
	system("pause");
}
string Hotel::validateIsDig(string roomNum) {
	bool isAlpha;
	do {
		isAlpha = false;
		for (int i = 0; i < roomNum.size(); i++) {
			if (!isdigit(roomNum.at(i))) {
				isAlpha = true;
				cout << "invalid room number, please try again: " << endl;
				getline(cin, roomNum);
				break;
			}
		}
	} while (isAlpha);
	return roomNum;
}
void Hotel::validateInput(int& floorPositon, int& roomPosition, string roomNum) {
	bool validInput = false;
	roomNum = this->validateIsDig(roomNum);
	//getting requested element of the array
	floorPositon = (roomNum.at(0) - '0') - 1;
	roomPosition = (roomNum.at(2) - '0') - 1;

	//validating digits
	while (!validInput) {

		floorPositon = (roomNum.at(0) - '0') - 1;
		roomPosition = (roomNum.at(2) - '0') - 1;

		if (roomNum.length() != 3 || roomNum.at(1) != '0') {
			cout << "invalid room number, please try again: " << endl;
			cin >> roomNum;
			roomNum = this->validateIsDig(roomNum);
		}

		else if (floorPositon < 0 || floorPositon >= FLOOR_NUM || roomPosition < 0 || roomPosition >= ROOM_NUM) {
			cout << "invalid room number, please try again: " << endl;
			cin >> roomNum;
			roomNum = this->validateIsDig(roomNum);
		}
		else {
			validInput = true;
		}
	}
}