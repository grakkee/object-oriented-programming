#include "complex.h"

Complex::Complex(){
	real = 0;
	imaginary = 0;
}

Complex::Complex(float newReal, float newImaginary){
	real = newReal;
	imaginary = newImaginary;
}

float Complex::getReal(){
	return real;
}

float Complex::getImaginary(){
	return imaginary;
}

void Complex::setReal(float newReal){
	real = newReal;
}

void Complex::setImaginary(float newImaginary){
	imaginary = newImaginary;
}

Complex Complex::operator+(const Complex& other){
	Complex result; 

	result.real = real + other.real;
	result.imaginary = imaginary + other.imaginary;

	return result; 
}

Complex Complex::operator-(const Complex& other){
	Complex result;

	result.real = real - other.real;
	result.imaginary = imaginary - other.imaginary;

	return result; 
}

Complex Complex::operator*(const Complex& other){
	Complex result;

	result.real = (real * other.real) - (imaginary * other.imaginary);
	result.imaginary = (real * other.imaginary) + (imaginary * other.real);
}

istream& operator>>(istream& input, Complex& other){
	float userReal, userImaginary;

	cout<<"Enter your real component: ";
	input >> userReal;

	cout << "Enter your imaginary component: ";
	input >> userImaginary;

	other.real = userReal;
	other.imaginary = userImaginary; 

	return input; 
}

ostream& operator<<(ostream& output, const Complex& other){
	if(other.imaginary >= 0){
		output << other.real << "+" << other.imaginary << "i" << endl;

	}

	else{
		output << other.real << "-" << other.imaginary << "i" << endl;
	}
}