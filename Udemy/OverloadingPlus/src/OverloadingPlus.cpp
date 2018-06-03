//============================================================================
// Name        : OverloadingPlus.cpp
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
	cout << "Welocme to Overloading" << endl; // prints Welocme to Overloading
	Complex c1(3,4);
	Complex c2(2,3);
	Complex c3=c1+c2;
	cout << c1 <<endl;
	cout << c1+c2 <<endl;
	cout << c1+c2+c3 <<endl;
	Complex c4(4,2);
	Complex c5=c4+7;
	cout << c5 <<endl;
	return 0;
}
