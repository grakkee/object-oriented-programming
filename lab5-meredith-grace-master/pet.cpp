#include "pet.h"

Pet::Pet(){
	setSpecies("");
	setName("");
	setNumLegs(0);
	setTail(false);
}
Pet::Pet(string newSpecies, string newName, int newNumLegs, bool newTail){
	setSpecies(newSpecies);
	setName(newName);
	setNumLegs(newNumLegs);
	setTail(newTail);
}
Pet::Pet(const Pet& rhs){
	setSpecies(rhs.species);
	setName(rhs.name);
	setNumLegs(rhs.numLegs);
	setTail(rhs.tail);
}

string Pet::getSpecies(){
	return species;
}
string Pet::getName(){
	return name;
}
int Pet::getNumLegs(){
	return numLegs;
}
bool Pet::getTail(){
	return tail;
}

void Pet::setSpecies(string newSpecies){
	species = newSpecies;
}
void Pet::setName(string newName){
	name = newName;
}
void Pet::setNumLegs(int newNumLegs){
	numLegs = newNumLegs;
}
void Pet::setTail(bool newTail){
	tail = newTail;
}

void Pet::print(){
	cout << species << ": " << name << endl;
}