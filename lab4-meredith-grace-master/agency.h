#ifndef AGENCY_H
#define AGENCY_H

#include <iostream>

#define MAX_CAR 70

#include "car.h"
using namespace std;

class Agency{
	string name;
	int numCars;
	Car fleet[MAX_CAR];
public:
	Agency();
	Agency(string);
	Agency(const Agency&);

	string getName();

	void setName(string);

	int getNumCars();

	Car* getFleet();
 
	void print();

	void addCar(Car newCar);
};

#endif