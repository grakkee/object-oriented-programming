#ifndef BIRD_H
#define BIRD_H

#include "pet.h"
#include <iostream>
using namespace std;

class Bird: public IPet{
	private:
		int legs;
		double wingspan;
	public:
		Bird();
		Bird(int, double);
		Bird(const Bird&);

		int getLegs();
		double getWingspan();

		void setLegs(int);
		void setWingspan(double);

		double walk();
		double swim();
		double fly();
};

#endif