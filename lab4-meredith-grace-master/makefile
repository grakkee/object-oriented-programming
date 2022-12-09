rental_agency: driver.o agency.o car.o
	g++ -o rental_agency driver.o agency.o car.o

driver.o: driver.cpp agency.h car.h
	g++ -c driver.cpp

agency.o: agency.cpp agency.h car.o
	g++ -c agency.cpp

car.o: car.cpp car.h
	g++ -c car.cpp

clean:
	rm *.o
