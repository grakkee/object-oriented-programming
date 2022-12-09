//Grace Meredith
//CS 202: Project 6, Calculator
//30 July 2020

#include "calculator.h"
#include "complex.h"

#include <iostream>
using namespace std;

int getCalcType();
int getOperation();
void integerCalculator();
void floatingCalculator();
void complexCalculator();

int main(){

	int userChoice;

	do{
		userChoice = getCalcType();

		if(userChoice == 1){
			integerCalculator();
		}

		else if(userChoice == 2){
			floatingCalculator();
		}

		else if(userChoice == 3){
			complexCalculator();
		}

		else if(userChoice !=0){
			cout << "Please enter a valid option" << endl; 
		}
	}
	while(userChoice != 0);

	return 0;
}

int getCalcType(){
	int choice;

	cout << endl;
	cout << "***CALCULATOR***" << endl;
	cout << "Choose your calculator mode" << endl;
	cout << "1. Integer Values" << endl;
	cout << "2. Floating Point Values" << endl;
	cout << "3. Complex Numbers" << endl;
	cout << "0. EXIT" << endl;
	
	cin >> choice;

	return choice; 
}

int getOperation(){
	int choice;

	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "0. Choose New Mode" << endl;

	cin >> choice;

	return choice; 
}

void integerCalculator(){
	Calculator <int>initial;
	int result, userChoice; 

	do{
		cout << endl;
		cout <<"***INTEGER CALCULATOR" << endl;
		userChoice = getOperation();

		if(userChoice == 1){
			initial.getOperands();
			result = initial.addition();

			cout << endl << "RESULT: " << result << endl; 

		}

		else if(userChoice == 2){
			initial.getOperands();
			result = initial.subtraction();

			cout << endl << "RESULT: " << result << endl;
		}

		else if(userChoice == 3){
			initial.getOperands();
			result = initial.multiplication();

			cout << endl << "RESULT: " << result << endl; 
		}

		else if(userChoice == 4){
			initial.getOperands();

			try{
				result = initial.division();
				cout << endl << "RESULT: " << result << endl; 
			}

			catch(string fail){
				cout << endl << "RESULT: Cannot divide by zero" << endl;
			}

		}

		else if(userChoice != 0){
			cout << "Invalid Operation" << endl;
		}
	}
	while(userChoice !=0);
}

void floatingCalculator(){
	Calculator <float>initial;
	float result;
	int userChoice; 

	do{
		cout << endl;
		cout <<"***DOUBLE CALCULATOR" << endl;
		userChoice = getOperation();

		if(userChoice == 1){
			initial.getOperands();
			result = initial.addition();

			cout << endl << "RESULT: " << result << endl; 

		}

		else if(userChoice == 2){
			initial.getOperands();
			result = initial.subtraction();

			cout << endl << "RESULT: " << result << endl;
		}

		else if(userChoice == 3){
			initial.getOperands();
			result = initial.multiplication();

			cout << endl << "RESULT: " << result << endl; 
		}

		else if(userChoice == 4){
			initial.getOperands();

			if(initial.getOperand2() == 0){
				cout << "RESULT: cannot divide by zero" << endl;
					
			}

			else{
				result = initial.division();

				cout << "RESULT: " << result << endl;
			} 
		
		}

		else if(userChoice != 0){
			cout << "Invalid Operation" << endl;
		}
	}
	while(userChoice !=0);
}

void complexCalculator(){
	Complex initial, changing, result; 
	int userChoice; 

	do{
		cout << endl;
		cout <<"***COMPLEX CALCULATOR" << endl;
		userChoice = getOperation();

		if(userChoice == 1){
			cout << "Please enter operand 1: " << endl;
			cin >> initial;
			cout << "Please enter operand 2: " << endl;
			cin >> changing;

			result = initial + changing;
			cout << "RESULT: " << result;  

		}

		else if(userChoice == 2){
			cout << "Please enter operand 1: " << endl;
			cin >> initial;
			cout << "Please enter operand 2: " << endl;
			cin >> changing;

			result = initial - changing;
			cout << "RESULT: " << result; 
		}

		else if(userChoice == 3){
			cout << "Please enter operand 1: " << endl;
			cin >> initial;
			cout << "Please enter operand 2: " << endl;
			cin >> changing;

			result = initial * changing;
			cout << "RESULT: " << result; 
		}

		else if(userChoice == 4){
			cout << "Cannot divide complex numbers" << endl; 
		}

		else if(userChoice != 0){
			cout << "Invalid Operation" << endl;
		}
	}
	while(userChoice !=0);
}