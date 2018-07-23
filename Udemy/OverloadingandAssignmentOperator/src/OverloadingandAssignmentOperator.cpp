//============================================================================
// Name        : Overloading.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{
	int id;
	string name;
public:
	 Test():id(0),name(""){}
	Test(int id, string name):id(id), name(name){}
	void print(){
		cout<<"id-->"<<id<<", "<<"Name-->"<<name<<endl;
	}
	const Test& operator=(const Test& other){
		cout<<"Assignment Operator is called"<<endl;
		id=other.id;
		name=other.name;
		return *this;
	}
	Test(const Test &other){
		cout << "Copy Constructor Running "<<endl;
		*this=other;
	}
};

int main() {
	cout << "Welocme to Overloading" << endl; // prints Welocme to Overloading
	Test test1(10,"Mike");
	cout << "Print Test 1\n"<<flush;
	test1.print();
	Test test2(20,"Bob");
	cout << "Print Test 2\n"<<flush;
	test2=test1; //sallow Copy Assignment operator -> To Implement it first we havre to look in to return type here return type is void
	// But we think about
	Test test3;
	test3=test2=test1;// It is method chaining and with in this test2=test1 returning a reference we can say it as we are calling methid test2 and passing test1 as an argument
// So return value of =should be reference to the object
	test3.operator=(test2);
	cout << "Print Test 3\n"<<flush;

			test3.print();// it will work
			// It is equivaent to test3=test2; So lets implement the assignment OPrator
			Test test4=test1;
			test4.print();

			// If we get pointer in to the object then we can't do shallow Copy

	return 0;
}
