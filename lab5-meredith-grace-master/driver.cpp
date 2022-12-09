#include "petStore.h"

int main(){
	string storeName = "Pets 'R Us";
	int storeNumber = 47193;
	PetStore petStore(storeName, storeNumber);

	string species = "cat";
	string name = "Hera";
	int legs = 4;
	bool tail = true;
	Pet newPet(species, name, legs, tail);

	petStore += newPet;
	petStore.print();

	return 0;
}