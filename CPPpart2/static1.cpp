//opoverloading1.cpp
#include "Static1.h"
#include <iostream>

using namespace std;
EMP::EMP(int h, int r)
{

	hour=h;
	rate=r;
	count++;
}
int EMP::getHour() const   //this const says now i cant modified the value only return 
{
	return hour;
}
int EMP::getRate() const
{
	return rate;
}
void EMP::setHour(int h)
{
	
	hour=h;
}
void EMP::setRate(int r)
{

	rate=r;
}
float EMP::calSalary()
{
	return hour*rate;
}
int EMP::count=0;
int main()
{
	EMP obj;
	obj.setHour(200);
	obj.setRate(1200);
	
	cout<<"Obj Salary is "<<obj.calSalary()<<endl; 
	EMP obj1(200,1000);
	cout<<"Obj1 Salary is "<<obj1.calSalary()<<endl;
	//if i want to know how many object created so i ll take one of static counter 
	EMP* obj2=new EMP(200,1200);
	cout<<"Salary of obj2"<<obj2->calSalary()<<endl;
	EMP* obj3=new EMP();
	obj3->setRate(1200);
	obj3->setHour(50);
	cout<<"Salary for the obj3::"<<obj3->calSalary()<<endl;
	cout<<"Total Number of object is "<<EMP::count<<endl;
	cout<<"Total Number of object is "<<obj3->count<<endl;
	//delete obj3;
	//delete obj2;
	//obj3=NULL;
	//obj2=NULL;
	cout<<"Total Number of object is "<<EMP::count<<endl;


	return 0;
}