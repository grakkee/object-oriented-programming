walk_in_park: driver.o cat.o bird.o
	g++ -o walk_in_park driver.o cat.o bird.o

driver.o: driver.cpp cat.h bird.h
	g++ -c driver.cpp

cat.o: cat.cpp cat.h pet.h
	g++ -c cat.cpp

bird.o: bird.cpp bird.h pet.h
	g++ -c bird.cpp 