uni_mgmt: driver.o student.o faculty.o course.o unimember.o
	g++ -o uni_mgmt driver.o student.o faculty.o course.o unimember.o

driver.o: driver.cpp student.h faculty.h course.h
	g++ -c driver.cpp

student.o: student.cpp student.h course.h unimember.h
	g++ -c student.cpp

faculty.o: faculty.cpp faculty.h course.h unimember.h
	g++ -c faculty.cpp
	
course.o: course.cpp course.h
	g++ -c course.cpp

unimember.o: unimember.cpp unimember.h course.h
	g++ -c unimember.cpp
