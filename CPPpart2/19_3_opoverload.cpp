//overloading of binary operator
#include<iostream>
using namespace std;

class TimeInterval
{
private:
int Minute;
int Second;
public:
	TimeInterval(int m,int s)
	{
		Minute=m;
		Second=s;
	}
void print()
	{
		cout<<"Minute::"<<Minute<<" "<<"Second::"<< Second<<endl;
	}
	//++ Operator Overloading 
	TimeInterval operator++()
	{
		Minute=Minute+1;
		Second=Second+1;
		//return TimeInterval(Minute,Second);//Here We are returning the Constructor of class 
		return *this;
	}
TimeInterval operator++(int)
	{
		Minute=Minute+1;
		Second=Second+1;
		//return TimeInterval(Minute,Second);//Here We are returning the Constructor of class 
		return *this;
	}
 TimeInterval operator+(TimeInterval& obj2)//here to take the reference is a good practise
 {
 	Minute=Minute+obj2.Minute;
 	Second=Second+obj2.Second;
 	return *this;
 }
};
	int main()
	{	TimeInterval obj(20,30);
	 	obj.print();
		// if i ll write 
	 // obj++ compiler says no operator .....
	 // Soluiton is operator Overloading 
	 //TimeInterval b=++obj;
	++obj;
	 obj.print();
cout<<"After post++"<<endl;
	obj++;
	obj.print();
	TimeInterval obj1(5,10);
	TimeInterval obj2(10,20);
	TimeInterval obj3=obj1+obj2;
	cout<<"After Overload ++"<<endl;
	obj3.print();
	return 0;
	}