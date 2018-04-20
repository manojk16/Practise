/*
 * 17cocept_vir.cpp
 *
 *  Created on: 15-Apr-2018
 *      Author: manoj
 */
#include <iostream>


using namespace std;


class A{
public:
virtual void fun_a()=0;
};

class B:public A{
	/*void fun_a(){
		cout<<"In B"<<endl;
	}*/
};
class test:public B{
	void fun_a(){
		cout <<"In Test"<<endl;
	}
};

int main(){

A* b_ptr=new test();
b_ptr->fun_a();
}




