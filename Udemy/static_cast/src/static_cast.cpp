//============================================================================
// Name        : static_cast.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Parent{
public:
	void speak(){
		cout<<"IN PArent"<<endl;
	}

};
class Brother:public Parent{
public:
	void speak(){
		cout<<"In Brother "<<endl;
	}

};
class Sister:public Parent{
	public:
	void speak(){
		cout<<"In Sister"<<endl;
	}

};

int main() {



	cout << "static_cast" << endl; // prints static_cast
	Parent parent;
	Brother brother;


	float value=3.5;
	cout<<value<<endl;
	// c style
	cout<<(int)value<<endl;
	// c++ style
	cout<<int(value)<<endl;
	// c++ more presize <<endl;
	cout<<static_cast<int>(value)<<endl;

	//Parent *ptr=&brother; // explicit type casting

	//Suppose we have

	// Brother *pb=&parent;// It will work explicitly If I want to it should work force fully
	// Then
	// Brother *pbb=static_cast<Brother *>(&parent);
	//cout << pbb <<endl;

	// Say


	Parent *ppb=&brother; // Parent type pointer is pointing to Brother Type Object  It is Safe
	// or
	Brother  *pbb=static_cast<Brother *>(ppb); // But this is not the safe because Brother Methods does not present in to Parent
	pbb->speak();

	return 0;
}
