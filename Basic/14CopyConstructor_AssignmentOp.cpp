/*
 * 14CopyConstructor_AssignmentOp.cpp
 *
 *  Created on: 14-Apr-2018
 *      Author: manoj
 */

#include <iostream>

using namespace std;

/*
class TimeInterval{
	int Minutes;
	int Seconds;
	public:
	TimeInterval(){
		cout<<"Default Constructor"<<endl;
	}

	TimeInterval(int m, int s){
		Minutes=m;
		Seconds=s;
	}
	//Copy Constructor
	TimeInterval(const TimeInterval& obj){
		cout<<"Copy Constructor Called"<<endl;
		Minutes=obj.Minutes;
		Seconds=obj.Seconds;
	}

	//Assignement Operator

	TimeInterval operator=(TimeInterval& obj){
		cout<<"Assignment Operator Called"<<endl;
		Minutes=obj.Minutes;
		Seconds=obj.Seconds;
		return *this;
	}

};
int main(){

	cout<<"Defuslt"<<endl;
	TimeInterval obj1(10,20);
	cout<<"Copy"<<endl;
	TimeInterval obj2(obj1);
	cout<<"Assingment"<<endl;
	obj1=obj2;
	return 0;
}


*/
class Interval
{
	public:
		int minute;
		int second;
	public:
	Interval()
	{

	cout<<"Defualt ctor called "<<endl;
	}
	Interval(const Interval& obj)//what ever existing object we have that will be in the form of const
	{
		cout<<"Copy Constructor Called"<<endl;
		minute=obj.minute;
		second=obj.second;
	}
	Interval operator=(Interval& obj)  // Assignment operator Overloading
{
	cout<<"Assignment operator called"<<endl;
	minute=obj.minute;
	second=obj.second;
	//return *this;
}
};

int main()
{
	Interval obj;
	Interval obj2(obj);//copy constructor getcalled
	Interval obj3;
	obj3=obj;// here copy constructor will now called bcz we are not
				//passing any object as an argument
				// when we have any existing object and we are copying then assignment
				// operator will called;
	Interval obj4=obj;// Again Copy Constructor Called

	return 0;
}
