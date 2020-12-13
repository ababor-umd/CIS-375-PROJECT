#include "Trip.h"

Trip::Trip(Bill& b) {
	this->bill = &b;
}

void Trip::OneWay() {
	system("cls");
	cout << "ONEWAY FLIGHT: \n";
	string city;
	this->printCities();
	cout << "Enter source city: ";
	cin.ignore();
	getline(cin, city);
	this->setSourceCity(city);
	system("cls");
	this->printCities();
	cout << "Enter destination city: ";
	//cin.ignore();
	getline(cin, city);
	this->setDestinationCity(city);
	system("cls");
	cout << "How would you like to select your flight?\n 1) Based on price. \n 2) Based on distance. \n";
	char filter;
	do {
		cin.clear();
		cin >> filter;
	} while (filter != '1' && filter != '2');
	system("cls");
	double cost;
	if (filter == '1') {
		cost = (double)this->flightPathRecommenderBasedOnCost();
	}
	else {
		cost = (double)this->pathRecommendationBasedOnDistance() * 0.5;
	}
	cout << this->getSourceCity() << " -> " << this->getDestinationCity() << " Price: $" << cost << endl;
	
	bill->add(Item("ONE WAY FLIGHT " + this->getSourceCity() + "->" + this->getDestinationCity(), cost));
	bill->printToFile("\t* ONE WAY FLIGHT " + this->getSourceCity() + "->" + this->getDestinationCity() + " BOOKED: $" + to_string(cost));
}
void Trip::RoundTrip() {
	system("cls");
	cout << "ROUND TRIP FLIGHT: \n";
	string city;
	this->printCities();
	cout << "Enter source city: ";
	cin.ignore();
	getline(cin, city);
	this->setSourceCity(city);
	system("cls");
	this->printCities();
	cout << "Enter destination city: ";
	//cin.ignore();
	getline(cin, city);
	this->setDestinationCity(city);
	system("cls");
	cout << "How would you like to select your flight?\n 1) Based on price. \n 2) Based on distance. \n";
	char filter;
	do {
		cin.clear();
		cin >> filter;
	} while (filter != '1' && filter != '2');
	system("cls");
	double cost;
	if (filter == '1') {
		cost = (double)this->flightPathRecommenderBasedOnCost() * 2;
	}
	else {
		cost = ((double)this->pathRecommendationBasedOnDistance() * 0.5) * 2;
	}
	cout << this->getSourceCity() << "->" << this->getDestinationCity() << " Price: $" << cost / 2 << endl;
	cout << this->getDestinationCity() << "->" << this->getSourceCity() << " Price: $" << cost / 2 << endl;
	cout << "TOTAL: $" << cost << endl;
	bill->add(Item("ROUND TRIP FLIGHT " + this->getSourceCity() + "->" + this->getDestinationCity() + "->" + this->getSourceCity(), cost));
	bill->printToFile("\t* ROUND TRIP FLIGHT " + this->getSourceCity() + "->" + this->getDestinationCity() + "->" + this->getSourceCity() + " BOOKED: $" + to_string(cost));
}
void Trip::TripPrompt() {
	cout << "Is this trip one way or round trip?\n1) One Way.\n2) Round Trip.\n";
	char tripType;
	do {
		cin >> tripType;
	} while (tripType != '1' && tripType != '2');
	if (tripType == '1') {
		this->OneWay();
	}
	else {
		this->RoundTrip();
	}

}