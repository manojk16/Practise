/*
 * 8OpPlusOverload.cpp
 *
 *  Created on: 13-Apr-2018
 *      Author: manoj
 */
#include <iostream>

class TimeInterval{
	int Minutes;
	int Seconds;
public:
	TimeInterval(int m, int s){
		Minutes=m;
		Seconds=s;
		std::cout<<"In CTOR\n";

	}
// Post Increment Overloading
	TimeInterval operator++(){
		Minutes=Minutes+1;
		Seconds=Seconds+1;
		return TimeInterval(Minutes,Seconds);
	}

// Binary + Operator Increment Overloading

	/*TimeInterval operator+(const TimeInterval& rhs){
		Minutes=this->Minutes+rhs.Minutes;
		Seconds=this->Seconds+rhs.Seconds;
		std::cout<<"In + Operator"<<std::endl;
		return TimeInterval(Minutes,Seconds);

	}*/
	void print(){
		std::cout<<"Minutes is =="<<Minutes<<std::endl;
		std::cout<<"Seconds is =="<<Seconds<<std::endl;

	}
	friend TimeInterval operator+(const TimeInterval&,const TimeInterval&); // for outside from the class
};
TimeInterval operator+(const TimeInterval& lhs,const TimeInterval& rhs){
	int m,s;
	m=lhs.Minutes + rhs.Minutes;
	s=lhs.Seconds + rhs.Seconds;
	std::cout<<"In OPerator outside"<<std::endl;

	return TimeInterval(m,s);
}

int main(){

	TimeInterval obj1(20,30);
	obj1.print();
	TimeInterval obj2=++obj1;
	obj2.print();
	TimeInterval obj3=obj1+obj2;
	obj3.print();
}
