// In this case we have to called the default constructor of the base class and it is overhead now how to overcome from this problem 
// by using ctor initialization list go through inheritance2.cpp
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
		hour=h;
		rate=r;
	}
	float salary()
	{
		cout<<"Salary of EMP"<<endl;
	}
};
class HR:public EMP
{
public:
	HR(int h, int r)
	{
		hour=h;
		rate=r;
	}
	float salary()
	{
		return hour*rate;
	}
};
class SalesPerson:public EMP
{
public:
	SalesPerson(int h, int r, int s)
	{
		hour=h;
		rate=r;
		sales=s;
	}

float salary()
{
	return (hour*rate)+(0.20*sales);
}
};
int main()
{
	HR* hr=new HR(300,500);
	cout<<"HR salary is "<<hr->salary()<<endl;
	SalesPerson* Kamal=new SalesPerson(100,200,200000);
	cout<<"SalesPerson Salary is ::"<<Kamal->salary()<<endl;
}
