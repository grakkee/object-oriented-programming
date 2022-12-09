#include "bird.h"

Bird::Bird(){
	legs = 2;
	wingspan = 3;
}

Bird::Bird(int newLegs, double newWingspan){
	legs = newLegs;
	wingspan = newWingspan;
}

Bird::Bird(const Bird& rhs){
	legs = rhs.legs;
	wingspan = rhs.wingspan;
}

int Bird::getLegs(){
	return legs;
}

double Bird::getWingspan(){
	return wingspan;
}

void Bird::setLegs(int newLegs){
	legs = newLegs;
}

void Bird::setWingspan(double newWingspan){
	wingspan = newWingspan;
}

double Bird::walk(){
	return legs;
}

double Bird::swim(){
	return (wingspan/2); 
}

double Bird::fly(){
	return wingspan;
}