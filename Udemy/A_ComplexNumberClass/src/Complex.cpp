/*
 * Complex.cpp
 *
 *  Created on: 25-May-2018
 *      Author: manoj
 */

#include "Complex.h"



namespace caveofprogramming {

ostream &operator<<(ostream &out, const Complex  &c){
	out << " ( " << c.getReal()<<", " << c.getImaginary() << ") ";
	// here c is const which is calling the method with itself can change the value so not getting resolved after making functions as c
	//const it is working fine
	return out;
}

Complex::Complex():real(0),imaginary(0){
	// TODO  	Auto-generated constructor stub

}
Complex::Complex(double real, double imaginary):real(real),imaginary(imaginary){

}
Complex::Complex(const Complex &other){
	cout << "Copy"<<endl;
	real=other.real;
	imaginary=other.imaginary;
}
const Complex& Complex::operator=(const Complex &other){
	cout<<"In Assignemnt"<<endl;
real=other.real;
imaginary=other.imaginary;
return *this;
}
} /* namespace caveofprogramming */
