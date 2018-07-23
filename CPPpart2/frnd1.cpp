#include <iostream>
#include "frnd1.h"
using namespace std;
//Chain Copy Constructor ? 
void Distance::show()
{

	cout<<"Total Distance in Meter"<<meter<<endl;
}

int access(Distance& ob)
{

ob.meter=100;
return ob.meter;

}
int main()
{
	Distance obj;
	access(obj);
	cout<<"Value"<<access(obj)<<endl;


	return 0;
}