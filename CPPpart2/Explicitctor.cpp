#include <iostream>
using namespace std;

class Base
{
	
	public:
	int num;
	explicit Base(int a)
	{

		num=a;
	}
	void print()
	{


		cout<<"Member Variable::"<< num <<endl;
	}
};
int main()
{

	Base objbase(10);
	// it will work also like this Base objbase=100; //implcit type conversion value to object type it should not happen 
	// so write explicit before constructor then it will not compile as Base objbase=100;
	// when we have constructor with single arguent it will better to make it explicit 
	objbase.print();
}