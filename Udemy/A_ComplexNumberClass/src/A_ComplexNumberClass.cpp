//============================================================================
// Name        : A_ComplexNumberClass.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "Complex.h"

using namespace caveofprogramming;
int main() {
	cout << "Welocme to Complex Class Number " << endl; // prints Welocme to Overloading;
	Complex C1;
	Complex C2(2,3);
	Complex C3=C2;
	Complex C2=C3;
	return 0;
}
