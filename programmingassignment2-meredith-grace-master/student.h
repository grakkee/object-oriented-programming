#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student{
	int number;
	float gpa;
	string firstName, lastName;

public:
	Student();
	Student(int, float, string, string);
	Student(const Student&);

	int getNumber();
	float getGpa();
	string getFirstName();
	string getLastName();

	void setNumber(int);
	void setGpa(float);
	void setFirstName(string);
	void setLastName(string);

	void print(); /*student firstname width 8 left unjustified, 
					lastname field width 8 unjustified,
	 				number field width 6 unjustified*/
};

#endif 