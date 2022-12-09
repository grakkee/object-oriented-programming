#ifndef UNIMEMBER_H
#define UNIMEMBER_H


#include <iostream>
#include<string>
#include <iomanip>

using namespace std;

class Unimember{
	int number;
	string firstName, lastName;

public:
	Unimember();
	Unimember(int, string, string);
	Unimember(const Unimember&);

	int getNumber();
	string getFirstName();
	string getLastName();

	void setNumber(int);
	void setFirstName(string);
	void setLastName(string);

	void print();

};

#endif
