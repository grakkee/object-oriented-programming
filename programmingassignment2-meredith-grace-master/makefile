student_mgmt: driver.o student.o
	g++ -o student_mgmt driver.o student.o

driver.o: driver.cpp student.h
	g++ -c driver.cpp

student.o: student.cpp student.h
	g++ -c student.cpp
	