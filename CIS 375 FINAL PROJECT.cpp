#include <iostream>
#include "Hotel.h"
#include "Trip.h"
#include "Bill.h"
#include "AddMeal.h"
using namespace std;

//char Menu();
void HotelMenu(Bill&, Hotel&);
void flightMenu(Trip, Bill&);
void checkout(Bill&);

int main() {
	Bill bill;
	Hotel super8(bill);
	Trip trip(bill);
	string userInput;
	cout << "Create An Account" << endl;
	cout << "Enter your first name: ";
	getline(cin, userInput);
	trip.setFirstName(userInput);
	cout << "Enter Last name: ";
	//cin.ignore();
	getline(cin, userInput);
	trip.setLastName(userInput);
	cout << "Enter email address: ";
	//cin.ignore();
	getline(cin, userInput);
	trip.setEamil(userInput);
	cout << "Enter password (must contain at least one uppercase letter, one digit, or one special character): ";
	//cin.ignore();
	getline(cin, userInput);
	trip.setPassword(userInput);
	cout << "ACCOUNT CREATED SUCCESSFULLY!" << endl;
	system("pause");
	system("cls");
	cout << "Enter Payment Information" << endl;
	cout << "Enter first name on card: ";
	//cin.ignore();
	getline(cin, userInput);
	trip.setFirstNameOnCard(userInput);
	cout << "Enter last name on card: ";
	//cin.ignore();
	getline(cin, userInput);
	cout << "Enter the card number with spaces for every 4 digit: ";
	//cin.ignore();
	getline(cin, userInput);
	trip.setCardNumber(userInput);
	cout << "Enter the 3 digit secutity code: ";
	getline(cin, userInput);
	trip.setSecurityCode(userInput);
	cout << "Enter expiration MONTH on card (ex. if Jan enter 01 if Feb enter 02)" << endl;
	trip.setExpirationDateOfCard();
	cout << "CARD ADDED SUCCESSFULLY!" << endl;
	bill.printToFile("Traveler: " + trip.getLastName() + ", " + trip.getFirstName() + "\nLast 4# of card: " + trip.getCardNumber().substr(trip.getCardNumber().size() - 4, 4) + "\n");
	system("pause");
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
			HotelMenu(bill, super8);
			break;
		case '2':
			flightMenu(trip, bill);
			break;
		case '3':
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

void flightMenu(Trip trip, Bill& bill) {
	bool running = true;
	while (running) {
		char choice;
		cout << "Welcome to the Flight Reservation System" << endl;
		cout << "1. Book Flight" << endl;
		cout << "2. Add Luggage" << endl;
		cout << "3. Add Meals" << endl;
		cout << "4. Add Entertainment" << endl;
		cout << "5. Exit" << endl;
		cin >> choice;
		switch (choice) {
		case '1':
			trip.TripPrompt();
			break;
		case '2':
			break;
		case '3':
			AddMealModule(bill);
			break;
		case '4':
			break;
		case '5':
			running = false;
			break;
		default:
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
