#include "calculator.h"

template<typename T>
Calculator<T>::Calculator(){
	operand1 = 0;
	operand2 = 0;
}

template<typename T>
Calculator<T>::Calculator(const T& newOperand1, const T& newOperand2){
	operand1 = newOperand1;
	operand2 = newOperand2;
}

template<typename T>
T Calculator<T>::getOperand1(){
	return operand1;
}

template <typename T>
T Calculator<T>::getOperand2(){
	return operand2;
}

template <typename T>
void Calculator<T>::getOperands(){
	cout << "Please enter operand 1: ";
	cin >> operand1;
	cout << "Please enter operand 2: ";
	cin >> operand2; 
}

template <typename T>
T Calculator<T>::addition(){
	return (operand1 + operand2);
}

template <typename T>
T Calculator<T>::subtraction(){
	return (operand1 - operand2);

}

template <typename T>
T Calculator<T>::multiplication(){
	return (operand1 * operand2);
}

template <typename T>
T Calculator<T>::division(){
	if(operand2 != 0){
		return (operand1 / operand2);
	}
	 
}