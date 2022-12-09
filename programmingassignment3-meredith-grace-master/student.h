#ifndef STUDENT_H
#define STUDENT_H

#include "course.h"

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#define MAX_COURSES 7

class Student{
	int number, numCourses;
	float gpa;
	string firstName, lastName;
	Course studentCourses[MAX_COURSES];

public:
	Student();
	Student(int, float, string, string);
	Student(const Student&);

	int getNumber();
	float getGpa();
	string getFirstName();
	string getLastName();
	int getNumCourses();
	Course getStudentCourses(int);

	void setNumber(int);
	void setGpa(float);
	void setFirstName(string);
	void setLastName(string);

	void print(); 
	void printSchedule();
	bool addCourse(Course);
};
#endif