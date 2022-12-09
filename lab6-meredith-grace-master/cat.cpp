#include "cat.h"

Cat::Cat(){
	legs = 4;
}

Cat::Cat(int newLegs){
	legs = newLegs;
}

Cat::Cat(const Cat& rhs){
	legs = rhs.legs;
}

int Cat::getLegs(){
	return legs;
}

void Cat::setLegs(int newLegs){
	legs = newLegs;
}

double Cat::walk(){
	return legs;
}

double Cat::swim(){
	return (legs/2);
}

double Cat::fly(){
	return 0; 
}