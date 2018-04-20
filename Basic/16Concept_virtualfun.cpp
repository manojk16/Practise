/*
 * 16Concept_virtualfun.cpp
 *
 *  Created on: 15-Apr-2018
 *      Author: manoj
 */
#include <iostream>

using namespace std;



class A{
	virtual void fun()=0;
};

class B{
	virtual void fun_b()=0;
};

class C:public A,public B{
	void fun(){

	}
	void fun_b(){

	}
};


int main(){


	A* obj=new C();
	B* obj3= new C();
	C obj2;
	cout<<"Size of class C:"<<sizeof(C);


	cout << "Size of Object"<<sizeof(obj3);
}



