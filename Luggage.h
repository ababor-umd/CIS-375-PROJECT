#pragma once
#include <iostream>
using namespace std;

class Luggage {
private:
    int numBags;
    int bagWeight;
    int bagTotal = 0;
    int weightLimit = 50;
    double transportCost;

public:
    //Class Constructor
    Luggage();

    //Increments the number of bags being checked in by one.
    void setNumBags(int num);

    //Returns the number of bags checked in to the user.
    int getNumBags();

    //Setter function for bagWeight.
    void setBagWeight(int weight);

    //Setter function for bagTotal.
    void setBagTotal();

    //Returns the number of bags checked in to the user.
    int getBagTotal();

    //Getter function for bagWeight.
    int getBagWeight();

    //Checks if current luggage exceeds 50Ibs which is the preset limit.
    bool exceedsLimit();

    //Calculates the cost of transport based on the number of bags the user has checked in.
    void calculateCosts();

    //Getter function for transportCost.
    double getTotal();
};