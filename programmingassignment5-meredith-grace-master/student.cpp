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

Course Student::getStudentCourses(int num){
	return studentCourses[num];
}


void Student::setGpa(float newGpa){
	gpa = newGpa;
}

istream& operator>>(istream &input, Student& other){
	int newN;
	string newLN, newFN;
	float newG;

	input >> newN >> newLN>> newFN >> newG;
	other.number = newN;
	other.firstName = newFN;
	other.lastName = newLN;
	other.gpa = newG;

	return input; 
}

ostream& operator<<(ostream &output, const Student& other){
	cout << left << setw(8)<< other.firstName;
	cout << left << setw(8) << other.lastName;
	cout << left << setw(6) << other.number << endl;

	return output;
}

bool Student::addCourses(const Course& newCourse){
	if(numCourses < MAX_COURSES){
		studentCourses[numCourses] = newCourse;
		numCourses++;

		return true;
	}
	else{return false;}
}

void Student::printSchedule(){ 
	int i = 0;

	while(i < numCourses){
		studentCourses[i].print();
		i++;
	}
}