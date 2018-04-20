/*
 * 18staticcast.cpp
 *
 *  Created on: 15-Apr-2018
 *      Author: manoj
 */

#include <iostream>
#include <typeinfo>

using namespace std;


class Employee{
public:
	int hour;
	int rate;
	int sales;
	Employee(int h, int r){
		hour=h;
		rate=r;
		sales=0;
	}
	virtual float getSalary(){
		cout<< "Base Class GetSalary Called"<<endl;
		return 0;
	}
};
class SoftEngg:public Employee{
	public:
	SoftEngg(int h, int r):Employee(h,r){}
	float getSalary(){
		cout<<"Software Engineering get Salary Called"<<endl;
		return(hour*rate);
	}
};
class SalesPerson:public Employee{
public:
	SalesPerson(int h, int r, int s):Employee(h,r){
		sales=s;
	}
	float getSalary(){
		cout<<"Sales Person get Called "<<endl;
		return(hour*rate+0.5*sales);
	}
};

void CalCulateSalary(Employee* Dept[]){

	float total=0;
	float f1=0;
	for(int i=0;i<=3;i++){
		if(typeid(SoftEngg)==typeid(*Dept[i])){
			SoftEngg *ptr=static_cast<SoftEngg*>(Dept[i]);
			float f1=ptr->getSalary();
			total=f1+total;
		}
	}
	cout<<"Total Salary is "<<total<<endl;
}


int main(){
	Employee *Dep[]={new SalesPerson(200,500,10000),new SoftEngg(250,700),new SalesPerson(200,450,50),new SalesPerson(200,800,5000)};
	CalCulateSalary(Dep);

	return 0;
}
