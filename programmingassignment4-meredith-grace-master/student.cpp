#include "student.h"

Student::Student(){
	gpa = 0;
}

Student::Student(int newNumber, float newGpa, string newFirstName, string newLastName){
	
	setGpa(newGpa);
	
}

Student::Student(const Student& rhs){
	gpa = rhs.gpa;
}

float Student::getGpa(){
	return gpa;
}

int Student::getNumCourses(){
	int i = 0;

	while(studentCourses[i].getNumbers() != 0 && i < MAX_COURSES){
		i++;
	}

	return i; 
}

Course Student::getStudentCourses(int num){
	return studentCourses[num];
}


void Student::setGpa(float newGpa){
	gpa = newGpa;
}

void Student::printSchedule(){ 
	int i = 0; 
	int num = getNumCourses();

	while(i < num){
		studentCourses[i].print();
		i++;
	}
	
}

Student* Student::operator+=(Course& other){ 
	int num = getNumCourses(), index = 0;
	bool found = false;

	while(index < num && !found){
		if (studentCourses[index].getNumbers() == other.getNumbers()){
			found = true;
		}
		index++;
	}

	if(!found && num < MAX_COURSES){
		studentCourses[num] = other;
		num++;
	}

	return this; 
}