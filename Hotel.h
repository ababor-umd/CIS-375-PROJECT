#ifndef HOTEL_H
#define HOTEL_H
#include <string>
#include <vector>
#include "Room.h"
using namespace std;
class Hotel {
public:
	void reserveRoom(string);
	void cancelReservation(string);
	void printRoomMap();
	Hotel(Bill&);
private:
	Bill* bill;
	const int FLOOR_NUM = 4;
	const int ROOM_NUM = 4;
	Room  rooms[4][4]; 
	string validateIsDig(string);
	void validateInput(int&, int&, string);
};
#endif
