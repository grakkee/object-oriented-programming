#include "word_analyzer.h" //include header file 

int countLetters(string str){ 
	int count, size, i=0;

	size = str.length();
	count=size;

	for(i=0; i<size; i++){
		if(str[i] <= 'A' || str[i] >= 'z'){
			count--; 
		}
	}
	return count; 

}
int countLowerCase(string str){
		int count = 0, i; 

		for(i = 0; i < str.length(); i++){
			if(str[i] >= 'a' && str[i] <= 'z'){
				count++;
			}
		}

		return count;

}
int countUpperCase(string  str){
	int count=0, i;

	for(i = 0; i < str.length(); i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			count++;
		}
	}

	return count;

}
int countVowels(string str){
	int count=0, i;

	for(i = 0; i < str.length(); i++){
		if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] =='a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			count++;
		}
	}

	return count; 

}