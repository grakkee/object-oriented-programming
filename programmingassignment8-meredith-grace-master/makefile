adventureList: driver.o player.o orc.o shield.o sword.o 
	g++ -o adventureList driver.o player.o orc.o shield.o sword.o 

driver.o: driver.cpp player.h orc.h sword.h shield.h
	g++ -c driver.cpp 

player.o: player.cpp player.h character.h sword.h shield.h 
	g++ -c player.cpp 

orc.o: orc.cpp orc.h character.h sword.h 
	g++ -c orc.cpp

sword.o: sword.cpp sword.h 
	g++ -c sword.cpp 

shield.o: shield.cpp shield.h 
	g++ -c shield.cpp 