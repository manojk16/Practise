//============================================================================
// Name        : Private_Inheritance.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Private Inheritance one of the way to Implement of has -a relation ship
#include <iostream>
using namespace std;

/*class Engine{
private :
	int cylinder;
public:
	Engine(int nc){
		cylinder=nc;
	}
	int getCylinder(){
		return cylinder;
	}
	void start(){
		cout<<getCylinder()<< " Cylinder Engine Started :"<<endl;
	}
};
class Car:private Engine{
public:
	Car(int nc=4):Engine(nc){}
	void start(){
		cout<<"Car With "<<Engine::getCylinder()<<" Cylinder Started "<<endl;
		Engine::start();
	}
};

int main() {
	cout << "Private_Inheritance" << endl; // prints Private_Inheritance

	Car c(8);
	c.start();
	return 0;
}*/

// Composition
class Engine{
	int cylinder;
public:
	Engine(int nc){
		cylinder=nc;
	}
	void start(){
		cout << "Start The Engine With " << getcylinder() <<endl;
	}
	int getcylinder(){
		return cylinder;
	}
};


class Car{
private :
	Engine eng;
public:
	Car(int n):eng(n){

	}
	void start(){
		cout << "Car With "<<eng.getcylinder()<<"Cylinder Engine Satrted "<<endl;
		eng.start();
	}
};


int main(){
	Car c(8);
	c.start();
	return 0;
}


// Composition V/s Private Inheriatcnce :

/*
	Similiarties: In Both the cases there are Engine Member Object
In


*/
