#ifndef PETSTORE_H
#define PETSTORE_H

#include "pet.h"

#include <iostream>
using namespace std;

#define MAX_PETS 15

class PetStore{
	string name;
	int number;
	Pet pets[MAX_PETS];
	int numPets;
public:
	PetStore();
	PetStore(string, int);
	PetStore(const PetStore&);

	string getName();
	int getNumber();
	int getNumPets();

	void setName(string);
	void setNumber(int);

	void print();

	PetStore* operator+=(Pet&);


};

#endif