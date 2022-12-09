#ifndef PLAYER_H
#define PLAYER_H

#include "sword.h"
#include "shield.h"
#include "character.h"

#include <iostream>
#include <string>
using namespace std;

class Player: public Character{
	Sword playerSword;
	Shield playerShield; 

	public: 
		Player();
		Player(string, int, Sword, Shield);
		Player(const Player&);

		void block();
		void attacked(int);

		Sword getSword();
		Shield getShield();
		string getName();
		int getHealthPoints();

		void addSword(Sword);
		void addShield(Shield);

		friend ostream& operator<<(ostream& output, Player& other);

};
#endif