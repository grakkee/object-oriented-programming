#include "shield.h"

Shield::Shield(){
	Name = "none";
	shieldPoints = 0;;
}

Shield::Shield(string newName, int newShieldPoints){
	Name = newName;
	shieldPoints = newShieldPoints; 
}

Shield::Shield(const Shield& rhs){
	Name = rhs.Name;
	shieldPoints = rhs.shieldPoints; 
}

void Shield::setShieldName(string newName){
	Name = newName;
}

void Shield::setShieldPoints(int newShieldPoints){
	shieldPoints = newShieldPoints; 
}

string Shield::getShieldName(){
	return Name; 
}

int Shield::getShieldPoints(){
	return shieldPoints; 
}

ostream& operator<<(ostream& output, Shield& other){
	string name = other.getShieldName();
	int points = other.getShieldPoints();

	output << name << ": " << points << endl; 

	return output; 
}