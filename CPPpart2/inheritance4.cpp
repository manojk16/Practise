//This is called is called runtime Polymorphism it is function function overriding 
//in overriding everything should be same means return type function name and number and type of the argument
// ie function signature should be same
// Question is how we are achieving the Run time Polymorphism it is done be vtable 

#include<iostream>
using namespace std;


class EMP
{

public: 
	int hour;
	int rate;
	int sales;
	EMP()
	{cout<<"Default CTOR called"<<endl;}
	EMP(int h, int r)
	{	
		cout<<"Base class parameter Conmstructor Called"<<endl;
		hour=h;
		rate=r;
	}
	virtual float salary()
	{
		cout<<"Salary of EMP"<<endl;
	}
};
class HR:public EMP
{
public:
	HR(int h, int r):EMP(h,r)//Constructor Intitialization list
	{
		cout<<"HR Constructor Called "<<endl;
	}
	float salary()
	{
		return hour*rate;
	}
};
class SalesPerson:public EMP
{
public:
	SalesPerson(int h, int r, int s):EMP(h,r)
	{
			sales=s;
	}
public:
	float salary()
	{
		return (hour*rate)+(0.20*sales);
	}
};
int main()
{
	/*HR* hr=new HR(300,500);
	cout<<"HR salary is "<<hr->salary()<<endl;
	SalesPerson* Kamal=new SalesPerson(100,200,200000);
	cout<<"SalesPerson Salary is ::"<<Kamal->salary()<<endl;*/
// Now I want to create the base class pointer which point to Derived class Object 
	EMP* ptr=new HR(100,200);
	cout<<"Salary of HR::"<<ptr->salary()<<endl;
	return 0;
}

