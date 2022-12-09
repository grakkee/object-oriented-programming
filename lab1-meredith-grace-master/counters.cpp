#include "counters.h"

int countVowels(string str){
	int index, numVowels = 0;

	for(index = 0; str[index] != '\0'; index++){
		switch(str[index]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				numVowels++;
		}
	}

	return numVowels;
}

int countLowerCase(string word){
	int lowerCtr = 0;

	for(int i = 0; word[i] != '\0'; i++){
		if(word[i] >= 'a' && word[i] <= 'z'){
			lowerCtr++;
		}
	}

	return lowerCtr;
}