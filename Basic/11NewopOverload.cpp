/*
 * 11NewopOverload.cpp
 *
 *  Created on: 13-Apr-2018
 *      Author: manoj
 */
#include <iostream>
#include <malloc.h>
using namespace std;
class TimeInterval{
	int Minutes;
	int Seconds;
public:
	TimeInterval(int m, int s){
		Minutes=m;
		Seconds=s;

	}
	void print(){
		cout<<"Minutes are ::"<<Minutes<<"Seconds are::"<<Seconds<<endl;
	}
void* operator new(size_t bytes){

	cout <<"Operator Overloading"<<endl;
	void* p = malloc(bytes);
	return p;
}


void operator delete(void* p){
	cout<<"Delete Operator Overloading"<<endl;
	free(p);


}
};

/*void* operator new(size_t bytes, TimeInterval& obj){
  cout<<"Operator Overlods"<<endl;
	return malloc(bytes);
}
void* operator new(size_t byte, TimeInterval& obj)
{
	return malloc(byte);
}*/
int main(){
	TimeInterval obj1(10,20);
	obj1.print();
	cout<<"Overloads"<<endl;
	size_t x =3;
	TimeInterval* obj_new = new TimeInterval(20,30);
	obj_new->print();
	delete obj_new;
	cout<<"Calling ::"<<"\n";
	int *p =new int[0];
	delete p;



	return 0;
}



