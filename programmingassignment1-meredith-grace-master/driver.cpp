//Grace Meredith
//Project 1: Text Anaylisis 
// 21 June 2020

#include "word_analyzer.h" //include header file

#include <iostream> //libraries
#include <string>
#include <fstream>
using namespace std;

#define MIN_ARGS 2 //macros
#define MAX_LEN 25

int getWords(int size, char arr[][MAX_LEN], string userFile); //function declarations 
string findMaxWord(int size, char arr[][MAX_LEN]);

int main(int argc, char* argv[] ) // include command line args 
{ 	
	if(argc<MIN_ARGS){ // case no file 
	cout << "Correct usage: " << endl << "./text_analyzer filename"<< endl;
	return 0;
}

	string userFile = argv[1], maxWord; char a[MAX_LEN][MAX_LEN];
	int s, numL, numLC, numUC, numV;

	s = getWords(s, a, userFile);
	if(s==0){
		return 0;
	}

	for(int i = 0; i < s; i++){
		numL += countLetters(a[i]);
		numLC += countLowerCase(a[i]);
		numUC += countUpperCase(a[i]);
		numV += countVowels(a[i]);
	}
	maxWord = findMaxWord(s, a);

	cout << "There are " << numL << " letters in your file." << endl;
	cout << "There are " << numLC << " lower case letters in your file." << endl;
	cout << "There are " << numUC << " upper case letters in your file." << endl;
	cout << "There are " << numV << " vowels in your file." << endl;
	cout << "The last word alphabetically is: " << maxWord << endl;

	return 0; 
}

int getWords(int size, char arr[][MAX_LEN], string userFile){
	ifstream input; size = 0; 
	input.open(userFile);

	if(!input){ //case file does not exist 
		cout << "Sorry, could not open " << userFile << " for reading." << endl;
		return 0;

	}
	else{ while(input >> arr[size]){ 
			size++; 
		}
	}
	size++;

	input.close();

	return size; 

}

string findMaxWord(int size, char arr[][MAX_LEN]){
	int i=1, o=0; string word=arr[o]; 

	while (i < size && o < size){
		if(arr[i][0] >= arr[o][0]){
			word=arr[i];
			o++;
		}

		else{ 
			word=arr[o];
			i++; 
		}

	}

	return word; 

}