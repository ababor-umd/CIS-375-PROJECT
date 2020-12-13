/*
Author: Brannon Alcantar
Date Created: December 9th, 2020
*/

#pragma once
#include <iostream>
using namespace std;


class SeatMap {
private:
	int seatRow;
	int seatColumn;
	char map[10][6];
	int firstLength;
	int secondLength;
	char flightClass;
	int seatCost;

public:
	//Constructor for Seat Reservation.
	SeatMap();

	//Function that sets all seats on plane to available.
	void presetMap();

	//Function that displays map of seats to the console.
	void displayMap();

	//Method that accepts user input to select seat according to row and column.
	void selectSeat(int row, int column);

	//Method that sets selected seat unavailable by marking seat with a U.
	void setUnavailable(int row, int column);

	//Method that sets selected seat to available by marking seat with an A.
	void setAvailable();

	char getAvailability(int row, int column);

	//Setter method that accepts user input of either F - First Class, E - Economy, and B - Buisness.
	void setFlightClass();

	//Getter method for the flightClass variable.
	char getFlightClass();

	//Method that checks wether or not selected seat from user corresponds with their selected class.
	bool validClass(int row);

	//Method that calculates the cost of seating based on selected flight class.
	void calculateCost();

	//Getter method that returns the total costs for seating to the user on the screen.
	double getTotal();

};