/*
 * 13PostPreOverloading.cpp
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
	void Print(){

		cout<<"Minutes are ::"<<Minutes<<endl;
		cout<<"Seconds are ::"<< Seconds<<endl;
	}
	TimeInterval(int m, int s){
		Minutes=m;
		Seconds=s;
	}
	TimeInterval operator++(){
		cout<<"In Pre Increment Oprator Overloading"<<endl;
		Minutes=this->Minutes+1;
		Seconds=this->Seconds+1;

		return TimeInterval(Minutes, Seconds);


	}

	//Post Increment
	TimeInterval operator++(int){
			cout<<"In Post Increment Oprator Overloading"<<endl;
			/*Minutes=this->Minutes+1;
			Seconds=this->Seconds+1;*/
			const TimeInterval old(*this);
			++(*this);

			return old;


		}
};

int main(){

	TimeInterval obj1(10,20);

	obj1++;
	cout<<"pre"<<endl;
	++obj1;
	obj1.Print();
}


