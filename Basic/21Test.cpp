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
	virtual void fun()
	{}

};
class B: public A
{
	virtual void fun4()
	{}

};
int  main()
{
	A obj;
	cout<<sizeof(A)<<endl;
	cout<<sizeof(B)<<endl;
}
