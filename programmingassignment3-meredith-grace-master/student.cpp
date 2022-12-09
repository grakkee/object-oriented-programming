#include "student.h"

Student::Student(){
	number = 0;
	gpa = 0;
	firstName = "N/A";
	lastName = "N/A";
}

Student::Student(int newNumber, float newGpa, string newFirstName, string newLastName){
	setNumber(newNumber);
	setGpa(newGpa);
	setFirstName(newFirstName);
	setLastName(newLastName);
}

Student::Student(const Student& rhs){
	number = rhs.number;
	gpa = rhs.gpa;
	firstName = rhs.firstName;
	lastName = rhs.lastName;
}

int Student::getNumber(){
	return number;
}

float Student::getGpa(){
	return gpa;
}

string Student::getFirstName(){
	return firstName;
}

string Student::getLastName(){
	return lastName;
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

void Student::setNumber(int newNumber){
	number = newNumber;
}

void Student::setGpa(float newGpa){
	gpa = newGpa;
}

void Student::setFirstName(string newFirstName){
	firstName = newFirstName;
}

void Student::setLastName(string newLastName){
	lastName = newLastName;
}

void Student::print(){
	cout << left << setw(8)<< firstName;
	cout << left << setw(8) << lastName;
	cout << left << setw(6) << number << endl;
}

void Student::printSchedule(){ 
	int i = 0; 

	while(studentCourses[i].getNumbers() != 0 && i < MAX_COURSES){
		studentCourses[i].print();
		i++;
	}
	
}

bool Student::addCourse(Course alpha){ 
	int num = getNumCourses();
	if(num < MAX_COURSES){
		studentCourses[num] = alpha;
		return true;
	}
	else{
		return false;
	}
}