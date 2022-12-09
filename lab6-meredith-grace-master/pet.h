#ifndef PET_H
#define PET_H

#include <iostream>
using namespace std;

class IPet{
	public:
		virtual double walk() = 0;
		virtual double swim() = 0;
		virtual double fly() = 0;

};

#endif