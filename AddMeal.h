/*
*Author: Ethan Puschell
*Creation Date: 12-7-20
*Modification Date: 12-8-20
*Purpose: Class file for the AddMeal module of the program.
*/
#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#include "Bill.h"
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
public:
	void SetItem(string newiN, double newCost, int newQ)
	{
		itemName = newiN;
		itemCost = newCost;
		quantity = newQ;
	}

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
void DrinkMenu(vector<Beverage>, vector<MealCart>&);
vector<Beverage> BuildDMenu(vector<Beverage>, int);
void DisplayMenuD(vector<Beverage>, vector<MealCart>&);
bool ValidateAge(Beverage);
void ViewCart(vector<MealCart>&);
void EditCart(vector<MealCart>&);
double CalculateTotal(vector<MealCart>);
void Checkout(vector<MealCart>, Bill&);
void PrintMenu(vector<Dish>);

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
		getline(ifs, newName, '.');
		if (newName.substr(0, 1) == "\n")
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void EnterFood(vector<Dish>& foodMenu)
{
	Dish newDish;
	string newName, validate = "N";
	int choice = -1;
	double newPrice = 0;

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
		newDish.PrintDish();
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void EnterDrink(vector<Beverage>& drinkMenu)
{
	Beverage newDrink;
	string newName, validate = "N";
	int choice = -1;
	cout << "Enter the drink name: ";
	getline(cin, newName);
	newDrink.SetBevName(newName);
	BevAlcohol(newDrink);
	if (newDrink.GetAlcohol() == true)
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
// LAST MODIFIED: 12-11-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void AddMealModule(Bill& littleBill)
{
	vector<Dish> foodMenu;
	vector<Beverage> drinkMenu;
	vector<MealCart> cart;
	FillFoodMenu(foodMenu);
	FillDrinkMenu(drinkMenu);
	int choice = -1;
	while (choice != 3)
	{
		system("cls");
		cout << endl << setw(37) << right << "Add Meal to Flight/Hotel" << endl;
		cout << "1. Add item" << endl;
		cout << "2. View/edit Cart" << endl;
		cout << "3. Checkout" << endl;
		cout << "Please select an option: ";
		cin >> choice;
		if (choice == 1) {
			system("cls");
			OrderMenu(foodMenu, drinkMenu, cart);
		}
		else if (choice == 2) {
			system("cls");
			ViewCart(cart);
		}
		else if (choice == 3)
		{
			system("cls");
			Checkout(cart, littleBill);
			/*cout << "Completing your order. Thank you!" << endl;
			double total = CalculateTotal(cart);
			cout << "Adding $" << setprecision(2) << fixed << total << " to the account bill." << endl;*/
		}
		else
			cerr << "Error. Please enter a valid option." << endl;
	}
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-8-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
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
			system("cls");
			DisplayMenuF(BuildFMenu(choice, foodMenu), cart);
			break;
		}
		if (choice == 4)
		{
			system("cls");
			DrinkMenu(drinkMenu, cart);
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
vector<Dish> BuildFMenu(int choice, vector<Dish> foodMenu)
{
	vector<Dish> fMenu;
	char c;
	if (choice == 1)
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
	for (int i = 0; i < foodMenu.size(); i++)
		if (foodMenu.at(i).GetDT() == c)
			fMenu.push_back(foodMenu.at(i));
	return fMenu;
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-8-20
// LAST MODIFIED: 12-9-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void DisplayMenuF(vector<Dish> fMenu, vector<MealCart>& cart)
{
	int choice = -1;
	if (fMenu.at(0).GetDT() == 'B')
		cout << endl << setw(20) << right << "Breakfast Menu" << endl;
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

	while (choice == -1)
	{
		system("cls");
		cout << "1. Appetizers" << endl;
		cout << "2. Main Entrees" << endl;
		cout << "3. Sides" << endl;
		cout << "4. Dessert" << endl;
		cout << "5. Kids" << endl;
		cout << "0. Return" << endl;
		cout << "Please select a section to order from: ";
		cin >> choice;
		if (choice < 5 && choice > 0)
		{
			system("cls");
			Courses(MealCourseFilter(fMenu, choice), cart);
			return;
		}
		else if (choice == 0)
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
vector<Dish> MealCourseFilter(vector<Dish> fMenu, int choice)
{
	vector<Dish> courseMenu;
	char c;
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
	for (int i = 0; i < fMenu.size(); i++)
		if (fMenu.at(i).GetCourse() == c)
			courseMenu.push_back(fMenu.at(i));
	return courseMenu;

}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-9-20
// LAST MODIFIED: 12-11-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void Courses(vector<Dish> fMenu, vector<MealCart>& cart)
{
	MealCart toCart;
	int choice = -1;
	if (fMenu.at(0).GetDT() == 'B')
		cout << endl << setw(20) << "Breakfast ";
	else if (fMenu.at(0).GetDT() == 'L')
		cout << endl << setw(20) << "Lunch ";
	else if (fMenu.at(0).GetDT() == 'D')
		cout << endl << setw(20) << "Dinner ";

	if (fMenu.at(0).GetCourse() == 'A')
		cout << "Appetizers" << endl;
	else if (fMenu.at(0).GetCourse() == 'E')
		cout << "Entrees" << endl;
	else if (fMenu.at(0).GetCourse() == 'S')
		cout << "Sides" << endl;
	else if (fMenu.at(0).GetCourse() == 'D')
		cout << "Desserts" << endl;
	for (int i = 0; i < fMenu.size(); i++)
	{
		cout << i + 1 << ". " << fMenu.at(i).GetName();
		if (fMenu.at(i).GetGlu() == false)
			cout << " (G)";
		if (fMenu.at(i).GetVeg() == true)
			cout << " (V)";
		cout << setw(10) << right << "$" << setprecision(2) << fixed << fMenu.at(i).GetPrice() << endl;
	}
	cout << "0. Return" << endl;
	cout << "*(G) denotes Gluten Free" << endl << "*(V) Denotes Vegetarian" << endl;
	if (fMenu.at(0).GetCourse() == 'A')
		cout << "Order an appetizer by typing its number or type '0' to return: ";
	else if (fMenu.at(0).GetCourse() == 'E')
		cout << "Order an entree by typing its number or type '0' to return: ";
	else if (fMenu.at(0).GetCourse() == 'S')
		cout << "Order a side by typing its number or type '0' to return: ";
	else if (fMenu.at(0).GetCourse() == 'D')
		cout << "Order a dessert by typing its number or type '0' to return: ";
	while (choice == -1)
	{
		cin >> choice;
		if (choice > 0 && choice < fMenu.size() + 1)
		{
			toCart.SetItem(fMenu.at(choice - 1).GetName(), fMenu.at(choice - 1).GetPrice(), 1);
			cart.push_back(toCart);
			cout << "Adding " << fMenu.at(choice - 1).GetName() << " ($" << setprecision(2) << fixed << fMenu.at(choice - 1).GetPrice() << ") to cart." << endl;
			break;
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
// CREATION DATE: 12-10-20
// LAST MODIFIED: 12-11-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void DrinkMenu(vector<Beverage> drinkMenu, vector<MealCart>& cart)
{
	int choice = -1;

	while (choice == -1)
	{
		system("cls");
		cout << setw(20) << right << "Drink Menu" << endl;
		cout << "1. Soft Drinks" << endl;
		cout << "2. Alcoholic Drinks (21+)" << endl;
		cout << "0. Return" << endl;
		cout << "Please choose a drink menu, or press '0' to return: ";
		cin >> choice;
		if (choice == 1 || choice == 2)
		{
			system("cls");
			DisplayMenuD(BuildDMenu(drinkMenu, choice), cart);
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
vector<Beverage> BuildDMenu(vector<Beverage> drinkMenu,int choice)
{
	if (choice == 1 || choice == 2)
	{
		vector<Beverage> filteredMenu;
		bool booze;
		if (choice == 1)
			booze = false;
		else if (choice == 2)
			booze = true;
		else
		{
			cerr << "Error. BuildDMenu() should have never been called." << endl;
			exit(0);
		}
		for (int i = 0; i < drinkMenu.size(); i++)
			if (drinkMenu.at(i).GetAlcohol() == booze)
				filteredMenu.push_back(drinkMenu.at(i));
		return filteredMenu;
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
// LAST MODIFIED: 12-11-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void DisplayMenuD(vector<Beverage> dMenu, vector<MealCart>& cart)
{
	int choice = -1;
	MealCart toCart;
	if (dMenu.at(0).GetAlcohol() == false)
		cout << setw(20) << right << "Soft drinks Menu" << endl;
	else if (dMenu.at(0).GetAlcohol() == true)
		cout << setw(20) << right << "Alcoholic Drinks Menu" << endl;
	else
	{
		cerr << "Error. No Menu type was ever given for food." << endl;
		system("pause");
		exit(0);
	}
	for (int i = 0; i < dMenu.size(); i++)
		cout << i + 1 << ". " << dMenu.at(i).GetBevName() << "\t$" << setprecision(2) << fixed << dMenu.at(i).GetPrice() << endl;
	while (choice == -1)
	{
		cout << "Order a beverage by typing its number or type '0' to return: ";
		cin >> choice;
		if (choice > 0 && choice < dMenu.size() + 1 && ValidateAge(dMenu.at(choice - 1)) == true)
		{
			toCart.SetItem(dMenu.at(choice - 1).GetBevName(), dMenu.at(choice - 1).GetPrice(), 1);
			cart.push_back(toCart);
			cout << "Adding " << dMenu.at(choice - 1).GetBevName() << " ($" << dMenu.at(choice - 1).GetPrice() << ") to cart." << endl;
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
// INPUT: 
// OUTPUT: 
// DESCRIPTION:
bool ValidateAge(Beverage drink)
{
	int age;
	if (drink.GetAlcohol() == true)
	{
		cout << "Please enter your age: ";
		cin >> age;
		if (age < 21)
		{
			cout << "Sorry, you are not old enough to order this drink." << endl;
			return false;
		}
		else
		{
			cout << "Success! Please present a Photo ID to the cabin crew when they deliver your drink for verification." << endl;
			return true;
		}
	}
	else
		return true;
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-9-20
// LAST MODIFIED: 12-11-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void ViewCart(vector<MealCart>& cart)
{
	if (cart.empty() == true)
		cout << "Cart is empty." << endl;
	else
	{
		double total = 0;
		int choice = -1;

		while(choice == -1)
		{
			system("cls");
			cout << endl << setw(20) << right << "Cart" << endl;
			cout << "Name" << setw(25) << right << "Quantity" << setw(20) << right << "Cost" << endl;
			for (int i = 0; i < cart.size(); i++)
				cout << i + 1 << ". " << cart[i].GetItemName() << setw(10) << right << cart[i].GetQuantity() << setw(20) << right << "$" << cart[i].GetItemCost() << endl;
			cout << "Total: $" << setprecision(2) << fixed << CalculateTotal(cart) << endl << endl;
			cout << "Options" << endl;
			cout << "1. Remove items from cart" << endl;
			cout << "0. Return" << endl;
			cout << "Please select an option: ";
			cin >> choice;
			if (choice == 0)
				break;
			else if (choice == 1)
			{
				//system("cls");
				EditCart(cart);
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
// LAST MODIFIED: 12-11-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void EditCart(vector<MealCart>& cart)
{
	int choice = -1;
	while (choice == -1)
	{
		cout << "What would you like to remove from the cart (type 0 to cancel): ";
		cin >> choice;
		if (choice > 0 && choice < cart.size() + 1)
		{
			cout << "Removing " << cart.at(choice - 1).GetItemName() << " from the cart." << endl;
			cart.erase (cart.begin() + choice - 1);
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
// CREATION DATE: 12-9-20
// LAST MODIFIED: 12-9-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
double CalculateTotal(vector<MealCart> cart)
{
	if (cart.empty() == true)
		return 0;
	double total = 0;
	for (int i = 0; i < cart.size(); i++)
		total += (cart.at(i).GetItemCost() * cart.at(i).GetQuantity());
	return total;
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-9-20
// LAST MODIFIED: 12-9-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void Checkout(vector<MealCart> cart, Bill& littleBill)
{
	cout << "Completing your order. Thank you!" << endl;
	double total = CalculateTotal(cart);
	cout << "Adding $" << setprecision(2) << fixed << total << " to the account bill." << endl;
	littleBill.add(Item("food and drink", total));
	littleBill.printToFile("\tFOOD AND DRINKS: $" + to_string(total));
	system("pause");
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-9-20
// LAST MODIFIED: 12-9-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void PrintMenu(vector<Dish> cart)
{
	for (int i = 0; i < cart.size(); i++)
		cart.at(i).PrintDish();
}

// AUTHOR: Ethan Puschell
// CREATION DATE: 12-9-20
// LAST MODIFIED: 12-9-20
// INPUT: 
// OUTPUT: 
// DESCRIPTION: 
void PrintDrinks(vector<Beverage> drinks)
{
	for (int i = 0; i < drinks.size(); i++)
		drinks.at(i).PrintBev();
}
