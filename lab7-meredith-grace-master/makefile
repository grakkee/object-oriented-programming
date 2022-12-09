lab7: driver.o pet.o person.o
	g++ -o lab7 driver.o pet.o person.o

driver.o: driver.cpp pet.h person.h
	g++ -c driver.cpp

pet.o: pet.cpp pet.h
	g++ -c pet.cpp

person.o: person.cpp person.h
	g++ -c person.cpp