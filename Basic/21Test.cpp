/*
 * 21Test.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: manoj
 */



#include <iostream>
using namespace std;
class A
{
	virtual void fun(){}
	virtual void fun2(){}

	

};
class B: public A
{
	virtual void fun4(){}

};
int  main()
{
	A *ptr=new B();
	cout<<sizeof(A)<<endl;
	cout<<sizeof(B)<<endl;
}
