#include "orc.h"

Orc::Orc(){
	Name = "Bad Guy!";
	healthPoints = 6; 
	
	string swordName = "Hellfire sword";
	int swordDamage = 9;
	int swordParry = 4; 

	orcSword.setDamage(swordDamage);
	orcSword.setParry(swordParry);
	orcSword.setSwordName(swordName);
}

Orc::Orc(string newName, int newHealthPoints, Sword newSword){
	Name = newName;
	healthPoints = newHealthPoints;
	orcSword = newSword;
}

Orc::Orc(const Orc& rhs){
	Name = rhs.Name;
	healthPoints = rhs.healthPoints;
	orcSword = rhs.orcSword;

}

void Orc::block(){
	int block; 
	block = orcSword.getParry();

	healthPoints += block; 
}

void Orc::attacked(int attacked){
	healthPoints -= attacked; 
}

Sword Orc::getSword(){
	return orcSword; 
}

string Orc::getName(){
	return Name; 
}

int Orc::getHealthPoints(){
	return healthPoints; 
}

ostream& operator<< (ostream& output, Orc& other){
	string name = other.getName();
	int health = other.getHealthPoints();

	output << name << ": " << health << endl; 

	return output; 
}
