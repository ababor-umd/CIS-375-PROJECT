/*
*Author: Ethan Puschell
*Creation Date: 12-7-20
*Modification Date: 12-8-20
*Purpose: Class file for the AddMeal module of the program.
*/
#pragma once
#include "Account.h"
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
	void PrintDish()
	{
		cout << "Dish name: " << dishName << endl << "Course: ";
		if (course == 'A')
			cout << "Appetizer" << endl;
		else if (course == 'S')
			cout << "Side" << endl;
		else if (course == 'E')
			cout << "Entree" << endl;
		else if (course == 'D')
			cout << "Dessert" << endl;
		else
		{
			cerr << "Error: Invalid course" << endl;
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
			exit(0);
		}
		cout << "Price: $" << setprecision(2) << fixed << price << endl;

	}
};

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

class MealCart
{
private:
	string itemName;
	int quantity;
	double itemCost;
	double total = 0;
public:
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

	void CalculateTotal(vector<MealCart> cart)
	{
		double newTotal = 0;
		for (int i = 0; i < cart.size(); i++)
			total += (cart[i].itemCost * cart[i].quantity);
		total = newTotal;
	}

	const double GetTotal() { return total; }

	void SetQuantity(int newQ)
	{
		quantity = newQ;
	}

	const int GetQuantity() { return quantity; }

	void PrintCart(vector<MealCart> cart)
	{
		cout << "Name \t Quantity \t Cost" << endl;
		for (int i = 0; i < cart.size(); i++)
			cout << cart[i].itemName << "\t" << cart[i].quantity << "\t" << cart[i].itemCost << endl;
		CalculateTotal(cart);
		cout << "Total: " << total << endl;
	}
};

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void FillFoodMenu(vector<Dish> foodMenu)
{
	ifstream ifs;
	string filename;
	cout << "Please enter a file name: ";
	cin >> filename;
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
	while (!ifs.eof())
	{
		ifs >> newName >> newCourse >> newDishTime >> newCal >> isVeg >> isGlu >> wuTang;
		foodMenu.push_back.SetDish(newName, newCourse, newDishTime, newCal, isVeg, isGlu, wuTang, newPrice);
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void FillDrinkMenu(vector<Beverage> drinkMenu)
{
	ifstream ifs;
	string filename;
	cout << "Please enter a file name: ";
	cin >> filename;
	ifs.open(filename);
	if (!ifs.is_open())
	{
		cerr << "Error: Unable to open" << filename << endl;
		system("pause");
		exit(0);
	}
	int newCal;
	string newName;
	bool wuTang, isBooze, isHot, isBubbly, wakeUp;
	double newABV, newPrice;
	while (!ifs.eof())
	{
		ifs >> newName >> isBooze >> newABV >> isHot >> isBubbly >> wakeUp >> wuTang;
		drinkMenu.push_back.SetBeverage(newName, isBooze, newABV, isHot, isBubbly, wakeUp, wuTang, newPrice);
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void EnterFood(vector<Dish> foodMenu)
{
	Dish newDish;
	string newName, validate = "N";
	int choice = -1;
	double newPrice;

	cout << "Enter the dish name: ";
	getline(cin, newName);
	newDish.SetName(newName);
	FCourse(newDish);
	FTime(newDish);
	FCal(newDish);
	FVeg(newDish);
	FGlu(newDish);
	FKids(newDish);
	FPrice(newDish);
	while (toupper(validate[0]) != 'Y')
	{
		cout << "New dish to be added to Menu" << endl;
		newDish.PrintDish;
		cout << "Is this information correct? ";
		cin >> validate;
		if (toupper(validate[0]) == 'Y')
		{
			foodMenu.push_back(newDish);
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void EnterDrink(vector<Beverage> drinkMenu)
{
	Beverage newDrink;
	string newName, validate = "N";
	int choice = -1;
	cout << "Enter the drink name: ";
	getline(cin, newName);
	newDrink.SetBevName(newName);
	BevAlcohol(newDrink);
	if (newDrink.GetAlcohol == true)
		BevABV(newDrink);
	else
		newDrink.SetABV(0);
	BevHot(newDrink);
	BevBubbly(newDrink);
	BevCaffeine(newDrink);
	BevKids(newDrink);
	BevPrice(newDrink);
	while (toupper(validate[0]) != 'Y')
	{
		cout << "New dish to be added to Menu" << endl;
		newDrink.PrintBev;
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void BevABV(Beverage& newDrink)
{
	double newABV = -1.0;
	cout << "Enter ABV (Alcohol By Volume) for drink: ";
	while (newABV > 0)
	{
		cin >> newABV;
		if (newABV > 0)
		{
			newDrink.SetABV(newABV);
			newDrink.SetAlcohol(true);
		}
		else
			cerr << "Error. If the drink is alcoholic there must be an ABV." << endl;
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
// LAST MODIFIED: 12-8-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void BrowseMenu()
{
	vector<Dish> foodMenu;
	vector<Beverage> drinkMenu;
	vector<MealCart> cart;
	int choice = -1;
	while (choice == -1)
	{
		cout << "Add Meal to Flight/Hotel" << endl;
		cout << "1. Add item" << endl;
		cout << "2. View Cart" << endl;
		cout << "3. Update Cart" << endl;
		cout << "4. Checkout" << endl;
		cin >> choice;
		if (choice == 1)
			OrderMenu(foodMenu, drinkMenu, cart);
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
/*void OrderMenu(vector<Dish> foodMenu, vector<Beverage> drinkMenu, vector<MealCart> cart)
{
	int choice = -1;
	cout << setw(20) << right << "Menu" << endl;
	cout << "1. Food Menu" << endl;
	cout << "2. Drink Menu" << endl;
	cout << "Please select a Menu to order from: ";
	cin >> choice;
	if (choice = 1)

}*/

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void OrderMenu(vector<Dish> foodMenu, vector<Beverage> drinkMenu, vector<MealCart> cart)
{
	int choice = -1;
	cout << setw(20) << right << "Food Menus" << endl;
	cout << "1. Breakfast" << endl;
	cout << "2. Lunch" << endl;
	cout << "3. Dinner" << endl;
	cout << "4. Drinks" << endl;
	while (choice == -1)
	{
		cout << "Please select a Menu to order from: ";
		cin >> choice;
		if (choice == 1)
			DisplayBreakfastMenu(foodMenu);
		//if (choice == 2)
			//DisplayLunchMenu(foodMenu, drinkMenu);
	}
}

void DisplayBreakfastMenu(vector<Dish> foodMenu, vector<Beverage> drinkMenu, vector<MealCart> cart)
{
	int choice;
	cout << "Breakfast Menu" << endl;
	cout << "1. Appetizers" << endl;
	cout << "2. Main Entrees" << endl;
	cout << "3. Sides" << endl;
	cout << "4. Dessert" << endl;
	cout << "5. Drinks " << endl;
	cout << "Please select a section to order from: ";
	cin >> choice;
	if (choice == 1)
	{
		int num = 0;
		for (int i = 0; i < foodMenu.size(); i++)
		{
			if (foodMenu[i].GetDT == 'B' && foodMenu[i].GetCourse == 'A')
				//cout << num << 
		}
	}
/*	vector<Dish> breakfastMenu;
	for (int i = 0; i < foodMenu.size(); i++)
	{
		if (foodMenu[i].GetDT == 'B')
		cout << i + 1 << ". " << foodMenu[i].GetName << "       " << foodMenu[i].GetPrice;
	}*/
}
