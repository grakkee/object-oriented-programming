#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;
 
 class Car{

 	int year;
 	string make;
 	string model;

 public:
 	Car();
 	Car(int newYear, string newMake, string newModel);
 	Car(const Car&);

 	int getYear();
 	string getMake();
 	string getModel();

 	void setYear(int);
 	void setMake(string);
 	void setModel(string);

 	void print();
};

#endif