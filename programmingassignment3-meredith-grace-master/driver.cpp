//Grace Meredith
//CS 202 Project 3: students and courses
//7 July 2020

#include "student.h"
#include "course.h"

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#define MIN_ARGS 2
#define MAX_CHAR 10

int getStudents(int maxSize, Student sampleStudents[MAX_CHAR], string userFile);
string findMaxStudent(int numStudents, Student sampleStudents[MAX_CHAR]);
void printStudents(int numStudents, Student sampleStudents[MAX_CHAR]);
int getMenuChoice();
int getStudentOption(int numStudents, Student sampleStudents[MAX_CHAR]);
void addCourses(Student a);

int main(int argc, char* argv[]){
	if(argc < MIN_ARGS){
		cout << "Correct usage:" << endl << "./student_mgmt filename" << endl;
		return 0;
	}

	string studentFile = argv[1], maxStudent;
	int maxSize = MAX_CHAR, numStudents, userChoice, studentOption;
	Student sampleStudents[MAX_CHAR];

	numStudents = getStudents(maxSize, sampleStudents, studentFile);
	if(numStudents == 0){
		return 0;
	}

	do{
		cout << endl;
		userChoice = getMenuChoice();

		if(userChoice == 1){
			printStudents(numStudents, sampleStudents);
		}

		else if(userChoice == 2){
			do{
				studentOption = getStudentOption(numStudents, sampleStudents);
			}
			while(studentOption <1  && studentOption > numStudents);

			addCourses(sampleStudents[studentOption - 1]);
		}

		else if(userChoice == 3){
			do{
				studentOption = getStudentOption(numStudents, sampleStudents);
			}
			while(studentOption < 1 && studentOption > numStudents);

			sampleStudents[studentOption].printSchedule();
		}
		else if(userChoice == 4){
			maxStudent = findMaxStudent(numStudents, sampleStudents);
			cout << "The student with the highest gpa is: " << maxStudent << endl;
		}

		else if(userChoice != 0){
			cout << "Please enter a valid option" << endl;
		}

	}
	
	while(userChoice != 0);
	return 0;
}

int getStudents(int maxSize, Student sampleStudents[MAX_CHAR], string userFile){
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

string findMaxStudent(int numStudents, Student sampleStudents[MAX_CHAR]){
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

void printStudents(int numStudents, Student sampleStudents[MAX_CHAR]){
	cout<<"First   Last    Number" << endl << "======================" << endl;

	for(int i = 0; i < numStudents; i++){
		sampleStudents[i].print();
	}

}

int getMenuChoice(){
	int choice;

	cout << "STUDENT MANAGEMENT SYSTEM" << endl;
	cout << "================================" << endl;
	cout << "1.	Display Students" << endl;
	cout << "2.	Add Courses" << endl;
	cout << "3.	Display Student Schedule" << endl;
	cout << "4.	Find Highest GPA Student" << endl;
	cout << "0.	EXIT" << endl;

	cin >> choice; 
	return choice; 
}

int getStudentOption(int numStudents, Student sampleStudents[MAX_CHAR]){
	int choice;
	string firstname, lastname; 

	cout << "Option	First	Last" << endl;
	cout << "======================" << endl;

	for(int i = 0; i < numStudents; i++){
		firstname = sampleStudents[i].getFirstName();
		lastname = sampleStudents[i].getLastName();

		cout << i + 1 << ".      " << firstname << "     " << lastname << endl;
	}

	cout <<"Choose the student option number: ";
	cin >> choice;

	return choice; 
}

void addCourses(Student a){
	int numCourses = a.getNumCourses();
	int userAdd=0;
	bool success = true; 

	if(numCourses >= MAX_COURSES){
		cout << a.getFirstName() << " " << a.getLastName() << " has a full schedule" << endl; 
	}

	else if(numCourses < MAX_COURSES){
		while(userAdd + numCourses <= MAX_COURSES){
			cout << "How many courses would you like to add?";
			cin >> userAdd;
			
			if(userAdd + numCourses >= MAX_COURSES){
			cout << a.getFirstName() << " " << a.getLastName() << " already has " << numCourses << " out of 7 courses" << endl;
			}
		}
		
		
		for(int i = 0; i < userAdd && success == true; i++){
		Course alpha;
		string prefix, name[4], nameCopy;
		int number; 
			
		cout << "Enter the course prefix, number, and name: ";
		cin >> prefix >> number; 
		for(int k = 0; k<=4; k++){cin >> name[k];}

		alpha.setPrefix(prefix);
		alpha.setNumber(number);
		
			for(int j = 0; j<=4; j++){
			nameCopy.append(name[j]);
			nameCopy.append(" ");
			
			}

		alpha.setName(nameCopy);
		success = a.addCourse(alpha);
		}
	}
}
		
	
