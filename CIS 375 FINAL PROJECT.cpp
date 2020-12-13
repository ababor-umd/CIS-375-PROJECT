
#include <iostream>
#include "Hotel.h";
#include "Trip.h";
#include "Bill.h";
#include "Seat Reservation.h"
#include "Luggage.h"
#include "AddMeal.h"

using namespace std;

void HotelMenu(Bill&, Hotel&);
void flightMenu(Trip, Bill&);
void checkout(Bill&);

int main() {
	Bill bill;
	Hotel super8(bill);
	Trip trip(bill);
	string userInput;
	//cout << "Create An Account" << endl;
	//cout << "Enter your first name: ";
	//getline(cin, userInput);
	//trip.setFirstName(userInput);
	//cout << "Enter Last name: ";
	////cin.ignore();
	//getline(cin, userInput);
	//trip.setLastName(userInput);
	//cout << "Enter email address: ";
	////cin.ignore();
	//getline(cin, userInput);
	//trip.setEamil(userInput);
	//cout << "Enter password (must contain at least one uppercase letter, one digit, or one special character): ";
	////cin.ignore();
	//getline(cin, userInput);
	//trip.setPassword(userInput);
	//cout << "ACCOUNT CREATED SUCCESSFULLY!" << endl;
	//system("pause");
	//system("cls");
	//cout << "Enter Payment Information" << endl;
	//cout << "Enter first name on card: ";
	////cin.ignore();
	//getline(cin, userInput);
	//trip.setFirstNameOnCard(userInput);
	//cout << "Enter last name on card: ";
	////cin.ignore();
	//getline(cin, userInput);
	//cout << "Enter the card number with spaces for every 4 digit: ";
	////cin.ignore();
	//getline(cin, userInput);
	//trip.setCardNumber(userInput);
	//cout << "Enter the 3 digit secutity code: ";
	//getline(cin, userInput);
	//trip.setSecurityCode(userInput);
	//cout << "Enter expiration MONTH on card (ex. if Jan enter 01 if Feb enter 02)" << endl;
	//trip.setExpirationDateOfCard();
	//cout << "CARD ADDED SUCCESSFULLY!" << endl;
	//bill.printToFile("Traveler: " + trip.getLastName() + ", " + trip.getFirstName() + "\nLast 4# of card: " + trip.getCardNumber().substr(trip.getCardNumber().size() - 4, 4) + "\n");
	//system("pause");
	char choice;
	bool running = true;
	system("cls");
	cout << "Welcome Vacation Reservation System " << endl;
	while (running) {
		system("cls");
		cout << "Please select an option: " << endl;
		cout << "1. Hotel Module" << endl;
		cout << "2. Flight Module " << endl;
		cout << "3. Checkout " << endl;
		cout << "4. Exit " << endl;
		cin >> choice;
		switch (choice) {
		case '1':
			system("cls");
			HotelMenu(bill, super8);
			break;
		case '2':
			system("cls");
			flightMenu(trip, bill);
			break;
		case '3':
			system("cls");
			checkout(bill);
			break;
		case '4':
			cout << "Thank you for using The Vaction Reservation System " << endl;
			running = false;
			break;
		default:
			cout << "Invalid option, please try again " << endl;
			//cin >> choice;	

		}
	}




	system("pause");
	return 0;
}

void HotelMenu(Bill& bill, Hotel& hotel) {
	system("cls");
	char choice;
	bool validInput = false;
	bool running = true;

	string roomNumber;
	cout << "Welcome to Hotel Reservation" << endl;
	while (running) {
		cout << "select an option: " << endl;
		cout << "1. Reserve Room" << endl;
		cout << "2. Cancel Reservation" << endl;
		cout << "3. Print Hotel Map" << endl;
		cout << "4. Exit " << endl;
		cin >> choice;
		switch (choice) {
		case '1':
			do {
				bool exitLoop = false;
				while (true) {
					system("cls");
					hotel.printRoomMap();
					cout << "Please enter the room number of the Room you want to reserve or press 0 to escape: " << endl;
					cin.ignore();
					getline(cin, roomNumber);
					if (roomNumber == "0") {
						exitLoop = true;
						break;
					}
					else {
						hotel.reserveRoom(roomNumber);
					}
				}
				if (exitLoop)
					break;
			} while (true);
			break;
		case '2':
			system("cls");
			hotel.printRoomMap();
			cout << "Please enter the room number of the Room you want to cancel your reservation for: " << endl;
			cin.ignore();
			getline(cin, roomNumber);
			hotel.cancelReservation(roomNumber);
			system("cls");
			hotel.printRoomMap();
			break;
		case '3':
			system("cls");
			hotel.printRoomMap();
			system("pause");
			break;
		case '4':
			cout << "Thank you!";
			running = false;
			break;
		default:
			cout << "invalid option. Try again" << endl;
		}
		system("cls");
	}
}

void SeatReservation(Bill& bill) {
	SeatMap map;
	int row = 0;
	int column;
	char answer3;

	map.presetMap();
	map.displayMap();
	map.setFlightClass();

	cout << endl;
	cout << "First Class: Rows 1 - 3" << endl;
	cout << "Buisness Class: Rows 4 - 7" << endl;
	cout << "Economy Class: Rows 8 - 10" << endl;
	cout << endl;

	while (1 == 1) {
		while (1 == 1) {
			cout << "select row number: " << endl;
			cin >> row;

			while (row > 10 || row < 1) {
				cout << "incorrect row number, please enter a valid row number: " << endl;
				cin >> row;
			}

			cout << "select column number: " << endl;
			cin >> column;

			while (column > 6 || column < 1) {
				cout << "incorrect column number, please enter a valid column number: " << endl;
				cin >> column;
			}

			if (map.validClass(row) == false) {
				cout << "Selected seat is not within selected class." << endl;
			}
			else if (map.getAvailability(row, column) == 'U') {
				cout << "Selected Seat is unavailable, please select an available seat" << endl;
			}
			else {
				break;
			}
		}

		map.selectSeat(row, column);
		map.setUnavailable(row, column);
		map.displayMap();
		map.calculateCost();

		cout << "Is there another seat you wish to select? Y for yes, N for No: " << endl;
		cin >> answer3;

		while (answer3 != 'N' && answer3 != 'n' && answer3 != 'Y' && answer3 != 'y') {
			cout << "Please select a valid option, Y for yes, N for no: " << endl;
			cin >> answer3;
		}

		if (answer3 == 'N' || answer3 == 'n') {
			int total = map.getTotal();
			cout << "Total cost of seating is : $" << total << endl;
			cout << "Your seats were reserved!" << endl;
			bill.add(Item("Reserved Seating", total));
			bill.printToFile("\t* SEAT " + to_string(row) + "." + to_string(column) + " RESERVED: $" + to_string((double)total));

			system("pause");
			break;
		}
	}
}

void LuggageSystem(Bill& bill) {
	Luggage luggage;
	int weight;
	char answer;
	char answer2;

	cout << "Is there a bag you wish to enter? Enter Y for yes and N for no:" << endl;
	cin >> answer;

	while (answer != 'N' && answer != 'n' && answer != 'Y' && answer != 'y') {
		cout << "Please select a valid option, Y for yes, N for no: " << endl;
		cin >> answer;
	}

	if (answer == 'Y' || answer == 'y') {
		while (1 == 1) {
			while (1 == 1) {
				printf("Please enter weight of your bag: ");
				cin >> weight;
				luggage.setBagWeight(weight);
				if (luggage.exceedsLimit() == false) {
					luggage.setBagTotal();
					break;
				}
			}
			printf("Is there another bag you wish to enter? Enter Y for yes and N for no: ");
			cin >> answer2;

			while (answer2 != 'N' && answer2 != 'n' && answer2 != 'Y' && answer2 != 'y') {
				cout << "Please select a valid option, Y for yes, N for no: " << endl;
				cin >> answer2;
			}

			if (answer2 == 'n' || answer2 == 'N') {
				break;
			}
		}
	}

	cout << "Total amount of bags checked in: " << luggage.getBagTotal() << endl;
	luggage.calculateCosts();

	double total;
	total = luggage.getTotal();
	bill.add(Item(to_string(luggage.getBagTotal()) + " Bag(s)", total));

	cout << "Total is: $" << total << endl;
	cout << "Your bags were checked in!" << endl;
	system("pause");
}

void flightMenu(Trip trip, Bill& bill) {
	bool running = true;
	while (running) {
		system("cls");
		char choice;
		cout << "Welcome to the Flight Reservation System" << endl;
		cout << "1. Book Flight" << endl;
		cout << "2. Reserve Seating" << endl;
		cout << "3. Add Luggage" << endl;
		cout << "4. Add Meals" << endl;
		cout << "5. Exit" << endl;
		cin >> choice;
		switch (choice) {
		case '1':
			system("cls");
			trip.TripPrompt();
			system("pause");
			break;
		case '2':
			system("cls");
			SeatReservation(bill);
			break;
		case '3':
			system("cls");
			LuggageSystem(bill);
			break;
		case '4':
			system("cls");
			AddMealModule(bill);
			break;
		case '5':
			system("cls");
			running = false;
			break;
		default:
			system("cls");
			cout << "Incorrect Input try again" << endl;
			system("pause");
			break;
		}
		system("cls");
	}
}

void checkout(Bill& bill) {
	cout << "Here is your current bill: " << endl;
	bill.print();
	system("pause");
}
