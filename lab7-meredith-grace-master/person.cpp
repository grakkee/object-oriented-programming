#include "person.h"

Person::Person(){
	firstName = "";
	lastName = "";
	email = "";

	int defaultPhone[PHONE_DIGITS] = { };
	setPhoneNumber(defaultPhone);
}
Person::Person(string newFirstName, string newLastName, string newEmail){
	setFirstName(newFirstName);
	setLastName(newLastName);
	setEmail(newEmail);
}
Person::Person(const Person& rhs){
	setFirstName(rhs.firstName);
	setLastName(rhs.lastName);
	setEmail(rhs.email);
	setPhoneNumber(rhs.phoneNumber);
}

string Person::getFirstName(){
	return firstName;
}
string Person::getLastName(){
	return lastName;
}
string Person::getEmail(){
	return email;
}
int* Person::getPhoneNumber(){
	return phoneNumber;
}

void Person::setFirstName(const string newFirstName){
	firstName = newFirstName;
}
void Person::setLastName(const string newLastName){
	lastName = newLastName;
}
void Person::setEmail(const string newEmail){
	email = newEmail;
}
void Person::setPhoneNumber(const int newPhoneNumber[]){
	for(int i = 0; i < PHONE_DIGITS; i++){
		phoneNumber[i] = newPhoneNumber[i];
	}
}

ostream& operator<<(ostream &output, const Person& other){
	output << other.lastName << ": " << other.email; 

	return output;
}