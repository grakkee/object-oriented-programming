//Grace Meredith
//CS 202: Lab 2
// 18 June 2020

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#define MAX_CHAR 25
#define MIN_ARGS 3

void copy(string input, string output);

int main(int argc, char* argv[]){
	if(argc < MIN_ARGS){
		cout << "Correct usage: " << endl << "./copy inputFile outputFile" << endl;
		return 0;
	}

	string i = argv[1];
	string o = argv[2]; 

	copy(i, o);

	return 0;
}

void copy(string input, string output){
	string line;
	ifstream inputFile;
	ofstream outputFile;

	inputFile.open(input);
	if(!inputFile){
		cout << "Sorry, could not open " << input << " file for reading" << endl;
	}

	(outputFile.open(output));
	if(!outputFile){
		cout << "Sorry, could not open " << output << " file for writing" << endl;
	}

	while(getline(inputFile,line)){
		outputFile << line; 
	}
	inputFile.close();
	outputFile.close();
}