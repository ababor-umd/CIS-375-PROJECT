#pragma once
#include "FlightRecommendation.h"
#include "Bill.h"
class Trip : public FlightRecommendation {
private:
	Bill* bill;
	void OneWay();
	void RoundTrip();
public:
	Trip(Bill&);
	void TripPrompt();
};