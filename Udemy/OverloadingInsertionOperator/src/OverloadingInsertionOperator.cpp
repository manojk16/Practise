//============================================================================
// Name        : OverloadingInsertionOperator.cpp
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
	friend ostream &operator<<(ostream & out, const Test & test); //Either we can use the get Method or we can make it friend function
};
ostream &operator<<(ostream & out, const Test & test){
	out << test.id <<":: "<<test.name<<endl;
	return out;
}


int main() {
	cout << "Welocme to Overloading" << endl; // prints Welocme to Overloading
	Test test1(10,"Mike");
	cout << test1 <<endl; // << having two operands 1 is cout and 2nd is test , << has left right associativity so cout << test1 return the object which. Because first argument of this
	// << operator is not type test so we cant implement is a a method so to do that we have to make it as a friend function << it has to return a reference to ostrem so return type will be ostream&
	// ostream is type of cout
	// Fist argument will be of type ostream &  and 2nd argment will be an object to reference of Test class
	return 0;
}
