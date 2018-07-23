/*
 * cpp2.
 *
 *  Created on: 18-Feb-2016
 *      Author: baliyan
 */
#include <iostream>
using namespace std;
namespace CIRCLE
{
class Circle
{
public:
	int irad;
	//char* strcustomerName;
	public:
	float calculateArea();
	
};
}
using namespace CIRCLE;
float Circle::calculateArea()
{
	return (3.14*irad*irad);
}
int main()
{
	//using namespace CIRCLE;
	Circle obj;
	obj.irad=100;
	cout<<"Area of circle is ::"<<obj.calculateArea()<<endl;
	return 0;
}




