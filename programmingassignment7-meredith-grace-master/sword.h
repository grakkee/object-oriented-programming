#ifndef SWORD_H
#define SWORD_H

#include <iostream>
#include <string>
using namespace std; 

class Sword{
	string Name;
	int Damage, Parry;  

	public:
		Sword();
		Sword(string, int, int);
		Sword(const Sword&);

		void setSwordName(string);
		void setDamage(int);
		void setParry(int);

		string getSwordName();
		int getDamage();
		int getParry();

		friend ostream& operator<<(ostream& output, Sword& other);

};
#endif