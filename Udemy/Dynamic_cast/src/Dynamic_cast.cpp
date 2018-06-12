//============================================================================
// Name        : Dynamic_cast.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Parent{
public:
	virtual void speak(){
		cout<<"In Parent"<<endl;
	}
};
class Brother:public Parent{

public:
	void speak(){
		cout<<"In Brother"<<endl;
	}
};
class Sister:public Parent{
public:
void speak(){}
};
int main() {
	cout << "Dynamic_cast" << endl; // prints Dynamic_cast

	Parent parent;
	Brother brother;
	Parent *pptr=&brother;
	cout<<pptr<<endl;
	Brother *pbb=static_cast<Brother *>(pptr);
	cout<<pbb<<endl; // Both Address is same*/

	// If we are having a pointer of super class type to sub class type we want might later on a pointer to the sub class type to Super class and you want to do it by static_casts

	// Static cast is very unsafe because what will happen if
	Parent *pptr1=&brother;

	Brother *pbb1=static_cast<Brother *>(pptr1);
	Brother *pbb2=dynamic_cast<Brother *>(pptr1); // Error : parent is not polymorphic the make method in to parent class as virtual
	if(pbb2==NULL){
		cout<<"Invalid Cast"<<endl;
	}else{
		cout<<pbb2<<endl;
	}
// It is giving Invalid cast because it really doesn no make any sense to cast to a pointer which points to the parent ype object to the child type object
	// that is particularly very unsafe and dynamic cast return no pinter in that case
 // while static_cast did it
/*
 * So in Static cast we have tell first which type of object needs to change in to sub class,
 * So it will be better to use dynamic cast which detect the type of object at run type
 *
 *
*/


	//


	return 0;
}
