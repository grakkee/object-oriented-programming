#ifndef CAT_H
#define CAT_H

#include "pet.h"
#include <iostream>
using namespace std;

class Cat: public IPet{
	private:
		int legs; 

	public: 
		Cat();
		Cat(int);
		Cat(const Cat&);

		int getLegs();
		void setLegs(int);

		double walk();
		double swim();
		double fly();


};

#endif