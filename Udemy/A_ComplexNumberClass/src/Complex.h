/*
 * Complex.h
 *
 *  Created on: 25-May-2018
 *      Author: manoj
 */
#include <iostream>
#ifndef COMPLEX_H_
#define COMPLEX_H_
using namespace std;
namespace caveofprogramming {

class Complex {
	double real;
	double imaginary;

public:
	Complex();
	Complex(double real, double imaginary);
	Complex(const Complex &other);
	const Complex & operator=(const Complex &other);
};

} /* namespace caveofprogramming */

#endif /* COMPLEX_H_ */
