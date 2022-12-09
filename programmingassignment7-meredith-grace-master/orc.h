#ifndef ORC_H
#define ORC_H

#include "sword.h"
#include "character.h"

#include <iostream>
#include <string>
using namespace std; 

class Orc: public Character{
	Sword orcSword;

	public:
		Orc();
		Orc(string, int, Sword);
		Orc(const Orc&);

		void block();
		void attacked(int);

		Sword getSword();
		string getName();
		int getHealthPoints();

		friend ostream& operator<< (ostream& output, Orc& other);

};
#endif