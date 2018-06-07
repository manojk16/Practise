//============================================================================
// Name        : Decltype_typeid.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>
using namespace std;
//Decltype is a key word in C++11 and typeid is already present in to C++ 98



int main() {
	cout << "Decltype_typeid" << endl; // prints Decltype_typeid
	int value;
	double value2;
	string name;
	int x=10;
	/*cout << typeid(value).name()<<endl; //object having the type information I want to know the name of this type
	cout << typeid(value2).name()<<endl;
	cout << typeid(name).name()<<endl;*/
	decltype(name) Name="Bob";
	decltype(x) y=20;
	cout << Name <<endl;
	cout << y <<endl;
	return 0;
}
