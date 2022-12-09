#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

#define PHONE_DIGITS 10

class Person{
	string firstName;
	string lastName;
	string email;
	int phoneNumber[PHONE_DIGITS];

public:
	Person();
	Person(string, string, string);
	Person(const Person&);

	string getFirstName();
	string getLastName();
	string getEmail();
	int* getPhoneNumber();

	void setFirstName(const string);
	void setLastName(const string);
	void setEmail(const string);
	void setPhoneNumber(const int[]);

	friend ostream& operator<<(ostream &output, const Person& other);
};

#endif