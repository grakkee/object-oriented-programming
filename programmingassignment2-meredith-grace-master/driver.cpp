//Grace Meredith
//CS 202 Project 2
//28 June 2020

#include "student.h"

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#define MIN_ARGS 2
#define MAX_CHAR 25

int getStudents(int maxSize, Student sampleStudents[MAX_CHAR+1], string userFile);
string findMaxStudent(int numStudents, Student sampleStudents[MAX_CHAR+1]);
void printStudents(int numStudents, Student sampleStudents[MAX_CHAR+1]);

int main(int argc, char* argv[]){
	if(argc < MIN_ARGS){
		cout << "Correct usage:" << endl << "./student_mgmt filename" << endl;
		return 0;
	}

	string studentFile = argv[1], maxStudent;
	int maxSize = MAX_CHAR, numStudents;
	Student sampleStudents[MAX_CHAR+1];

	numStudents = getStudents(maxSize, sampleStudents, studentFile);
	if(numStudents == 0){
		return 0;
	}

	printStudents(numStudents, sampleStudents);
	maxStudent = findMaxStudent(numStudents, sampleStudents);

	cout << "The student with the highest gpa is: " << maxStudent << endl;
	
	return 0;
}

int getStudents(int maxSize, Student sampleStudents[MAX_CHAR+1], string userFile){
	int sampleSize=0, Num;
	float GPA;
	string FName, LName;
	ifstream inputFile;

	inputFile.open(userFile);
	if(!inputFile){
		cout << "Sorry, could not open " << userFile << " for reading" << endl;
		return 0;
	}

	while(inputFile >> Num >> LName >> FName >> GPA){
		sampleStudents[sampleSize].setNumber(Num);
		sampleStudents[sampleSize].setFirstName(FName);
		sampleStudents[sampleSize].setLastName(LName);
		sampleStudents[sampleSize].setGpa(GPA);

		sampleSize++;
	}
	inputFile.close();

	return sampleSize;
}

string findMaxStudent(int numStudents, Student sampleStudents[MAX_CHAR+1]){
	string bestStudent, lastName; 
	int i, Winner=0, Length;
	float GPA1, GPA2;

	for(i = 1; i < numStudents; i++){
		GPA1 = sampleStudents[i].getGpa();
		GPA2 = sampleStudents[Winner].getGpa();

		if(GPA1>GPA2){
			Winner = i;
		}
		
	}

	bestStudent = sampleStudents[Winner].getFirstName();
	lastName = sampleStudents[Winner].getLastName();
	bestStudent.append(" ");
	bestStudent.append(lastName);

	return bestStudent;

	
}

void printStudents(int numStudents, Student sampleStudents[MAX_CHAR+1]){
	cout<<"First   Last    Number" << endl << "======================" << endl;

	for(int i = 0; i < numStudents; i++){
		sampleStudents[i].print();
	}

}