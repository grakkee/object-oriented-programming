#include <iostream>
using namespace std;

#include "pet.h"
#include "person.h"

#define NUM_PETS 2
#define NUM_PEOPLE 3

template<typename T1, typename T2, typename T3>
int getOption(T1 numObjects, T2 arrayObjects, T3 header);

int main(){
	Pet petStore[NUM_PETS];	
	Pet pet("cat", "Hera");
	petStore[0] = pet;
	pet.setSpecies("dog");
	pet.setName("Lucky");
	petStore[1] = pet;

	int numPets = NUM_PETS;
	string petHeader = "PETS";
	int choice1 = getOption(numPets, petStore, petHeader);

	Person team[NUM_PEOPLE];	
	Person person("Erin", "Keith", "ekeith@unr.edu");
	team[0] = person;
	person.setFirstName("Luke");
	person.setLastName("Skywalker");
	person.setEmail("KorlMarcus@jedi.net");
	team[1] = person;
	person.setFirstName("Thomas");
	person.setLastName("Anderson");
	person.setEmail("neo@matrix.com");
	team[2] = person;
	
	int numPeople = NUM_PEOPLE;
	string peopleHeader = "PEOPLE";
	int choice2 = getOption(numPeople, team, peopleHeader);

	int array[] = {1, 2, 3, 4, 5};
	int numNumbers = 5;
	string numHeader = "NUMBERS";
	int choice3 = getOption(numNumbers, array, numHeader);

	return 0;
}

template<typename T1, typename T2, typename T3>
int getOption(T1 numObjects, T2 arrayObjects, T3 header){
	int userChoice;

	cout << endl;
	cout << "***" << header << "***" << endl;
	cout << "======================" << endl;

	for(int i = 0; i < numObjects; i++){
		cout << i+1 << ".      " << arrayObjects[i] << endl;
	}

	cout << "Choose the option number: ";
	cin >> userChoice;

	return userChoice; 
}