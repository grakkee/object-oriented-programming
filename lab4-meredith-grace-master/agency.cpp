#include "agency.h"

Agency::Agency(){
	setName("");
}
Agency::Agency(string newName){
	setName(newName);
}
Agency::Agency(const Agency& rhs){
	setName(rhs.name);
}

string Agency::getName(){
	return name;
}

int Agency::getNumCars(){
	return numCars;
}

Car* Agency::getFleet(){
	return fleet; 
}

void Agency::setName(string newName){
	name = newName;
}
 
void Agency::print(){
	cout << name << endl;
	cout << "==============" << endl;

	for(int i = 0; i < numCars; i++){
		fleet[i].print();
	}
}

void Agency::addCar(Car newCar){
	int num;

	num = getNumCars();

	if(num==MAX_CAR){
		throw "failed";
	}
	
	else{

		fleet[num] = newCar;
	}
}	