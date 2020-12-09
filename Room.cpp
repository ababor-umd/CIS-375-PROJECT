#include "Room.h";
#include <string>
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

int Room::getPrice() {
	return price;
}

void Room::setPrice(int price) {
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
