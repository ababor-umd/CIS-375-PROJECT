#include <iostream>
#include "Account.h"
#include "Payment.h"
#include "FlightRecommendation.h"
using namespace std;

int main() {

     

     FlightRecommendation user;

     //user.accountCreationRule();

     //string name;

     //cout << "Enter first Name: ";
     //getline(cin, name);
     //user.setFirstName(name);

     //cout << "Enter last name: ";
     //getline(cin, name);
     //user.setLastName(name);

     //cout << "Enter Email Address: ";
     //getline(cin, name);
     //user.setEamil(name);

     //cout << "Enter Password: ";
     //getline(cin, name);
     //user.setPassword(name);

     //user.displayAccountCreationMessage();

     //cout << "Enter the the credit/debit card details" << endl;
     //cout << "Enter first name on the card: " << endl;
     //getline(cin, name);
     //user.setFirstNameOnCard(name);

     //cout << "Enter last name on the card: " << endl;
     //getline(cin, name);
     //user.setLastNameOnCard(name);

     //cout << "Expiration Deatils: " << endl;
     //user.setExpirationDateOfCard();

     //cout << "Enter the card number: " << endl;
     //getline(cin, name);
     //user.setCardNumber(name);

     //cout << "Enter security code: " << endl;
     //getline(cin, name);
     //user.setSecurityCode(name);

     //user.setDestinationCity();

     //user.setSourceCity();

     //user.printAdjList();


     user.printAdjList();
 

    
     user.setDestinationCity();

     user.setSourceCity();

     user.pathRecommendationBasedOnDistance();

     user.flightPathRecommenderBasedOnCost();

     


     
     return 0;
}