#include "unimember.h"

Unimember::Unimember(){
	number = 0;
	firstName = " ";
	lastName = " ";
}

Unimember::Unimember(int newNumber, string newFirstName, string newLastName){
	number = newNumber;
	firstName = newFirstName;
	lastName = newLastName;
}

Unimember::Unimember(const Unimember& rhs){
	number = rhs.number;
	firstName = rhs.firstName;
	lastName = rhs.lastName;
}

int Unimember::getNumber(){
	return number;
}

string Unimember::getFirstName(){
	return firstName;
}

string Unimember::getLastName(){
	return lastName;
}

void Unimember::setNumber(int newNumber){
	number = newNumber;
}

void Unimember::setFirstName(string newFirstName){
	firstName = newFirstName;
}

void Unimember::setLastName(string newLastName){
	lastName = newLastName;
}

void Unimember::print(){
	cout << left << setw(8)<< firstName;
	cout << left << setw(8) << lastName;
	cout << left << setw(6) << number << endl;
}
