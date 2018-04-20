/*
 * virtualDistructor.cpp
 *
 *  Created on: 18-Apr-2018
 *      Author: manoj
 */


#include <iostream>

class Test{
private:
	int m_test;
public:
	Test(){}
	Test(int x){m_test=x;}
	virtual ~Test(){}
};

class D_Test:public Test{

public:
	void func(){std::cout<<"In func"<<std::endl;}

};


int main(){
	D_Test obj;
	Test *ptr = &obj;
	obj.func();
}
