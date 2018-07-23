#include <iostream>
using namespace std;
//Chain Copy Constructor ? 

class Base
{
	
	public:
	int num;
	Base(int a, int y=0, int z=10)// if I am writing to argument here then no need to wrtite explicit 
	// if Base(int a, int y=0, int z=0) here y and z optional then we have to write explicit  int y=0, int z=0)// if I am writing to argument here then no need to wrtite explicit 
	// if Base(int a, int y=0, int z=0) here y and z optional then we have to write explicit 
	{

		num=a;
	}
	void print()
	{


		cout<<"Member Variable::"<<num;
	}
};
int main()
{

	Base objbase=10;
	// it will work also like this Base objbase=100; //implcit type conversion value to object type it should not happen 
	// so write explicit before constructor then it will not compile as Base objbase=100;

	objbase.print();
}
