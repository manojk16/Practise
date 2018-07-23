// Introduction to NameSpace 
#include <iostream>
namespace alpha
{
	int first=10;
	int second=20;
}

namespace beta
{
	int first=30;
	int second=40;
	//int third;
}
namespace gamma
{

	//int first=50;
	int second=60;
	int third=70;
}
int main()
{
//int sum=first+second+third;//with defning namespace compiler get confused which one is to selected 
	using namespace std;
	using namespace alpha;
	//using namespace beta;
	int sum=first+second+gamma::third;
	cout<<"Your Result is "<<sum<<endl;
	int result=beta::first+gamma::second+gamma::third;
	cout<<"Result is "<<result<<endl;

	return 0;
}
