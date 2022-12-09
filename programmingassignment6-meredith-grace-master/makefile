calculator: driver.o complex.o 
	g++ -o calculator driver.o complex.o 

driver.o: driver.cpp calculator.h complex.h
	g++ -c driver.cpp

complex.o: complex.cpp complex.h
	g++ -c complex.cpp 