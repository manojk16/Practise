/*
 * 15Inheritance.h
 *
 *  Created on: 14-Apr-2018
 *      Author: manoj
 */

#ifndef _EMP
#define _EMP
#include <iostream>
using namespace std;
class Employee{
protected:
	int hour;
	int rate;
	public:
	Employee(int h, int r){
		hour=h;
		rate=r;
	}
	virtual float getSalary(){
		cout<<"Inside the Base Class"<<endl;
		float sal=hour*rate;
		return sal;
	}

};

class SoftEng:public Employee{
public:
	SoftEng(int h, int r):Employee(h,r){
		cout<<"Inside SoftEng Constructor"<<endl;
	}

	float getSalary();
};

class SalesPerson:public Employee{
public:
	float Sales;
	SalesPerson(int h, int r, int s):Employee(h,r){
		Sales=s;
	}
	float getSalary();
};

#endif


