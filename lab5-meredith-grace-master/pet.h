#ifndef PET_H
#define PET_H

#include <iostream>
using namespace std;

class Pet{
	string species;
	string name;
	int numLegs;
	bool tail;
public:
	Pet();
	Pet(string, string, int, bool);
	Pet(const Pet&);

	string getSpecies();
	string getName();
	int getNumLegs();
	bool getTail();

	void setSpecies(string);
	void setName(string);
	void setNumLegs(int);
	void setTail(bool);

	void print();
};

#endif