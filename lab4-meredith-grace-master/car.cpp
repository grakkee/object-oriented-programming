#include "car.h"

Car::Car(){
	year = 0;
	make = " ";
	model = " ";

};
Car::Car(int newYear, string newMake, string newModel){
	setYear(newYear);
	setMake(newMake);
	setModel(newModel);

}
Car::Car(const Car& rhs){
	year = rhs.year;
	make = rhs.make;
	model = rhs.model;

}

int Car::getYear(){
	return year;
}
string Car::getMake(){
	return make;
}
string Car::getModel(){
	return model;
}

void Car::setYear(int newYear){
	year = newYear;
}
void Car::setMake(string newMake){
	make = newMake;
}
void Car::setModel(string newModel){
	model = newModel;
}

void Car::print(){
	cout << year << " " << make << " " << model << endl;
}