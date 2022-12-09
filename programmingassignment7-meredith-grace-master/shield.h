#ifndef SHIELD_H
#define SHIELD_H

#include <iostream>
#include <string>
using namespace std; 

class Shield{
	string Name; 
	int shieldPoints;

	public:
		Shield();
		Shield(string, int);
		Shield(const Shield&);

		void setShieldName(string);
		void setShieldPoints(int);

		string getShieldName();
		int getShieldPoints();

		friend ostream& operator<<(ostream& output, Shield& other);
};
#endif