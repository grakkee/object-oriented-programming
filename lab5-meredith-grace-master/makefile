petStore_mgmt: driver.o petStore.o pet.o
	g++ -o petStore_mgmt driver.o petStore.o pet.o

driver.o: driver.cpp petStore.h
	g++ -c driver.cpp

petStore.o: petStore.cpp petStore.h pet.h
	g++ -c petStore.cpp

pet.o: pet.cpp pet.h
	g++ -c pet.cpp

clean:
	rm *.o