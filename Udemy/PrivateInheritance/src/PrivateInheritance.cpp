//============================================================================
// Name        : PrivateInheritance.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Base{
public:
	int getvalue()const{
		return 1;
	}
	char eat() const{
		cout<<"Base Eat"<<endl;
		return 'a';
	}
	int sleep(){
		cout<<"Base sleep()"<<endl;
		return 1;
	}
	int sleep(int){
		cout<<"Base sleep(int)"<<endl;
		return 2;
	}
};
class Derived:private Base{
public:
	using Base::eat;
	using Base :: sleep;

};

int main() {
	cout << "PrivateInheritance" << endl; // prints PrivateInheritance

	Derived obj;
	obj.eat();
	obj.sleep();
	obj.sleep(7);
	//obj.getvalue();
	return 0;
}
