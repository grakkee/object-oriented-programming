#ifndef UNIMEMBER_H
#define UNIMEMBER_H

#include "course.h"

#include <iostream>
#include<string>
#include <iomanip>

using namespace std;

class Unimember{
protected:
	int number, numCourses;
	string firstName, lastName;

public:
	Unimember();
	Unimember(int, string, string);
	Unimember(const Unimember&);

	int getNumber();
	string getFirstName();
	string getLastName();
	int getNumCourses();

	void setNumber(int);
	void setFirstName(string);
	void setLastName(string);

	virtual void printSchedule() = 0;
	virtual bool addCourses(const Course&) = 0;

};

#endif
