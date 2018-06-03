//============================================================================
// Name        : Overloading_Comparision_operator.cpp
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
	cout << "Overloading_Comparision_operator" << endl; // prints Overloading_Comparision_operator
	Complex c1(3,2);
	Complex c2(3,2);
	if(c1==c2){
		cout<<"equal"<<endl;
	}else{
		cout<<"Not Equal"<<endl;
	}if(c1!=c2){
		cout<<"NOt Equal"<<endl;
	}
	else{
		cout<<"equal"<<endl;
	}

	return 0;
}
