/*
 * 10StreamOpOverloading.cpp
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
		std::cout<<"Minutes ="<<Minutes<<std::endl;
		std::cout<<"Seconds= "<<Seconds<<std::endl;
	}
	friend ostream& operator<<(ostream& output,TimeInterval& obj);
	friend istream& operator>>(istream& input, TimeInterval& obj);
	friend void* operator new(size_t, TimeInterval&);
	int operator()(int mili){
		return(Seconds+Minutes*60)*mili;
	}
};


ostream& operator<<(ostream& out, TimeInterval& obj){
	out << "Minute is :"<< obj.Minutes <<"Seconds is ::"<< obj.Seconds<<"\n";

	return out;
}
istream& operator>>(istream& input, TimeInterval& obj){
	input>>obj.Minutes;
	input>>obj.Seconds;
	return input;
}
void* operator new(size_t byte, TimeInterval& obj)
{
	return malloc(byte);
}


int main(){

TimeInterval obj(10,20);
int tot_sec = obj(1000);
std::cout<<"Total Sec is "<<tot_sec<<"\n";

std::cout<<obj<<"\n";
cout<<"ok"<<endl;
std::cin>>obj;

size_t x=3;
TimeInterval* obj1=(TimeInterval*)new(x,obj);




	return 0;
}

