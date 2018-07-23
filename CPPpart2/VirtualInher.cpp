//Diamnond problem can be solve by inherting the base class in to derived class virtually 
#include <iostream>
using namespace std;
class A 
{
	public:
	virtual void show()
	{
		cout<<"Inside Class A"<<endl;
	}
};

class B: virtual public A
{
	
} ;
class C: virtual public A
{
	void show()
	{
		cout<<"Inside the class C"<<endl;
	}	
};
class D:public B, public C
{
		public:
		void show()
			{
				cout<<"Inside D class"<<endl;
			}	
};
int main()
{
	A* ptr=new D();
	ptr->show();
	//c* ptr1=new D()
	//ptr1->show();
}