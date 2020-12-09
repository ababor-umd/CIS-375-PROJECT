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

Hotel::Hotel() {
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
	bool validInput = false;
	
	//getting requested element of the array
	int floorPositon = (roomNum.at(0) - '0') - 1;
	int roomPosition = (roomNum.at(2) - '0') - 1;

	//validating input
	while (!validInput) {
		 floorPositon = (roomNum.at(0) - '0') - 1;
		 roomPosition = (roomNum.at(2) - '0') -1;
		if (roomNum.length() != 3 || roomNum.at(1) != '0') {
			cout << "invalid room number, please try again: " << endl;
			cin >> roomNum;
		}

		else if (floorPositon < 0 || floorPositon >= FLOOR_NUM || roomPosition < 0 || roomPosition >= ROOM_NUM ) {
			cout << "invalid room number, please try again: " << endl;
			cin >> roomNum;
		}
		else {
			validInput = true;
		}
	}
	//reserving corresponding room in the array
	if (rooms[floorPositon][roomPosition].getIsReserved()) {
		cout << "The desired room cannot be reserved because it has already been reserved by somone else" << endl;
	}
	else {
		rooms[floorPositon][roomPosition].setIsreserved(true);
		rooms[floorPositon][roomPosition].setReservationMarker('X');
		cout << "Room " << rooms[floorPositon][roomPosition].getRoomNumber() << " has been reserved successfully" << endl;
	}
}

void Hotel::cancelReservation(string roomNum) {
	bool validInput = false;

	//getting requested element of the array
	int floorPositon = (roomNum.at(0) - '0') - 1;
	int roomPosition = (roomNum.at(2) - '0') - 1;

	//validating input
	while (!validInput) {
		floorPositon = (roomNum.at(0) - '0') - 1;
		roomPosition = (roomNum.at(2) - '0') - 1;
		if (roomNum.length() != 3 || roomNum.at(1) != '0') {
			cout << "invalid room number, please try again: " << endl;
			cin >> roomNum;
		}

		else if (floorPositon < 0 || floorPositon >= FLOOR_NUM || roomPosition < 0 || roomPosition >= ROOM_NUM) {
			cout << "invalid room number, please try again: " << endl;
			cin >> roomNum;
		}
		else {
			validInput = true;
		}
	}
	//canceling reservation
	if (!rooms[floorPositon][roomPosition].getIsReserved()) {
		cout << "The reservation cannot be canceled because it hasn't been reserved yet" << endl;
	}
	else {
		rooms[floorPositon][roomPosition].setIsreserved(false);
		rooms[floorPositon][roomPosition].setReservationMarker(' ');
		cout << "The reservation at Room " << rooms[floorPositon][roomPosition].getRoomNumber() << " has been canceled successfully" << endl;
	}


}