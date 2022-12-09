#include "pet.h"

Pet::Pet(){
	setSpecies("");
	setName("");
	setLegs(0);
	setTail(false);
}

Pet::Pet(string newSpecies, string newName){
	setSpecies(newSpecies);
	setName(newName);
}

void Pet::setLegs(int numLegs){
	legs = numLegs; 
}
int Pet::getLegs(){ 
	return legs; 
}
void Pet::setTail(bool hasTail){ 
	tail = hasTail; 
}
bool Pet::getTail(){ 
	return tail; 
}
void Pet::setSpecies(string speciesName){ 
	species = speciesName; 
}
string Pet::getSpecies(){ 
	return species; 
}
void Pet::setName(string petName){ 
	name = petName; 
}
string Pet::getName(){ 
	return name; 
}

ostream& operator<<(ostream &output, const Pet& other){
	output<< other.species << ": " << other.name; 

	return output;
}