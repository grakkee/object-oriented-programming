#ifndef FACULTY_H
#define FACULTY_H

#include "course.h"
#include "unimember.h"

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#define MAX_SCHEDULE 3

class Faculty: public Unimember{
	string office;
	Course schedule[MAX_SCHEDULE];

public:
	Faculty();
	Faculty(int, string, string, string);
	Faculty(const Faculty&);

	string getOffice();
	Course getSchedule(int);

	void setOffice(string);

	friend istream& operator>>(istream &input, Faculty& other);
	friend ostream& operator<<(ostream &output, const Faculty& other);
	
	bool addCourses(const Course&);
	void printSchedule();

};

#endif