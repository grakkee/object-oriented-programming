//Grace Meredith 
//Lab 6: iPet
//16 July 2020

#include "cat.h"
#include "bird.h"
#include "pet.h"

#include <iostream>
using namespace std;

double aWalkInThePark(IPet* pet);

int main(){
	Cat cat;
	Bird bird; 
	double catDistance, birdDistance;

	catDistance = aWalkInThePark(&cat);
	birdDistance = aWalkInThePark(&bird);

	cout << "Hera went " << catDistance << " on her walk" << endl;
	cout << "bird went " << birdDistance << " on their walk" << endl;
	
	return 0; 
}

double aWalkInThePark(IPet* pet){
	double distance;

	distance = pet->walk() + pet->swim();

	return distance; 
}