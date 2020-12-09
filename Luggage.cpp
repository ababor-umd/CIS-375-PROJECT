#include <iostream>
using namespace std;
#include "Luggage.h"

Luggage :: Luggage() {
    numBags = 0;
    bagWeight = 0;
    bagTotal = 0;
    transportCost = 0.0;
}

void Luggage :: setNumBags(int num) {
    numBags = num;
}

int Luggage :: getNumBags() { return numBags; }

void Luggage :: setBagWeight(int weight) {
    bagWeight = weight;
}

void Luggage :: setBagTotal() {
    bagTotal = bagTotal + 1;
}

int Luggage :: getBagTotal() { return bagTotal; }

int Luggage :: getBagWeight() { return bagWeight; }

bool Luggage :: exceedsLimit() {
    if (bagWeight > weightLimit) {
        printf("Baggage weight exceeds 50Ibs limit. Please enter a valid weight:");
        return true;
    }
    else {
        return false;
    }
}

void Luggage :: calculateCosts() {
    if (bagTotal == 1) {
        transportCost = 30.0;
    }
    else if (bagTotal == 2) {
        transportCost = 70.0;
    }
    else if (bagTotal > 2) {
        transportCost = 70.0;
        bagTotal = bagTotal - 2;
        for (int i = 0; i < bagTotal; i++) {
            transportCost += 150.0;
        }
    }
}

double Luggage :: getTotal() { return transportCost; }