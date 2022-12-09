#ifndef CALCULATOR_H 
#define CALCULATOR_H

#include <iostream>
using namespace std;

template <typename T>
class Calculator{
	T operand1;
	T operand2; 
public:
	Calculator();
	Calculator(const T& newOperand1, const T& newOperand2);
	
	T getOperand1();
	T getOperand2();

	void getOperands();

	T addition();
	T subtraction();
	T multiplication();
	T division();

};

#include "calculator.cpp"
#endif