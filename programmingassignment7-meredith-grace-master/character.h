#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std; 

class Character{

	protected:
		string Name;
		int healthPoints; 

	public: 
		virtual void block() = 0;
		virtual void attacked(int) = 0;

		void setName(string newName){
			Name = newName;
		}

		void setHealthPoints(int newHealth){
			healthPoints = newHealth;
		}
		
};
#endif