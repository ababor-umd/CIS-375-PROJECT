#ifndef ROOM_H
#define ROOM_H
#include <string>
#include "Bill.h"
using namespace std;
class Room {
public:
	double getPrice();
	void setPrice(double);
	bool getIsReserved();
	void setIsreserved(bool);
	char getReservationMarker();
	void setReservationMarker(char);
	string getRoomNumber();
	void setRoomNumber(string);
	string getRoomType();
	void setRoomType(string);
	void setRoomAccom(int[]);
	void accommodations(Bill*);
	Room();
	Room(string);
	
private:
	double price;
	int roomAccom[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };	//in order: wheel-in beds, pillows, sheets, towels, hand soap, 
													//body wash & shampoo, toothbrush & toothpaste, water bottles
	string roomNumber;
	string roomType;
	bool isReserved;
	//character is used to denote if Room is reserved in the Hotel map
	char reservationMarker;
};
#endif

