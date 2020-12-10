#include<iostream>
#include<vector>
//#include "Account.h"
#include "AddMeal.h"
using namespace std;

int main()
{
	//Dish testDish;
	//Beverage testDrink;
	vector<Dish> testMenu;
	vector<Beverage> testBev;
	vector<MealCart> testCart;
	FillFoodMenu(testMenu);
	//PrintMenu(testMenu);
	FillDrinkMenu(testBev);
	//PrintDrinks(testBev);
	BrowseMenu(testMenu, testBev);
	system("pause");
	return 0;
}