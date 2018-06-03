//============================================================================
// Name        : Overloading_the_dereferece_operator.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"
using namespace caveofprogramming;
using namespace std;

int main() {
	cout << "Overloading_the_dereferece_operator" << endl; // prints Overloading_the_dereferece_operator
	Complex c1(2,4);
	cout << (*c1) + (*Complex(4,3)) <<endl;

	//cout << *c1 + *Complex(4,3 ) << endl;

	return 0;
}
