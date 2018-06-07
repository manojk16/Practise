//============================================================================
// Name        : Abstract_Class.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{
public:
	Animal(){
		cout<<"Running the constructor of Abstract Class"<<endl;
	}
	virtual void run()=0;
	virtual void speak()=0;
};
class Dog:public Animal{
public:
	void speak(){
		cout<<"Whuuu!!"<<endl;
	}
};
class LibraDor:public Dog{
public:
	LibraDor(){
		cout<<"New Librador"<<endl;
	}
	void run(){
		cout<<"Librador is running"<<endl;
	}

};

int main() {
	cout << "Abstract_Class" << endl; // prints Abstract_Class


	LibraDor lib;
	lib.speak();
	lib.run();

	//LibraDor labs[5];
	// We can't create object or Array from Animal class because when we create an array of object it  runs the constructor
	// We can't create the object of the Animal Class but we can Create the ANimal class Pointer '


	Animal *animals[5]; // We can create pointer of arrays to super class
	animals[0]=&lib;
	animals[0]->speak();


	return 0;
}
