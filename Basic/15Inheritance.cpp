/*
 * 15Inheritance.cpp
 *
 *  Created on: 14-Apr-2018
 *      Author: manoj
 */

#include "15Inheritance.h"


float SoftEng::getSalary(){
	cout<<"Inside SoftWare Engineering Sales Person"<<endl;
	float sal= hour*rate;
	return sal;
}

float SalesPerson::getSalary(){
	cout<<"Inside the Sales Person"<<endl;
	float sal=hour*rate+Sales*0.5;
	return sal;
}



int main(){
	cout<<"Going to make Software Engg object"<<endl;
	SoftEng* Manoj = new SoftEng(250,1200);
	cout<<"Going to make Software Engineering GetSalary"<<endl;
	cout<<"Software Engineer Salary"<<Manoj->getSalary()<<endl;
	cout<<"Going to make Sales Person Object with the help of the pointer which points to the base part of the Sales Person"<<endl;
    Employee* Sanju= new SalesPerson(250,1200,25000);
    cout<<"Sanju(Ptr to base calss) Salary"<<Sanju->getSalary()<<endl;
	Employee* p;
	SalesPerson obj(250,1200,25000);
	p=&obj;
	cout<<"Sanju(Ptr to base calss) Salary"<<p->getSalary()<<endl;
	return 0;
}




