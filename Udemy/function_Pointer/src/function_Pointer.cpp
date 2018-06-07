//============================================================================
// Name        : function_Pointer.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
	We can declare a pointer to function
*/

#include <iostream>
using namespace std;

void test(){
	cout<<"Hello"<<endl;
}
void test1(int value){
	cout<<"Value is "<<value<<endl;
}
int main() {
	cout << "Function Pointer" << endl; // prints Function Pointer
	test();
	// How can we declare a pointer to function

	void (*ptest)();// ptest is a pointer to a function which has no argument and void return type
	// How it will point to the test function
	ptest=&test; // we can remove the & synbol from here becaaue it is ambiguos as name of the finction iself is the base address
	//or
	ptest=test;
	// How to call the funcrion with pointer
	//*ptest();//it may not work because it return pointer to some thing
	// deference operator shoulde be before () operator apply

	//so
	(*ptest)();
	// As we don't have & symbol then no need to be use of * operator so we can write as below
	(ptest)();// as no * operator so we can remove () as below
	ptest();
	// Now will print 4 times Hello

	// We can do like below also

		void (*ptest1)()=test;
		ptest1();
		test1(7);
		void (*ptest2)(int)=test1;
		ptest2(5);


	return 0;
}
