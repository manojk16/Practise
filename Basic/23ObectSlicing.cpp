/*
 * 23ObectSlicing.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: manoj
 */



#include<iostream>
using namespace std;



class Base{
public:
	int x;
public:
	explicit Base(int var){
		x=var;
	}
	virtual void display(){
		cout<<"X is ="<<x<<endl;
	}
};

class Derived:public Base{
	int z;
public:
Derived(int a,int b): Base(a){
		z=b;

	}
	void display(){
		cout <<"In derived Class z=:"<<z<<" x="<<x<<endl;
	}
};

void somefun(Base* obj){
	obj->display();
}

int main(){
	 /*Derived d_obj(10,20);
	  Base b_obj(15);
	 //somefun(b_obj);
	 somefun(d_obj);//Slicing*/
	 //d_obj.display();
	Base * b_obj=new Base(12);
   Derived * obj=new Derived(17,15);
   somefun(b_obj);
   somefun(obj);


}
