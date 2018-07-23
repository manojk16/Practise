#include <iostream>
using namespace std;

class Base
{

public:
	int x;
	 virtual void show()
	{
		cout<<"I am Base"<<endl;
	}
};
class Derived:public Base
{	
	public:
			 inline 	void show()
			{
				cout<<"I am Derived2"<<endl;
			}
};

int main()
{

	//Base obj;
	//obj.show();
Base* ptr=new Derived();
ptr->show();
}