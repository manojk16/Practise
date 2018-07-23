#include <iostream>
using namespace std;

class Base
{	protected:
	int i;
	public:
		Base(int a)
		{
			i=a;
		}
		virtual void display()
		{
			cout <<"I am in Base Class"<<endl;
		}
		

};
class Derived:public Base
{
	int j;
public:
	Derived(int a, int b):Base(a)
	{
	j=b;
	}
	virtual void display()
	{
		cout<<"I am In Derived Class Object "<<i<<"J ="<<j<<endl;
	}


};
void somefunc(Base* ob)
{
	ob->display();
}

int main()
{
Derived 
/*Base* bp=new Base(33);
Derived* dp=new Derived(45,54);
somefunc(bp);
somefunc(dp);*/
}
