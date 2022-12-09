student_mgmt: driver.o student.o course.o unimember.o
	g++ -o student_mgmt driver.o student.o course.o unimember.o

driver.o: driver.cpp student.h course.h
	g++ -c driver.cpp

student.o: student.cpp student.h course.h unimember.h
	g++ -c student.cpp

course.o: course.cpp course.h
	g++ -c course.cpp

unimember.o: unimember.cpp unimember.h 
	g++ -c unimember.cpp
