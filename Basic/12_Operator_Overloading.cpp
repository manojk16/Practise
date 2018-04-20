/*
 * 12_Operator_Overloading.cpp
 *
 *  Created on: 14-Apr-2018
 *      Author: manoj
 */
#include <iostream>

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
	cout<<"Minutes are:"<<Minutes<<endl;
	cout << "Seconds are :: "<<Seconds << endl;
}

TimeInterval operator==(const TimeInterval& rhs){
	Minutes==rhs.Minutes;
	Seconds==rhs.Seconds;
	cout<<"Overloading Done"<<endl;
	return TimeInterval(Minutes,Seconds);
}
TimeInterval operator!=(const TimeInterval & rhs){
		Minutes==rhs.Minutes;
		Seconds==rhs.Seconds;
		cout<<"Overloading Done of not equal to"<<endl;
		return TimeInterval(Minutes,Seconds);
}


// [] Index Operator
int operator[](int index){
	cout<<"Enrr in t i"<<endl;
	if(index==0){
		return Minutes;
	}
	else
		return Seconds;
}


};


int main(){


	TimeInterval obj1(20,30);
	obj1.print();
	TimeInterval obj2(20,30);
	obj2.print();

	obj1==obj2;
	TimeInterval obj3(10,20);
	cout<<"!=="<<endl;
	obj1!=obj3;
	obj3.print();

	TimeInterval obj4(20,30);
	cout << "Minutes =="<<obj4[0]<<"Seconds are"<<obj4[1]<<endl;
}

