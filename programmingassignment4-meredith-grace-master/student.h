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
	int numCourses;
	float gpa;
	Course studentCourses[MAX_COURSES];

public:
	Student();
	Student(int, float, string, string);
	Student(const Student&);

	float getGpa();
	int getNumCourses();
	Course getStudentCourses(int);

	void setGpa(float);

	
	void printSchedule();
	Student* operator+=(Course&);
};
#endif