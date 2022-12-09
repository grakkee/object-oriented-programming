#include "faculty.h"

Faculty::Faculty(){
	office = " ";
}

Faculty::Faculty(int newNumber, string newFirstName, string newLastName, string newOffice){
	office = newOffice; 
}

Faculty::Faculty(const Faculty& rhs){
	office = rhs.office;
}

string Faculty::getOffice(){
	return office;
}

Course Faculty::getSchedule(int num){
	return schedule[num];
}

void Faculty::setOffice(string newOffice){
	office = newOffice;
}

istream& operator>>(istream &input, Faculty& other){
	int newN;
	string newLN, newFN, newO;

	input >> newN >> newLN>> newFN >> newO;
	other.number = newN;
	other.firstName = newFN;
	other.lastName = newLN;
	other.office = newO;

	return input; 
}

ostream& operator<<(ostream &output, const Faculty& other){
	output << left << setw(8)<< other.firstName;
	output << left << setw(8) << other.lastName;
	output << left << setw(6) << other.office << endl;

	return output;
}

bool Faculty::addCourses(const Course& newCourse){
	if(numCourses < MAX_SCHEDULE){
		schedule[numCourses] = newCourse;
		numCourses++;

		return true;
	}
	else{return false;}
}

void Faculty::printSchedule(){
	int i = 0;

	while(i < numCourses){
		schedule[i].print();
		i++;
	}

}
