/*
Author: Brannon Alcantar
Date Created: December 9th, 2020
*/

#include <iostream>
using namespace std;
#include "Seat Reservation.h"

SeatMap :: SeatMap() {
	seatRow = 0;
	seatColumn = 0;
	firstLength = 10;
	secondLength = 6;
	flightClass = 'N';
	seatCost = 0;
}

void SeatMap :: presetMap() {
	for (int i = 0; i < firstLength; i++) {
		for (int j = 0; j < secondLength; j++) {
			map[i][j] = 'A';
		}
	}
}

void SeatMap :: displayMap() {
	cout << "____________________" << endl;
	cout << "   1 2 3     4 5 6        " << endl;
	cout << " 1 " << map[0][0] << " " << map[0][1] << " " << map[0][2] << "     " << map[0][3] << " " << map[0][4] << " " << map[0][5] << endl;
	cout << " 2 " << map[1][0] << " " << map[1][1] << " " << map[1][2] << "     " << map[1][3] << " " << map[1][4] << " " << map[1][5] << endl;
	cout << " 3 " << map[2][0] << " " << map[2][1] << " " << map[2][2] << "     " << map[2][3] << " " << map[2][4] << " " << map[2][5] << endl;
	cout << " 4 " << map[3][0] << " " << map[3][1] << " " << map[3][2] << "     " << map[3][3] << " " << map[3][4] << " " << map[3][5] << endl;
	cout << " 5 " << map[4][0] << " " << map[4][1] << " " << map[4][2] << "     " << map[4][3] << " " << map[4][4] << " " << map[4][5] << endl;
	cout << endl;
	cout << endl;
	cout << " 6 " << map[5][0] << " " << map[5][1] << " " << map[5][2] << "     " << map[5][3] << " " << map[5][4] << " " << map[5][5] << endl;
	cout << " 7 " << map[6][0] << " " << map[6][1] << " " << map[6][2] << "     " << map[6][3] << " " << map[6][4] << " " << map[6][5] << endl;
	cout << " 8 " << map[7][0] << " " << map[7][1] << " " << map[7][2] << "     " << map[7][3] << " " << map[7][4] << " " << map[7][5] << endl;
	cout << " 9 " << map[8][0] << " " << map[8][1] << " " << map[8][2] << "     " << map[8][3] << " " << map[8][4] << " " << map[8][5] << endl;
	cout << "10 " << map[9][0] << " " << map[9][1] << " " << map[9][2] << "     " << map[9][3] << " " << map[9][4] << " " << map[9][5] << endl;
	cout << "____________________" << endl;
}


void SeatMap :: selectSeat(int row, int column) {
	row = seatRow;
	column = seatColumn;
}

void SeatMap :: setUnavailable(int row, int column) {
	row = row - 1;
	column = column - 1;
	map[row][column] = 'U';
}

void SeatMap :: setAvailable() {
	int row = seatRow - 1;
	int column = seatColumn - 1;
	map[row][column] = 'A';
}

char SeatMap :: getAvailability(int row, int column) {
	row = row - 1;
	column = column - 1;
	return map[row][column];
}

void SeatMap :: setFlightClass() {
	char flightC;
	cout << "Select a Class: " << endl;
	cout << "E - Economy" << endl;
	cout << "B - Buisiness" << endl;
	cout << "F = First" << endl;
	cin >> flightC;
	while (flightC != 'F' && flightC != 'B' && flightC != 'E') {
		cout << "Invalid Class selected, please select a valid class from options above: " << endl;
		cin >> flightC;
	}
	flightClass = flightC;
}

char SeatMap :: getFlightClass() {
	return flightClass;
}

bool SeatMap :: validClass(int row) {
	switch (flightClass) {
	case 'F':
		if (row != 1 && row != 2 && row != 3) {
			return false;
		}
		break;
	case 'B':
		if (row != 4 && row != 5 && row != 6 && row != 7) {
			return false;
		}
		break;
	case 'E':
		if (row != 8 && row != 9 && row != 10) {
			return false;
		}
		break;
	default:
		return true;
	}
}

void SeatMap :: calculateCost() {
	if (flightClass == 'F') {
		seatCost = seatCost + 1350.0;
	}
	else if (flightClass == 'B') {
		seatCost = seatCost + 800.0;
	}
	else if (flightClass == 'E') {
		seatCost = seatCost + 350.0;
	}
}

double SeatMap :: getTotal() {
	return seatCost;
}