#ifndef STUDENT_H
#define STUDENT_H


#include "course.h"
#include "unimember.h"

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#define MAX_COURSES 7

class Student: public Unimember{
	float gpa;
	Course studentCourses[MAX_COURSES];

public:
	Student();
	Student(int, float, string, string);
	Student(const Student&);

	float getGpa();
	Course getStudentCourses(int);

	void setGpa(float);

	friend istream& operator>>(istream &input, Student& other);
	friend ostream& operator<<(ostream &output, const Student& other);
	
	bool addCourses(const Course&);
	void printSchedule();
};

#endif