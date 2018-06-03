//============================================================================
// Name        : A_ComplexNumberClass.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"
using namespace std;
using namespace caveofprogramming;
int main() {
	cout << "Welocme to Complex Class Number " << endl; // prints Welocme to Overloading;
	Complex c1(2,3);
	Complex c2=c1;
	Complex c3=c2;

	cout << c2 << c3 << endl;

}
