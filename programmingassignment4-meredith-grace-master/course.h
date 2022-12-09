#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Course{
	string prefix, name;
	int number;

public:
	Course();
	Course(string, int, string);
	Course(const Course&);

	string getPrefix();
	int getNumbers();
	string getName();

	void setPrefix(string);
	void setNumber(int);
	void setName(string);

	void print();

};
#endif 