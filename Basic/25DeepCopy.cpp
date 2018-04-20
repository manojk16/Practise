/*
 * 25DeepCopy.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: manoj
 */


#include <iostream>

using namespace std;

class Deep_copy{
	int *x;
	int n;
public:
	Deep_copy():x(NULL),n(10){

	}
	Deep_copy(const Deep_copy& obj){
		cout<<"Copy Constructor Called"<<endl;
		n=obj.n;
		x =new int[n];
	}
	Deep_copy& operator=(const Deep_copy& obj){
		cout<<"Assignment Operator Called"<<endl;
		n=obj.n;
		x=new int[n];
		return *this;
	}

	void Allocate(int n){
		this->n=n;
		x= new int[this->n];
	}
	int *get(){
		return x;
	}
};
int main(){
	Deep_copy obj;
	Deep_copy obj2=obj;
	Deep_copy obj3;
	obj3=obj2;
	obj3.Allocate(10);
	int *x=obj3.get();
	cout<<"Value of x ="<<*x<<endl;
	return 0;
}
