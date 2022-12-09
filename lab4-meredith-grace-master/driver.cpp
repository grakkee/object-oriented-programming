//Grace Meredith
// CS202 lab 4: Car Agency
//2 July 2020

#include "agency.h"
#include "car.h"

int main(){
	Agency agency("Hertz");

	Car car(1979, "Cadillac", "DeVille");
	
	agency.addCar(car);
	
	agency.print();

	return 0;
}