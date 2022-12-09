//Grace Meredith
//cs 202 project 5 - University Management 
//24 July 2020

#include "student.h"
#include "course.h"
#include "faculty.h"

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

#define MAX_CHAR 10
#define STUDENT_FILE "students.txt"
#define FACULTY_FILE "faculty.txt"

int getStudents(int maxSize, Student sampleStudents[MAX_CHAR], string userFile);
int getFaculty(int maxSize, Faculty sampleFaculty[MAX_CHAR], string userFile);
void printStudents(int numStudents, Student sampleStudents[MAX_CHAR]);
void printFaculty(int numFaculty, Faculty sampleFaculty[MAX_CHAR]);
int getMenuChoice();
int getMemberChoice();
int getFacultyOption(int numFaculty, Faculty sampleFaculty[MAX_CHAR]);
int getStudentOption(int numStudents, Student sampleStudents[MAX_CHAR]);
void addCourses(Unimember& a);

int main(){
	int maxSize = MAX_CHAR, numStudents, numFaculty, userChoice, studentOption, facultyOption, memberChoice;
	string studentFile = STUDENT_FILE, facultyFile = FACULTY_FILE;
	Student sampleStudents[MAX_CHAR];
	Faculty sampleFaculty[MAX_CHAR];

	numStudents = getStudents(maxSize, sampleStudents, studentFile);
	numFaculty = getFaculty(maxSize, sampleFaculty, facultyFile);

	if(numStudents == 0 || numFaculty == 0){
		return 0;
	}

	do{
		cout << endl;
		userChoice = getMenuChoice();

		if(userChoice == 1){
			printStudents(numStudents, sampleStudents);
		}

		else if(userChoice == 2){
			printFaculty(numFaculty, sampleFaculty);
		}

		else if(userChoice == 3){
			memberChoice = getMemberChoice();

			if(memberChoice == 1){
				do{
					facultyOption = getFacultyOption(numFaculty, sampleFaculty);
				}
				while(facultyOption < 1 && facultyOption > numFaculty);

				addCourses(sampleFaculty[facultyOption - 1]);
			}

			else if(memberChoice == 2){
				do{
					studentOption = getStudentOption(numStudents, sampleStudents);
				}
				while(studentOption < 1 && studentOption > numStudents);

				addCourses(sampleStudents[studentOption - 1]);
			}
		}

		else if(userChoice == 4){
			memberChoice = getMemberChoice();

			if(memberChoice == 1){
				do{
					facultyOption = getFacultyOption(numFaculty, sampleFaculty);
				}
				while(facultyOption < 1 && facultyOption > numFaculty);

				sampleFaculty[facultyOption - 1].printSchedule();
			}

			else if(memberChoice == 2){
				do{
					studentOption = getStudentOption(numStudents, sampleStudents);
				}
				while(studentOption < 1 && studentOption > numStudents);

				sampleStudents[studentOption - 1].printSchedule();
			}
		}

		else if(userChoice != 0){
			cout << "Please enter a valid option" << endl;
		}
	}

	while(userChoice != 0);
	return 0;
}


int getStudents(int maxSize, Student sampleStudents[MAX_CHAR], string userFile){
	ifstream inputFile;
	int sampleSize;

	inputFile.open(userFile);
	if(!inputFile){
		cout << "Sorry, could not open " << userFile << " for reading" << endl;
		return 0;
	}

	while(inputFile >> sampleStudents[sampleSize]){

		sampleSize++;
	}
	inputFile.close();

	return sampleSize;
}

int getFaculty(int maxSize, Faculty sampleFaculty[MAX_CHAR], string userFile){
	ifstream inputFile;
	int sampleSize;

	inputFile.open(userFile);
	if(!inputFile){
		cout << "Sorry, could not open " << userFile << " for reading" << endl;
		return 0;
	}

	while(inputFile >> sampleFaculty[sampleSize]){

		sampleSize++;
	}
	inputFile.close();

	return sampleSize;
}

void printStudents(int numStudents, Student sampleStudents[MAX_CHAR]){
	cout<<"First   Last    Number" << endl << "======================" << endl;

	for(int i = 0; i < numStudents; i++){
		cout << sampleStudents[i]; 
	}

}

void printFaculty(int numFaculty, Faculty sampleFaculty[MAX_CHAR]){
	cout<<"First   Last    Number" << endl << "======================" << endl;

	for(int i = 0; i < numFaculty; i++){
		cout << sampleFaculty[i]; 
	}

}

int getMenuChoice(){
	int choice;

	cout << "UNIVERSITY MANAGEMENT SYSTEM" << endl;
	cout << "================================" << endl;
	cout << "1.	Display Students" << endl;
	cout << "2.	Display Faculty" << endl;
	cout << "3.	Add Classes" << endl;
	cout << "4.	Display Schedule" << endl;
	cout << "0.	EXIT" << endl;

	cin >> choice; 
	return choice; 
}

int getMemberChoice(){
	int choice;
	cout << "================================" << endl;
	cout << "1. "  << "Faculty" << endl;
	cout << "2. "  << "Student" << endl;

	do{
		cin >> choice;
	}
	while(choice != 1 && choice != 2);

	return choice; 
}

int getFacultyOption(int numFaculty, Faculty sampleFaculty[MAX_CHAR]){
	int choice;
	string firstname, lastname; 

	cout << endl;
	cout << "Option	First	Last" << endl;
	cout << "======================" << endl;

	for(int i = 0; i < numFaculty; i++){
		firstname = sampleFaculty[i].getFirstName();
		lastname = sampleFaculty[i].getLastName();

		cout << left << setw(2)<< firstname << " " << lastname << endl;
	}

	cout <<"Choose the student option number: ";
	cin >> choice;

	return choice; 
}

int getStudentOption(int numStudents, Student sampleStudents[MAX_CHAR]){
	int choice;
	string firstname, lastname; 

	cout << endl;
	cout << "Option	First	Last" << endl;
	cout << "======================" << endl;

	for(int i = 0; i < numStudents; i++){
		firstname = sampleStudents[i].getFirstName();
		lastname = sampleStudents[i].getLastName();

		cout << left << setw(2)<< firstname<< " " << lastname << endl;
	}

	cout <<"Choose the faculty option number: ";
	cin >> choice;

	return choice; 
}

void addCourses(Unimember& a){
	int numCourses = a.getNumCourses();
	int userAdd=0;
	bool success = true; 

	if(numCourses >= MAX_COURSES){
		cout << a.getFirstName() << " " << a.getLastName() << " has a full schedule" << endl; 
	}

	else if(numCourses < MAX_COURSES){
		do{
			cout << endl;
			cout << "How many courses would you like to add? ";
			cin >> userAdd;
			
			if(userAdd + numCourses >= MAX_COURSES){
			cout << a.getFirstName() << " " << a.getLastName() << " already has " << numCourses << " out of 7 courses" << endl;
			}
		}
		while(userAdd + numCourses >= MAX_COURSES);
		
		
		for(int i = 0; i < userAdd && success == true; i++){
		Course alpha;
		string prefix, name;
		int number; 
			
		cout << "Enter the course prefix, number, and name: ";
		cin >> prefix >> number; 
		getline(cin, name);

		alpha.setPrefix(prefix);
		alpha.setNumber(number);
		alpha.setName(name);

		success = a.addCourses(alpha);
		
		}
	}
}
		
	
