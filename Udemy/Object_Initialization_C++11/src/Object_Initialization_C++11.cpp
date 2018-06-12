//============================================================================
// Name        : Object_Initialization_C++11.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{

	int id{3};
	string name{"Manoj"};
public:
	Test()=default;
	//Test(const Test& other)=default; //default copy constructor
	// But every time you don't want the default Iplementation
	Test &operator=(Test &other)=default;
	Test(const Test& other)=delete;

	// suppose we want object shuld not be copyable;




	Test(int id):id(id){}
	void print(){
		cout<<id<<" : "<<name<<endl;
	}
};


int main() {
	cout << "Object_Initialization_C++11" << endl; // prints Object_Initialization_C++11
	Test test;
	test.print();

	Test test2(77); // With out default constructor it will not override the value of default initialization so take the default constructor

	//Test test3=test2;
	test2=test;
	test2.print();

	return 0;
}
