#include "petStore.h"

PetStore::PetStore(){
	setName("");
	setNumber(0);
	numPets = 0;
}
PetStore::PetStore(string newName, int newNumber){
	setName(newName);
	setNumber(newNumber);
	numPets = 0;
}
PetStore::PetStore(const PetStore& rhs){
	setName("");
	setNumber(0);
	numPets = 0;
}

string PetStore::getName(){
	return name;
}
int PetStore::getNumber(){
	return number;
}
int PetStore::getNumPets(){
	return numPets;
}

void PetStore::setName(string newName){
	name = newName;
}
void PetStore::setNumber(int newNumber){
	number = newNumber;
}

void PetStore::print(){
	cout << name << "(" << number << ")" << endl;
	for(int i = 0; i < numPets; i++){
		pets[i].print();
	}
}


PetStore* PetStore::operator+=(Pet& other){
	int index = 0;
	bool found = false;

	while(index < numPets && !found){
		if(pets[index].getName() == other.getName()){
			found = true;
		}
		index++;
	}

	if(!found && numPets < MAX_PETS){
		pets[numPets] = other;
		numPets++;
	}	

	return this;
}