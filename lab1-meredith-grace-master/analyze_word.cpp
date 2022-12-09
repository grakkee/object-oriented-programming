//Lab 1: makefiles
//Author: Erin Keith
//Date: 6/10/20
//analyze a word

#include "counters.h"

#include <iostream>
#include <string>
using namespace std;


int main(){
	string word;
	int vowels = 0, lower = 0;

	cout << "Please enter your word: ";
	cin >> word;

	vowels = countVowels(word);
	cout << "Your word has " << vowels << " vowels." << endl;


	lower = countLowerCase(word);
	cout << "Your word has " << lower << " lower case letters." << endl;

	return 0;
}

