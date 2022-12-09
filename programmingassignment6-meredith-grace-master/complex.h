#ifndef COMPLEX_H
#define COMPLEX_H

#include<iostream>
using namespace std;

class Complex{
	float real;
	float imaginary;

public:
	Complex();
	Complex(float, float);

	float getReal();
	float getImaginary();

	void setReal(float);
	void setImaginary(float);

	Complex operator+(const Complex&);
	Complex operator-(const Complex&);
	Complex operator*(const Complex&);

	friend istream& operator>>(istream& input, Complex& other);
	friend ostream& operator<<(ostream& output, const Complex& other);
};

#endif