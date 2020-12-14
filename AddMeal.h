/*
*Author: Ethan Puschell
*Creation Date: 12-7-20
*Modification Date: 12-13-20
*Purpose: Header file for the AddMeal module for the Flight Recommendation program. Contains all of the classes and functions for ordering a meal for the flight.
*/
#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#include "Bill.h"
using namespace std;

/*Dish class will contain the information for the food on the menu.*/
class Dish {
private:
	string dishName;
	char course;
	char dishTime;
	int calories;
	bool vegetarian;
	bool gluten;
	bool kids;
	double price;
public:

	/*Setter function for all of the variables within the private data members.*/
	void SetDish(string newName, char newCourse, char newDishTime, int newCal, bool isVeg, bool isGlu, bool forKidz, double newPrice)
	{
		dishName = newName;
		course = newCourse;
		dishTime = newDishTime;
		calories = newCal;
		vegetarian = isVeg;
		gluten = isGlu;
		kids = forKidz;
		price = newPrice;
	}

	/*Setter and getter functions for each of the private data members of Dish class.*/
	void SetName(string newName)
	{
		dishName = newName;
	}

	const string GetName() { return dishName; }

	void SetCourse(char newCourse)
	{
		course = newCourse;
	}

	const char GetCourse() { return course; }

	void SetDT(char newDishTime)
	{
		dishTime = newDishTime;
	}

	const char GetDT() { return dishTime; }

	void SetCalories(int newCal)
	{
		calories = newCal;
	}

	const int GetCalories() { return calories; }

	void SetVeg(bool isVeg)
	{
		vegetarian = isVeg;
	}

	const bool GetVeg() { return vegetarian; }

	void SetGlu(bool isGlu)
	{
		gluten = isGlu;
	}

	const bool GetGlu() { return gluten; }

	void SetKids(bool forKidz)
	{
		kids = forKidz;
	}

	const bool GetKids() { return kids; }

	void SetPrice(double newPrice)
	{
		price = newPrice;
	}

	const double GetPrice() { return price; }

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: None.
// OUTPUT: Print out of the dish and all of its attributes.
// DESCRIPTION: Function prints out the Dish and all of its attributes.
	void PrintDish()
	{
		cout << "Dish name: " << dishName << endl << "Course: ";
		if (course == 'A')
			cout << "Appetizer" << endl;
		else if (course == 'S')
			cout << "Side" << endl;
		else if (course == 'E')
			cout << "Entree" << endl;
		else if (course == 'K')
			cout << "Children's Entree" << endl;
		else if (course == 'D')
			cout << "Dessert" << endl;
		else
		{
			cerr << "Error: Invalid course" << endl;
			system("pause");
			exit(0);
		}
		cout << "Menu type: ";
		if (dishTime == 'B')
			cout << "Breakfast" << endl;
		else if (dishTime == 'L')
			cout << "Lunch" << endl;
		else if (dishTime == 'D')
			cout << "Dinner" << endl;
		else
		{
			cerr << "Error. Invalid Menu type." << endl;
			system("pause");
			exit(0);
		}
		cout << "Calories: " << calories << endl << "Vegetarian: ";
		if (vegetarian == true)
			cout << "Yes" << endl;
		else if (vegetarian == false)
			cout << "No" << endl;
		else
		{
			cerr << "Error. Invalid vegetarian choise" << endl;
			exit(0);
		}
		cout << "Contains gluten: ";
		if (gluten == true)
			cout << "Yes" << endl;
		else if (gluten == false)
			cout << "No" << endl;
		else
		{
			cout << "Error. Invalid gluten choice." << endl;
			system("pause");
			exit(0);
		}
		cout << "Kids item: ";
		if (kids == true)
			cout << "Yes" << endl;
		else if (kids == false)
			cout << "No" << endl;
		else
		{
			cerr << "Error. Invalid kids choice." << endl;
			system("pause");
			exit(0);
		}
		cout << "Price: $" << setprecision(2) << fixed << price << endl;

	}
};

/*Beverage class that will be used for each drink on the menu.*/
class Beverage
{
private:
	string bevName;
	bool alcohol;
	double abv;
	bool hot;
	bool carbonated;
	bool caffeine;
	bool kids;
	double price;

public:

	/*Setter function for each of the private data members of Beverage.*/
	void SetBeverage(string newName, bool isBooze, double newABV, bool isHot, bool isBubbly, bool wakeUp, bool wuTang, double newPrice)
	{
		bevName = newName;
		alcohol = isBooze;
		abv = newABV;
		hot = isHot;
		carbonated = isBubbly;
		caffeine = wakeUp;
		kids = wuTang;
		price = newPrice;
	}

	/*Getter and setter functions for each of the individual private data members for Beverage.*/
	void SetBevName(string newName)
	{
		bevName = newName;
	}

	const string GetBevName() { return bevName; }

	void SetAlcohol(bool isBooze)
	{
		alcohol = isBooze;
	}

	const bool GetAlcohol() { return alcohol; }

	void SetABV(double newABV)
	{
		abv = newABV;
	}

	const double GetABV() { return abv; }

	void SetHot(bool isHot)
	{
		hot = isHot;
	}

	const bool GetHot() { return hot; }

	void SetCarb(bool isBubbly)
	{
		carbonated = isBubbly;
	}

	const bool GetCarb() { return carbonated; }

	void SetCaffeine(bool wakeUp)
	{
		caffeine = wakeUp;
	}

	const bool GetCaffeine() { return caffeine; }

	void SetKids(bool wuTang)
	{
		kids = wuTang;
	}

	const bool GetKids() { return kids; }

	void SetPrice(double newPrice)
	{
		price = newPrice;
	}

	const double GetPrice() { return price; }

	/*Prints out all of the data members for the Beverage.*/
	void PrintBev()
	{
		cout << "Name: " << bevName << endl << "Alcohol: ";
		if (alcohol == true)
			cout << "Yes" << endl << "ABV: " << abv << "%" << endl;
		else if (alcohol == false)
			cout << "No" << endl;
		else
		{
			cerr << "Error. Invalid alcohol choice" << endl;
			exit(0);
		}
		cout << "Hot or cold: ";
		if (hot == true)
			cout << "Hot" << endl;
		else if (hot == false)
			cout << "Cold" << endl;
		else
		{
			cerr << "Error. Invalid hot or cold choice." << endl;
			exit(0);
		}
		cout << "Carbonated: ";
		if (carbonated == true)
			cout << "Yes" << endl;
		else if (carbonated == false)
			cout << "No" << endl;
		else
		{
			cout << "Error. Invalid carbonation option." << endl;
			exit(0);
		}
		cout << "Caffeine: ";
		if (caffeine == true)
			cout << "Yes" << endl;
		else if (caffeine == false)
			cout << "No" << endl;
		cout << "Kids item: ";
		if (kids == true)
			cout << "Yes" << endl;
		else if (kids == false)
			cout << "No" << endl;
		else
		{
			cout << "Error. Invalid kids option" << endl;
			exit(0);
		}
		cout << "Price: " << setprecision(2) << fixed << price << endl;
	}
};

/*MealCart will be used to store the Dishes and Beverages that the user will order.*/
class MealCart
{
private:
	string itemName;
	int quantity;
	double itemCost;
public:
	/*Setter function for all of the private data members for MealCart.*/
	void SetItem(string newiN, double newCost, int newQ)
	{
		itemName = newiN;
		itemCost = newCost;
		quantity = newQ;
	}

	/*Getter and setter functions for each of the individual private data members for MealCart.*/
	void SetItemName(string newiN)
	{
		itemName = newiN;
	}

	const string GetItemName() { return itemName; }

	void SetItemCost(double newCost)
	{
		itemCost = newCost;
	}

	const double GetItemCost() { return itemCost; }

	void SetQuantity(int newQ)
	{
		quantity = newQ;
	}

	const int GetQuantity() { return quantity; }
};

/*Function declarations for alll of the functions that are utilized to allow the user to order food and drinks and for the admin to add items to the menu.*/
void FillFoodMenu(vector<Dish>&);
void FillDrinkMenu(vector<Beverage>&);
void FCourse(Dish&);
void FTime(Dish&);
void FCal(Dish&);
void FVeg(Dish&);
void FGlu(Dish&);
void FKids(Dish&);
void FPrice(Dish&);
void EnterFood(vector<Dish>&);
void BevAlcohol(Beverage&);
void BevABV(Beverage&);
void BevHot(Beverage&);
void BevBubbly(Beverage&);
void BevCaffeine(Beverage&);
void BevKids(Beverage&);
void BevPrice(Beverage&);
void EnterDrink(vector<Beverage>&);
void OrderMenu(vector<Dish>, vector<Beverage>, vector<MealCart>&);
vector<Dish> BuildFMenu(int, vector<Dish>);
void AddMealModule(Bill&);
void DisplayMenuF(vector<Dish>, vector<MealCart>&);
vector<Dish> MealCourseFilter(vector<Dish>, int);
void Courses(vector<Dish>, vector<MealCart>&);
void UpdateMealCart(vector<MealCart>&, MealCart);
void DrinkMenu(vector<Beverage>, vector<MealCart>&);
vector<Beverage> BuildDMenu(vector<Beverage>, int);
void DisplayMenuD(vector<Beverage>, vector<MealCart>&);
bool ValidateAge(Beverage);
void ViewCart(vector<MealCart>&);
void EditCart(vector<MealCart>&);
void RemoveFromMealCart(vector<MealCart>&, int);
double CalculateTotal(vector<MealCart>);
void Checkout(vector<MealCart>, Bill&);
void PrintMenu(vector<Dish>);

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Text file.
// OUTPUT: Vector containing the Food menu.
// DESCRIPTION: Function reads in a .txt file and uses it to fill a vector of type Dish that the user may view and order from.
void FillFoodMenu(vector<Dish>& foodMenu)
{
	ifstream ifs;
	string filename = "Food.txt";
	/*cout << "Please enter a file name: ";
	cin >> filename;*/
	ifs.open(filename);
	if (!ifs.is_open())
	{
		cerr << "Error: Unable to open" << filename << endl;
		system("pause");
		exit(0);
	}
	int newCal;
	string newName;
	char newCourse, newDishTime;
	bool isVeg, isGlu, wuTang;
	double newPrice;
	Dish newDish;
	while (!ifs.eof())
	{
		getline(ifs, newName, '.');				//Dish names end with a period to allow for items with multiple words.
		if (newName.substr(0, 1) == "\n")		//This stops the function from reading in the endline and adding it to the front of the Dish name.
			newName.erase(0, 1);
		ifs >> newCourse >> newDishTime >> newCal >> isVeg >> isGlu >> wuTang >> newPrice;
		newDish.SetDish(newName, newCourse, newDishTime, newCal, isVeg, isGlu, wuTang, newPrice);
		foodMenu.push_back(newDish);
	}
	ifs.close();
	if (ifs.is_open())
	{
		cerr << "Error: Unable to close " << filename << endl;
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Data members for Dish by user.
// OUTPUT: Creation of Dish for menu.
// DESCRIPTION: Function allows administrator to manually enter items to the food menu.
void EnterFood(vector<Dish>& foodMenu)
{
	Dish newDish;
	string newName, validate = "N";
	int choice = -1;
	double newPrice = 0;

	cout << "Enter the dish name: ";
	getline(cin, newName);
	newDish.SetName(newName);
	FCourse(newDish);			//Function calls that will handle the users input for each of the data members for Dish.
	FTime(newDish);
	FCal(newDish);
	FVeg(newDish);
	FGlu(newDish);
	FKids(newDish);
	FPrice(newDish);
	while (toupper(validate[0]) != 'Y')
	{
		cout << "New dish to be added to Menu" << endl;
		newDish.PrintDish();
		cout << "Is this information correct? ";
		cin >> validate;
		if (toupper(validate[0]) == 'Y')
		{
			foodMenu.push_back(newDish);
			break;
		}
		if (toupper(validate[0]) == 'N')
		{
			cout << "What would you like to change?" << endl;
			cout << "1. Name" << endl;
			cout << "2. Course" << endl;
			cout << "3. Menu type" << endl;
			cout << "4. Calories" << endl;
			cout << "5. Vegetarian" << endl;
			cout << "6. Gluten" << endl;
			cout << "7. Kids" << endl;
			cout << "8. Price" << endl;
			cout << "9. Finish changes" << endl;
			while (choice == -1)
			{
				cin >> choice;
				if (choice == -1)
				{
					cout << "Enter the dish name: ";
					getline(cin, newName);
					newDish.SetName(newName);
					break;
				}
				else if (choice == 2)
					newDish.SetName(newName);
				else if (choice == 3)
					FCourse(newDish);
				else if (choice == 4)
					FTime(newDish);
				else if (choice == 5)
					FVeg(newDish);
				else if (choice == 6)
					FGlu(newDish);
				else if (choice == 7)
					FKids(newDish);
				else if (choice == 8)
					FPrice(newDish);
				else if (choice == 9)
					choice = -1;
				else
					cerr << "Error. Please enter a valid choice" << endl;
			}
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Text file.
// OUTPUT: Filled out Drink menu.
// DESCRIPTION: Function reads in .txt file and populates the drink menu with it.
void FillDrinkMenu(vector<Beverage>& drinkMenu)
{
	ifstream ifs;
	string filename = "Drinks.txt";
	/*cout << "Please enter a file name: ";
	cin >> filename;*/
	ifs.open(filename);
	if (!ifs.is_open())
	{
		cerr << "Error: Unable to open" << filename << endl;
		system("pause");
		exit(0);
	}
	int newCal = 0;
	string newName;
	bool wuTang, isBooze, isHot, isBubbly, wakeUp;
	double newABV, newPrice;
	Beverage newDrink;
	while (!ifs.eof())
	{
		getline(ifs, newName, '.');
		if (newName.substr(0, 1) == "\n")
			newName.erase(0, 1);
		ifs >> isBooze >> newABV >> isHot >> isBubbly >> wakeUp >> wuTang >> newPrice;
		newDrink.SetBeverage(newName, isBooze, newABV, isHot, isBubbly, wakeUp, wuTang, newPrice);
		drinkMenu.push_back(newDrink);
	}
	ifs.close();
	if (ifs.is_open())
	{
		cerr << "Error: Unable to close " << filename << endl;
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: User input for private data members.
// OUTPUT: Beverage added to drink menu.
// DESCRIPTION: Function allows admin to manually enter items to be added to the drink menu.
void EnterDrink(vector<Beverage>& drinkMenu)
{
	Beverage newDrink;
	string newName, validate = "N";
	int choice = -1;
	cout << "Enter the drink name: ";
	getline(cin, newName);
	newDrink.SetBevName(newName);
	BevAlcohol(newDrink);
	if (newDrink.GetAlcohol() == true)		//If the drink is alcoholic, then we prompt the admin to enter the ABV.
		BevABV(newDrink);
	else
		newDrink.SetABV(0);					//Otherwise, the ABV will be manually set to 0.
	BevHot(newDrink);
	BevBubbly(newDrink);
	BevCaffeine(newDrink);
	BevKids(newDrink);
	BevPrice(newDrink);
	while (toupper(validate[0]) != 'Y')
	{
		cout << "New dish to be added to Menu" << endl;
		newDrink.PrintBev();
		cout << "Is this information correct? ";
		cin >> validate;
		if (toupper(validate[0]) == 'Y')
		{
			drinkMenu.push_back(newDrink);
		}
		if (toupper(validate[0]) == 'N')
		{
			cout << "What would you like to change?" << endl;
			cout << "1. Name" << endl;
			cout << "2. Alcohol" << endl;
			cout << "3. ABV" << endl;
			cout << "4. Hot/Cold" << endl;
			cout << "5. Carbonated" << endl;
			cout << "6. Caffeine" << endl;
			cout << "7. Kids" << endl;
			cout << "8. Price" << endl;
			cout << "8. Finish changes" << endl;
			while (choice == -1)
			{
				cin >> choice;
				if (choice == -1)
				{
					cout << "Enter the drink name: ";
					getline(cin, newName);
					newDrink.SetBevName(newName);
					break;
				}
				else if (choice == 2)
					BevAlcohol(newDrink);
				else if (choice == 3)
					BevABV(newDrink);
				else if (choice == 4)
					BevHot(newDrink);
				else if (choice == 5)
					BevBubbly(newDrink);
				else if (choice == 6)
					BevCaffeine(newDrink);
				else if (choice == 7)
					BevKids(newDrink);
				else if (choice == 8)
					BevPrice(newDrink);
				else if (choice == 8)
					choice = -1;
				else
					cerr << "Error. Please enter a valid choice" << endl;
			}
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Course.
// OUTPUT: None.
// DESCRIPTION: Function allows admin to enter the course for the Dish.
void FCourse(Dish& newDish)
{
	string getCourse = "N";
	while (toupper(getCourse[0]) == 'N')
	{
		cout << "Enter the course (Appetizer, Entree, Side, Dessert): ";
		cin >> getCourse;
		if (toupper(getCourse[0]) == 'A')
			newDish.SetCourse('A');
		else if (toupper(getCourse[0]) == 'E')
			newDish.SetCourse('E');
		else if (toupper(getCourse[0]) == 'S')
			newDish.SetCourse('S');
		else if (toupper(getCourse[0]) == 'D')
			newDish.SetCourse('D');
		else
		{
			cerr << "Error: Please enter a valid course option: ";
			getCourse = "N";
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Meal time.
// OUTPUT: None.
// DESCRIPTION: Function allows admin to enter the meal time for the Dish.
void FTime(Dish& newDish)
{
	string dishTime = "N";
	while (toupper(dishTime[0]) == 'N')
	{
		cout << "Enter the meal time (Breakfast, Lunch, Dinner): ";
		cin >> dishTime;
		if (toupper(dishTime[0]) == 'B')
			newDish.SetDT('B');
		else if (toupper(dishTime[0]) == 'L')
			newDish.SetDT('L');
		else if (toupper(dishTime[0]) == 'D')
			newDish.SetDT('D');
		else
		{
			cerr << "Error. Please enter a valid meal time: ";
			dishTime = "N";
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Calories.
// OUTPUT: None.
// DESCRIPTION: Function allows admin to manually enter the calories for the item.
void FCal(Dish& newDish)
{
	int newCal = -1;
	while (newCal <= 0)
	{
		cout << "Enter calories: ";
		cin >> newCal;
		if (newCal > 0)
			newDish.SetCalories(newCal);
		else
			cerr << "Error. Please enter a valid calorie count (cannot be less than or equal to 0): ";
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Vegetarian.
// OUTPUT: None.
// DESCRIPTION: Function allows the admin to manually enter whether or not the Dish is vegetarian.
void FVeg(Dish& newDish)
{
	int isVeg = -1;
	while (isVeg == -1)
	{
		cout << "Vegetarian? (1 = Yes, 0 = No): ";
		cin >> isVeg;
		if (isVeg == 1)
			newDish.SetVeg(true);
		else if (isVeg == 0)
			newDish.SetVeg(false);
		else
		{
			cerr << "Error. Invalid input. Vegetarian? ";
			isVeg = -1;
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Gluten.
// OUTPUT: None.
// DESCRIPTION: Function allows the admin to manually enter whether or not the Dish contains gluten.
void FGlu(Dish& newDish)
{
	int isGlu = -1;
	while (isGlu == -1)
	{
		cout << "Contains gluten? (1 = Yes, 0 = No): ";
		cin >> isGlu;
		if (isGlu == 1)
			newDish.SetGlu(true);
		else if (isGlu == 0)
			newDish.SetGlu(false);
		else
		{
			cerr << "Error. Invalid input. Contains gluten? ";
			isGlu = -1;
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Kids.
// OUTPUT: None.
// DESCRIPTION: Function allows the admin to manually enter whether or not the Dish is a Kids item.
void FKids(Dish& newDish)
{
	int wuTang = -1;
	while (wuTang == -1)
	{
		cout << "Kids meal? (1 = Yes, 0 = No): ";
		cin >> wuTang;
		if (wuTang == 1)
			newDish.SetGlu(true);
		else if (wuTang == 0)
			newDish.SetGlu(false);
		else
		{
			cerr << "Error. Invalid input." << endl;
			wuTang = -1;
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Price.
// OUTPUT: None.
// DESCRIPTION: Function allows the admin to manually enter the price of the Dish.
void FPrice(Dish& newDish)
{
	double newPrice = -1;
	while (newPrice >= 0)
	cout << "Enter price: ";
	cin >> newPrice;
	if (newPrice < 0)
		cerr << "Error. Price cannot be below $0.00" << endl;
	else
		newDish.SetPrice(newPrice);

}


// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Alcohol.
// OUTPUT: None.
// DESCRIPTION: Function allows the admin to manually enter whether or not the Beverage is alcoholic.
void BevAlcohol(Beverage& newDrink)
{
	int isBooze = -1;
	while (isBooze == -1)
	{
		cout << "Alcoholic drink? (1 = Yes, 0 = No)";
		cin >> isBooze;
		if (isBooze == 1)
			newDrink.SetAlcohol(true);
		else if (isBooze == 0)
			newDrink.SetAlcohol(false);
		else
		{
			cerr << "Error. Invalid input." << endl;
			isBooze = -1;
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Alcohol by Volume.
// OUTPUT: None.
// DESCRIPTION: Function allows the admin to manually enter the ABV for the drink (0 if non-alcholic).
void BevABV(Beverage& newDrink)
{
	double newABV = -1.0;
	while (newABV > 0)
	{
		cout << "Enter ABV (Alcohol By Volume) for drink: ";
		cin >> newABV;
		if (newABV > 0)					//If admin enters that the Beverage contains no alcohol.
		{
			newDrink.SetABV(newABV);
			newDrink.SetAlcohol(true);	//Not only to we set the ABV to 0, but also 
		}
		else
			cerr << "Error. If drink is alcoholic it must have an ABV greater than 0%." << endl;
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Hot.
// OUTPUT: None.
// DESCRIPTION: Function allows user to enter whether or not the drink is hot or not.
void BevHot(Beverage& newDrink)
{
	int newHot = -1;
	while (newHot == -1)
	{
		cout << "Is the beverage hot? (1 = Yes, 0 = No): ";
		cin >> newHot;
		if (newHot == 1)
			newDrink.SetHot(true);
		else if (newHot == 0)
			newDrink.SetHot(false);
		else
		{
			cerr << "Error. Invalid input";
			newHot = -1;
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Carbonated.
// OUTPUT: None.
// DESCRIPTION: Function allows admin to enter whether or not the drink is carbonated or not.
void BevBubbly(Beverage& newDrink)
{
	int isBubbly = -1;
	while (isBubbly == -1)
	{
		cout << "Is the drink carbonated? (1 = Yes, 0 = No): ";
		cin >> isBubbly;
		if (isBubbly == 1)
			newDrink.SetCarb(true);
		else if (isBubbly == 0)
			newDrink.SetCarb(false);
		else
		{
			cerr << "Error. Invalid input." << endl;
			isBubbly = -1;
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Caffeine.
// OUTPUT: None.
// DESCRIPTION: Function allows admin to enter whether or not the Beverage contains caffeine.
void BevCaffeine(Beverage& newDrink)
{
	int wakeUp = -1;
	while (wakeUp == -1)
	{
		cout << "Is the drink contain caffeine? (1 = Yes, 0 = No): ";
		cin >> wakeUp;
		if (wakeUp == 1)
			newDrink.SetCaffeine(true);
		else if (wakeUp == 0)
			newDrink.SetCaffeine(false);
		else
		{
			cerr << "Error. Invalid input" << endl;
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void BevKids(Beverage& newDrink)
{
	int wuTang = -1;
	while (wuTang == -1)
	{
		cout << "Is the drink a kids item? (1 = Yes, 0 = No): ";
		cin >> wuTang;
		if (wuTang == 1)
			newDrink.SetKids(true);
		else if (wuTang == 0)
			newDrink.SetKids(false);
		else
		{
			cerr << "Error. Invalid input." << endl;
			wuTang = -1;
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: Price.
// OUTPUT: None.
// DESCRIPTION: Function allows admin to enter the price for the Beverage.
void BevPrice(Beverage& newDrink)
{
	double newPrice = -1;
	while (newPrice < 0)
	{
		cout << "Enter drink price: ";
		cin >> newPrice;
		if (newPrice >= 0)
			newDrink.SetPrice(newPrice);
		else
			cerr << "Error. Invalid input" << endl;
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-11-20
// INPUT: Bill and user's input.
// OUTPUT: The total bill for food and drink back to the main program.
// DESCRIPTION: This is the main function call that will bring the user into the AddMeal module and allow them to fully interact with the menus and their cart.
void AddMealModule(Bill& littleBill)
{
	vector<Dish> foodMenu;				//Declaring vector of type Dish for the food menu.
	vector<Beverage> drinkMenu;			//Function declaration of type Beverage for the drinks menu.
	vector<MealCart> cart;				//Function declaration of type MealCart for the user's cart.
	FillFoodMenu(foodMenu);				//Function call that will populate the food menu with the Food.txt file.
	FillDrinkMenu(drinkMenu);			//Function call that will populate the drink menu with the Drinks.txt file.
	int choice = -1;
	while (choice != 3)					//While loop that will iterate until the user chooses to check out.
	{
		cout << endl << setw(37) << right << "Add Meal to Flight/Hotel" << endl;
		cout << "1. Add item(s)" << endl;
		cout << "2. View/edit Cart" << endl;
		cout << "3. Checkout" << endl;
		cout << "Please select an option: ";
		cin >> choice;
		if (choice == 1)
			OrderMenu(foodMenu, drinkMenu, cart);					//Function call that will allow the user to order food and drinks off the menus.
		else if (choice == 2)
			ViewCart(cart);											//Function call that will allow the user to view and edit their cart.
		else if (choice == 3)
			Checkout(cart, littleBill);								//Function call that will complete the user's order and return the total to the Bill class.
		else
			cerr << "Error. Please enter a valid option." << endl;
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: User's input.
// OUTPUT: Menu by meal time.
// DESCRIPTION: Function allows user to add food and drink items to their cart.
void OrderMenu(vector<Dish> foodMenu, vector<Beverage> drinkMenu, vector<MealCart>& cart)
{
	int choice = -1;
	cout << endl << setw(20) << right << right << "Menus" << endl;
	cout << "1. Breakfast" << endl;
	cout << "2. Lunch" << endl;
	cout << "3. Dinner" << endl;
	cout << "4. Drinks" << endl;
	cout << "0. Return" << endl;
	while (choice == -1)
	{
		cout << "Please select a Menu to order from: ";
		cin >> choice;
		if (choice == 1 || choice == 2 || choice == 3)
		{
			DisplayMenuF(BuildFMenu(choice, foodMenu), cart);		//Single function call that will allow the user to order food based on the selected meal time menu.
			break;													//This is done with the BuildFMenu that will filter the menu based on the menu selected.
		}
		if (choice == 4)
		{
			DrinkMenu(drinkMenu, cart);								//Function call for the drinks menu.
			break;
		}
		else if (choice == 0)
			break;
		else
		{
			cerr << "Error. Invalid selection." << endl;
			choice = -1;
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-10-20
// LAST MODIFIED: 12-10-20
// INPUT: User choice.
// OUTPUT: None.
// DESCRIPTION: Function filters the food menu based on the meal time menu selected by the user.
vector<Dish> BuildFMenu(int choice, vector<Dish> foodMenu)
{
	vector<Dish> fMenu;		//Function declaration for the filtered menu that will be returned to the DisplayMenuF() function.
	char c;					//Character c that will contain the meal time the user selected.
	if (choice == 1)		//Depending on the user's choice from OrderMenu(), we set c to that specific meal time.
		c = 'B';
	else if (choice == 2)
		c = 'L';
	else if (choice == 3)
		c = 'D';
	else
	{
		cerr << "Error. BuildFMenu() should have never been called." << endl;
		system("pause");
		exit(0);
	}
	for (int i = 0; i < foodMenu.size(); i++)		//For loop that iterates through each Dish in the food menu.
		if (foodMenu.at(i).GetDT() == c)			//If the Dish's meal time equals c
			fMenu.push_back(foodMenu.at(i));		//Then we push that Dish into the filtered menu.
	return fMenu;									//Return the vector of all of the menu items that match the users selection.
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-9-20
// INPUT: User selection.
// OUTPUT: Menu by course or kids menu.
// DESCRIPTION: Function allows user to choose which course menu they wish to order from the meal time they selected from OrderMenu().
void DisplayMenuF(vector<Dish> fMenu, vector<MealCart>& cart)
{
	int choice = -1;
	if (fMenu.at(0).GetDT() == 'B')											//If statement block that looks at the meal time of the first item in the fMenu vector.
		cout << endl << setw(20) << right << "Breakfast Menu" << endl;		//If it matches any of the 3 meal times, then clearly the filtered menu is of that meal time type.
	else if (fMenu.at(0).GetDT() == 'L')
		cout << endl << setw(20) << right << "Lunch Menu" << endl;
	else if (fMenu.at(0).GetDT() == 'D')
		cout << endl << setw(20) << right << "Dinner Menu" << endl;
	else
	{
		cerr << "Error. No Menu type was ever given for food." << endl;
		system("pause");
		exit(0);
	}
	cout << "1. Appetizers" << endl;
	cout << "2. Main Entrees" << endl;
	cout << "3. Sides" << endl;
	cout << "4. Dessert" << endl;
	cout << "5. Kids" << endl;
	cout << "0. Return" << endl;
	while (choice == -1)									//While loop that iterates until the user makes a valid selection.
	{
		cout << "Please select a section to order from: ";
		cin >> choice;
		if (choice < 5 && choice > 0)						//If the user chooses one of the course types (or kids menu).
		{
			Courses(MealCourseFilter(fMenu, choice), cart);		//Function call for Courses that will display all of the items in that course menu.
			return;												//This is done with MealCourseFilter that will further filter the menu by course type selected.
		}
		else if (choice == 0)								//If the user wants to return, simply return.
			return;
		else
		{
			cerr << "Error. Invalid choice." << endl;
			choice = -1;
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-10-20
// LAST MODIFIED: 12-10-20
// INPUT: User choice.
// OUTPUT: Dish vector filtered by course type.
// DESCRIPTION: Function further filters the fMenu by the user's selection for course type (or kids menu) and returns it to Courses().
vector<Dish> MealCourseFilter(vector<Dish> fMenu, int choice)
{
	vector<Dish> courseMenu;			//Declare a vector that will contain all of the Dish's by course type.
	char c;								//Char c will be set to whatever course the user selected.
	if (choice == 1)
		c = 'A';
	else if (choice == 2)
		c = 'E';
	else if (choice == 3)
		c = 'S';
	else if (choice == 4)
		c = 'D';
	else
	{
		cerr << "Error. MealCourseFilter() should have never been called." << endl;
		system("pause");
		exit(0);
	}
	for (int i = 0; i < fMenu.size(); i++)			//For loop that iterates through every item in the fMenu.
		if (fMenu.at(i).GetCourse() == c)			//If any of the fMenu Dish's match the course type selected by the user.
			courseMenu.push_back(fMenu.at(i));		//Add that item into the courseMenu.
	return courseMenu;								//Return courseMenu to Courses().

}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-9-20
// LAST MODIFIED: 12-13-20
// INPUT: User selection.
// OUTPUT: Add user's item selection to the cart.
// DESCRIPTION: Function displays to the user the specific menu they want to order from, and then allows them to add Dish items to their cart. 
void Courses(vector<Dish> courseMenu, vector<MealCart>& cart)
{
	MealCart toCart;							//Declare a variable of type MealCart that will contain the users selection that can be pushed back into the cart vector.
	int choice = -1;
	if (courseMenu.at(0).GetDT() == 'B')					//If statement block that will display the meal time the user selected.
		cout << endl << setw(20) << "Breakfast ";
	else if (courseMenu.at(0).GetDT() == 'L')
		cout << endl << setw(20) << "Lunch ";
	else if (courseMenu.at(0).GetDT() == 'D')
		cout << endl << setw(20) << "Dinner ";

	if (courseMenu.at(0).GetCourse() == 'A')				//If statement block that will display the course (or kids menu) the user selected.
		cout << "Appetizers" << endl;
	else if (courseMenu.at(0).GetCourse() == 'E')
		cout << "Entrees" << endl;
	else if (courseMenu.at(0).GetCourse() == 'S')
		cout << "Sides" << endl;
	else if (courseMenu.at(0).GetCourse() == 'D')
		cout << "Desserts" << endl;
	for (int i = 0; i < courseMenu.size(); i++)				//For loop that iterates through every item in the course menu.
	{
		cout << i + 1 << ". " << courseMenu.at(i).GetName() << " (Cal: " << courseMenu.at(i).GetCalories() << ")";		//Prints out in a numbered list each course item.
		if (courseMenu.at(i).GetGlu() == false)						//If the item is gluten-free, it displays a tag.
			cout << " (G)";
		if (courseMenu.at(i).GetVeg() == true)						//If the item is vegetarian, it displays a tag.
			cout << " (V)";
		cout << " $" << setprecision(2) << fixed << courseMenu.at(i).GetPrice() << endl;		//Displays the price of the item.
	}
	cout << "0. Return" << endl;
	cout << "*(G) denotes Gluten Free" << endl << "*(V) Denotes Vegetarian" << endl;
	if (courseMenu.at(0).GetCourse() == 'A')
		cout << "Order an appetizer by typing its number or type '0' to return: ";		//If block that asks the user to order an item based on which course (or kids item) was selected
	else if (courseMenu.at(0).GetCourse() == 'E')
		cout << "Order an entree by typing its number or type '0' to return: ";
	else if (courseMenu.at(0).GetCourse() == 'S')
		cout << "Order a side by typing its number or type '0' to return: ";
	else if (courseMenu.at(0).GetCourse() == 'D')
		cout << "Order a dessert by typing its number or type '0' to return: ";
	else if (courseMenu.at(0).GetKids() == true)
		cout << "Order a kids item by typing its number or type '0' to return: ";
	while (choice == -1)															//While loop that will run until user makes a valid selection.
	{
		cin >> choice;
		if (choice > 0 && choice < courseMenu.size() + 1)							//If user makes a valid order.
		{
			toCart.SetItem(courseMenu.at(choice - 1).GetName(), courseMenu.at(choice - 1).GetPrice(), 1);		//We set toCart's name and price to the user's selection.
			UpdateMealCart(cart, toCart);																		//Update the Meal cart with function call.
			cout << "Adding " << courseMenu.at(choice - 1).GetName() << " ($" << setprecision(2) << fixed << courseMenu.at(choice - 1).GetPrice() << ") to cart." << endl;
			break;																								//Validate that the item had been orderd and return to the main menu.
		}
		else if (choice == 0)
			break;
		else
		{
			cerr << "Error. Please enter a valid choice." << endl;
			choice = -1;
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-13-20
// LAST MODIFIED: 12-13-20
// INPUT: Cart and toCart
// OUTPUT: Either adds toCart to Cart, or updates the quantity of the pre-existing item into the cart.
// DESCRIPTION: Checks if the new MealCart item is a duplicate and either updates a pre-existing item's quantity or adds the new item to the cart.
void UpdateMealCart(vector<MealCart>& cart, MealCart toCart)
{
	bool duplicate = false;
	for (int i = 0; i < cart.size(); i++)							//For loop that iterates through every item in the cart.
		if (cart.at(i).GetItemName() == toCart.GetItemName())			//If that item's name matches the item name of what the user just ordered.
		{
			cart.at(i).SetQuantity(cart.at(i).GetQuantity() + 1);	//Update the quantity of that pre-existing item by 1.
			duplicate = true;										//Confirm the selected item is a duplicate.
		}
	if (duplicate == false)											//If the user's item is not a duplicate.
		cart.push_back(toCart);										//Push the new item into the cart vector.
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-10-20
// LAST MODIFIED: 12-11-20
// INPUT: User input.
// OUTPUT: Display drink menu by selection.
// DESCRIPTION: Function allows the user to view the drink menu based on their selection.
void DrinkMenu(vector<Beverage> drinkMenu, vector<MealCart>& cart)
{
	int choice = -1;
	cout << setw(20) << right << "Drink Menu" << endl;
	cout << "1. Soft Drinks" << endl;
	cout << "2. Alcoholic Drinks (21+)" << endl;
	cout << "0. Return" << endl;
	cout << "Please choose a drink menu, or press '0' to return: ";
	while (choice == -1)											//While loop that iterates until user makes a valid selection.
	{
		cin >> choice;
		if (choice == 1 || choice == 2)								//If the user's input was valid.
		{
			DisplayMenuD(BuildDMenu(drinkMenu, choice), cart);		//Display the user's selection by calling in BuildDMenu that filters the drink menu.
			break;
		}
		else if (choice == 0)
			return;
		else
		{
			cerr << "Error. Invalid selection." << endl;
			choice = -1;
		}
	}
}


// AUTHOR: Ethan Puschell
// CREATION DATE: 12-10-20
// LAST MODIFIED: 12-11-20
// INPUT: Users choice.
// OUTPUT: Filtered drink menu.
// DESCRIPTION: Function returns a filtered drink menu to DisplayDMenu().
vector<Beverage> BuildDMenu(vector<Beverage> drinkMenu,int choice)
{
	if (choice == 1 || choice == 2)
	{
		vector<Beverage> dMenu;						//Vector that will be returned containing the filtered drink menu.
		bool booze;											//Boolean variable that will contain the user's choice.
		if (choice == 1)									//Set booze to what the user selected from DrinkMenu().
			booze = false;
		else if (choice == 2)
			booze = true;
		else
		{
			cerr << "Error. BuildDMenu() should have never been called." << endl;
			exit(0);
		}
		for (int i = 0; i < drinkMenu.size(); i++)			//For loop that will iterate through every Beverage in the drink menu.
			if (drinkMenu.at(i).GetAlcohol() == booze)		//If the Beverage in the drink menu's alcohol content matches the user's selection.
				dMenu.push_back(drinkMenu.at(i));	//Add that Beverage to the dMenu.
		return dMenu;								//Return dMenu to DisplayDMenu().
	}
	else
	{
		cerr << "Error. BuildDMenu() should have never been called." << endl;
		system("pause");
		exit(0);
	}

}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-10-20
// LAST MODIFIED: 12-13-20
// INPUT: User's selection.
// OUTPUT: Added Beverage to cart.
// DESCRIPTION: Function allows user to order a drink based on the drink menu selected from DrinkMenu().
void DisplayMenuD(vector<Beverage> dMenu, vector<MealCart>& cart)
{
	int choice = -1;
	MealCart toCart;														//Variable of type MealCart that will contain the user's selection and be pushed back into the vector cart.
	if (dMenu.at(0).GetAlcohol() == false)									//If statement block that displays the menu type the user selected.
		cout << endl << setw(20) << right << "Soft drinks Menu" << endl;
	else if (dMenu.at(0).GetAlcohol() == true)
		cout << endl << setw(20) << right << "Alcoholic Drinks Menu" << endl;
	else
	{
		cerr << "Error. No Menu type was ever given for food." << endl;
		system("pause");
		exit(0);
	}
	for (int i = 0; i < dMenu.size(); i++)									//For loop that iterates through every item in the drink menu.
	{
		cout << i + 1 << ". " << dMenu.at(i).GetBevName();					//Prints out the name of the beverage.
		if (dMenu.at(i).GetAlcohol() == true)
			cout << " (" << dMenu.at(i).GetABV() << "%)";					//If alcoholic, prints out the ABV.
		else if (dMenu.at(i).GetAlcohol() == false)							//If non-alcoholic, prints out whether or not it is hot or caffienated.
		{
			if (dMenu.at(i).GetHot() == true)
				cout << " (H)";
			if (dMenu.at(i).GetCaffeine() == true)
				cout << " (C)";
		}
		cout << " $" << setprecision(2) << fixed << dMenu.at(i).GetPrice() << endl;			//Finally, prints out its price.
	}
	if (dMenu.at(0).GetAlcohol() == true)
		cout << "*(%) denotes ABV" << endl;
	else
		cout << "*(H) denotes hot" << endl << "*(C) denotes caffeine" << endl;				//If non alcoholic, notifies the user of what the tags mean.
	while (choice == -1)																	//While loop until user makes a valid selection.
	{
		cout << "Order a beverage by typing its number or type '0' to return: ";
		cin >> choice;
		if (choice > 0 && choice < dMenu.size() + 1 && ValidateAge(dMenu.at(choice - 1)) == true)		//If the user makes a valid selection and the ValidateAge() function returns true.
		{
			toCart.SetItem(dMenu.at(choice - 1).GetBevName(), dMenu.at(choice - 1).GetPrice(), 1);		//Set toCart to the Beverage the user chose.
			UpdateMealCart(cart, toCart);																//Update the Meal cart with function call.
			cout << "Adding " << dMenu.at(choice - 1).GetBevName() << " ($" << dMenu.at(choice - 1).GetPrice() << ") to cart." << endl;		//Confirm that the user's selection has been added to their cart.
			break;
		}
		else if (choice == 0)
			break;
		else
			choice = -1;
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-10-20
// LAST MODIFIED: 12-11-20
// INPUT: User's age.
// OUTPUT: Boolean.
// DESCRIPTION: Functions validates the user's age (if necessary).
bool ValidateAge(Beverage drink)
{
	int age;
	if (drink.GetAlcohol() == true)			//If the drink the user is attempting to order is alcoholic, we need to validate the users age.
	{
		cout << "Please enter your age: ";
		cin >> age;
		if (age < 21)						//We at the University of Michigan-Dearborn CECS do not condone the sale of alcohol to any minors.
		{
			cout << "Sorry, you are not old enough to order this drink." << endl;
			return false;
		}
		else
		{									//Otherwise, we allow the user to order the drink, but notify them that we will need further verification during the flight.
			cout << "Please present a Photo ID to the cabin crew when they deliver your drink for verification." << endl;
			return true;
		}
	}
	else
		return true;			//Else, if the drink is non-alcoholic, the function simply returns true.
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-9-20
// LAST MODIFIED: 12-11-20
// INPUT: User's selection.
// OUTPUT: None.
// DESCRIPTION: Let the user view their cart.
void ViewCart(vector<MealCart>& cart)
{
	if (cart.empty() == true)				//If the cart is empty, don't display anything.
		cout << "Cart is empty." << endl;
	else
	{
		double total = 0;					//Otherwise, we display the cart.
		int choice = -1;
		cout << endl << setw(20) << right << "Cart" << endl;
		for (int i = 0; i < cart.size(); i++)														//For loop that iterates through the cart and displays the item name and cost.
			cout << i + 1 << ". " << cart[i].GetItemName() << " (Qty: " << cart[i].GetQuantity() << ")  $" << cart[i].GetItemCost() << endl;
		cout << "Total: $" << setprecision(2) << fixed << CalculateTotal(cart) << endl << endl;		//Function call to display the total.
		cout << "Options" << endl;
		cout << "1. Remove items from cart" << endl;
		cout << "0. Return" << endl;
		while (choice == -1)							//While loop that runs until the user makes a valid selection.
		{
			cout << "Please select an option: ";
			cin >> choice;
			if (choice == 0)
				break;
			else if (choice == 1)
			{
				EditCart(cart);							//Function call to allow the user to edit their cart.
				break;
			}
			else
			{
				cerr << "Error. Invalid selection." << endl;
				choice = -1;
			}
		}

	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-11-20
// LAST MODIFIED: 12-13-20
// INPUT: User selection.
// OUTPUT: Updated cart.
// DESCRIPTION: Let the user edit their cart.
void EditCart(vector<MealCart>& cart)
{
	int choice = -1;
	while (choice == -1)									//While loop that iterates until the user makes a valid selection.
	{
		cout << "What would you like to remove from the cart (type 0 to cancel): ";
		cin >> choice;
		if (choice > 0 && choice < cart.size() + 1)			//If the selection was valid.
		{
			if (cart.at(choice - 1).GetQuantity() == 1)
				RemoveFromMealCart(cart, choice);
			else if (cart.at(choice - 1).GetQuantity() > 1)
			{
				int quantity;
				cout << "Please enter the quantity you would like to remove: ";
				cin >> quantity;
				if (cart.at(choice - 1).GetQuantity() == quantity || cart.at(choice - 1).GetQuantity() < quantity)
					RemoveFromMealCart(cart, choice);
				else if (cart.at(choice - 1).GetQuantity() > quantity)
				{
					cart.at(choice - 1).SetQuantity(cart.at(choice - 1).GetQuantity() - quantity);
					cout << "Removed " << quantity << " of " << cart.at(choice - 1).GetItemName() << " from the cart. New quantity: " << cart.at(choice - 1).GetQuantity() << endl;
					cout << "New total: $" << CalculateTotal(cart) << endl << endl;
				}
			}
		}
		else if (choice == 0)
			break;
		else
		{
			cerr << "Error. Invalid selection." << endl;
			choice = -1;
		}
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-13-20
// LAST MODIFIED: 12-13-20
// INPUT: Cart and choice.
// OUTPUT: Updated cart.
// DESCRIPTION: Function erases the user selected item from cart.
void RemoveFromMealCart(vector<MealCart>& cart, int choice)
{
	cout << "Removing " << cart.at(choice - 1).GetItemName() << " from the cart." << endl;
	cart.erase(cart.begin() + choice - 1);			//Remove the item from the user's cart.
	cout << "New total: $" << setprecision(2) << fixed << CalculateTotal(cart) << endl << endl;		//Display the new total to the user.
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-9-20
// LAST MODIFIED: 12-9-20
// INPUT: Cart.
// OUTPUT: Total.
// DESCRIPTION: Calculate the total in the cart.
double CalculateTotal(vector<MealCart> cart)
{
	if (cart.empty() == true)					//If the cart is empty, return 0.
		return 0;
	double total = 0;
	for (int i = 0; i < cart.size(); i++)									//For loop that iterates through every item in the cart.
		total += (cart.at(i).GetItemCost() * cart.at(i).GetQuantity());		//Add its quantity multiplied by the quantity of the item.
	return total;															//Return the total to the user.
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-9-20
// LAST MODIFIED: 12-9-20
// INPUT: Cart and bill.
// OUTPUT: Add food and drink total to Bill.
// DESCRIPTION: Adds the total from the food and drinks user ordered into the Bill class.
void Checkout(vector<MealCart> cart, Bill& littleBill)
{
	double total = CalculateTotal(cart);																//Calculate the total.
	if (total > 0)																						//If the user ordered food and drinks.
	{
		cout << "Completing your order. Thank you!" << endl;
		cout << "Adding $" << setprecision(2) << fixed << total << " to the account bill." << endl;
		littleBill.add(Item("food and drink", total));													//Add the Food and drink total to the Bill class.
	}
	else
		cout << "No food/drinks ordered, returning to Flight Menu." << endl;							//Otherwise, simply return to the Flight menu.
	system("pause");
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-9-20
// LAST MODIFIED: 12-9-20
// INPUT: Food menu vector.
// OUTPUT: Dishes in the vector.
// DESCRIPTION: Test function that printed out every Dish in the food menu.
void PrintMenu(vector<Dish> foodMenu)
{
	for (int i = 0; i < foodMenu.size(); i++)
		foodMenu.at(i).PrintDish();
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-9-20
// LAST MODIFIED: 12-9-20
// INPUT: Drink menu vector.
// OUTPUT: Beverages in the vector.
// DESCRIPTION: Test function prints out every Beverage in the drink menu.
void PrintDrinks(vector<Beverage> drinks)
{
	for (int i = 0; i < drinks.size(); i++)
		drinks.at(i).PrintBev();
}
