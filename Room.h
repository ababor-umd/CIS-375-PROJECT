#ifndef ROOM_H
#define ROOM_H
#include <string>
using namespace std;
class Room {
public:
	int getPrice();
	void setPrice(int);
	bool getIsReserved();
	void setIsreserved(bool);
	char getReservationMarker();
	void setReservationMarker(char);
	string getRoomNumber();
	void setRoomNumber(string);
	string getRoomType();
	void setRoomType(string);
	Room();
	Room(string);
	
private:
	int price;
	string roomNumber;
	string roomType;
	bool isReserved;
	//character is used to denote if Room is reserved in the Hotel map
	char reservationMarker;
};
#endif

