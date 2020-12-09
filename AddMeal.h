/*
*Author: Ethan Puschell
*Creation Date: 12-7-20
*Modification Date: 12-7-20
*Purpose: Class file for the AddMeal module of the program.
*/
#pragma once
#include "Account.h"
#include<iostream>
#include<fstream>
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
	//double price;
public:

	void SetDish(string newName, char newCourse, char newDishTime, int newCal, bool isVeg, bool isGlu, bool forKidz/*, double newPrice*/)
	{
		dishName = newName;
		course = newCourse;
		dishTime = newDishTime;
		calories = newCal;
		vegetarian = isVeg;
		gluten = isGlu;
		kids = forKidz;
		//price = newPrice;
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

	/*void SetPrice(double newPrice)
	{
		price = newPrice;
	}

	const double GetPrice() { return price; }*/
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
	//double price;

public:

	void SetBeverage(string newName, bool isBooze, double newABV, bool isHot, bool isBubbly, bool wakeUp, bool wuTang/*, double newPrice*/)
	{
		bevName = newName;
		alcohol = isBooze;
		abv = newABV;
		hot = isHot;
		carbonated = isBubbly;
		caffeine = wakeUp;
		kids = wuTang;
		//price = newPrice;
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

	void GetKids(bool wuTang)
	{
		kids = wuTang;
	}

	const bool SetKids() { return kids; }

	/*void SetPrice(double newPrice)
	{
		price = newPrice;
	}

	const double GetPrice() { return price; }*/
};

class Menu : public Dish, public Beverage
{
private:
	double price;
public:
	vector<Menu> FillMenu(ifstream &ifs)
	{
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


		vector<Menu> foodNDrinks;
	}
};

class Cart : public Dish, public Beverage
{
private:
	string item;
	double itemPrice;
public:
	/*void Add2Cart(vector<Dish> dishes, vector<Beverage> drinks)
	{
		for (int i = 0; i < 4; i++)
		{
			dishes[i].
		}
	}*/


};