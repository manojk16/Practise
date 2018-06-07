//============================================================================
// Name        : Object_Slicing.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Parent{
	int one;
public:
	virtual  void print(){
		cout<<"Parent"<<endl;
	}
	Parent():one(0){}
	Parent(const Parent &obj):one(0){
		one=obj.one;
		cout<<"Copy parent Construcotr"<<endl;
	}
	virtual ~Parent(){
		cout<<"Destructor"<<endl;
	}
};
class child: public Parent{
	int two;
public:
	child():two(0){}
	void print(){
		cout<<"Child"<<endl;
	}
};

void printout(Parent &obj){
	obj.print();
}
int main() {
	cout << "Object_Slicing" << endl; //
	child c1;
	Parent &p1=c1;
	p1.print(); // child
	printout(p1); // child
	Parent p2=child();// it is calling implicit copy constructor copy ctor
	p2.print(); // parent
	return 0;
}
