#include <iostream>
using namespace std;

// if we are defing any func inside the calss by defualt complier treatr it as inline function 
// execution will be fast but file size will increase 

class Base
{	private:
	int x=10
	public:
	void show();
};
inline void Base::show()
{
	x=10;
	cout<<"Hello Guys "<<endl;
}
int main()
{

	Base obj;
	obj.show();
	return 0;
}