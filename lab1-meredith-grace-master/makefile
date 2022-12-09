analyze_word: analyze_word.o counters.o
	g++ -o analyze_word analyze_word.o counters.o

analyze_word.o: analyze_word.cpp counters.h
	g++ -c analyze_word.cpp

counters.o: counters.cpp counters.h
	g++ -c counters.cpp