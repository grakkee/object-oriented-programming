#include "course.h"

Course::Course(){
	prefix = " ";
	number = 0;
	name = " ";
}

Course::Course(string newPrefix, int newNumber, string newName){
	setPrefix(newPrefix);
	setNumber(newNumber);
	setName(newName);
}

Course::Course(const Course& rhs){
	prefix = rhs.prefix;
	number = rhs.number;
	name = rhs.name;
}

string Course::getPrefix(){
	return prefix; 
}

int Course::getNumbers(){
	return number;
}

string Course::getName(){
	return name;
}

void Course::setPrefix(string newPrefix){
	prefix = newPrefix;
}

void Course::setNumber(int newNumber){
	number = newNumber;
}

void Course::setName(string newName){
	name = newName;
}

void Course::print(){
	
	cout << prefix << number << ": " << name << endl;
}