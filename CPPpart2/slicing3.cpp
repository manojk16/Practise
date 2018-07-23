#include <iostream>
using namespace std;

class Base
{
	public:	
	int x;
	Base(int a)
	{
		x=a;
		
	}
	virtual void show()
	{
		cout<<"I am in BaSe"<<endl;

	}
		


};

class Derived:public Base
{	public:
	int y;
	Derived(int a, int b):Base(a)
	{
		y=b;
	}
	virtual void show()
	{
		cout<<"I am inside the Derived Class"<<endl;
		cout<<"x=="<<x<<" y="<<y<<endl;		
		}

}; 

void display(Base ptr)
{

	ptr.show();
}



int main()
{
Derived* ptr=new Derived(10,20);
display(ptr);

}
