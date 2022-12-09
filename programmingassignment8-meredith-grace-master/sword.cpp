#include "sword.h"

Sword::Sword(){
	Name = "none";
	Damage = 0;
	Parry = 0;
}

Sword::Sword(string newName, int newDamage, int newParry){
	Name = newName;
	Damage = newDamage;
	Parry = newParry;
}

Sword::Sword(const Sword& rhs){
	Name = rhs.Name;
	Damage = rhs.Damage;
	Parry = rhs.Parry;
}

void Sword::setSwordName(string newName){
	Name = newName;
}

void Sword::setDamage(int newDamage){
	Damage = newDamage; 
}

void Sword::setParry(int newParry){
	Parry = newParry; 
}

string Sword::getSwordName(){
	return Name; 
}

int Sword::getDamage(){
	return Damage; 
}

int Sword::getParry(){
	return Parry; 
}

ostream& operator<<(ostream& output, Sword& other){
	string name = other.getSwordName();
	int damage = other.getDamage();
	int parry = other.getParry();

	output << name << endl;
	output << "Attack damage: " << damage << endl;
	output << "Parry block: " << parry << endl;

	return output; 
}