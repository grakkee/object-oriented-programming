text_analyzer: driver.o word_analyzer.o
	g++ -o text_analyzer driver.o word_analyzer.o

driver.o: driver.cpp word_analyzer.h
	g++ -c driver.cpp

word_analyzer.o: word_analyzer.cpp word_analyzer.h
	g++ -c word_analyzer.cpp
