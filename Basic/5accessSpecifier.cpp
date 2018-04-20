/*
 * 5accessSpecifier.cpp
 *
 *  Created on: 13-Apr-2018
 *      Author: manoj
 */
#include <iostream>


class circle{
public:
	int radius;
	float calculateArea(int);

};

float circle::calculateArea(int radius){

	return 3.14*radius*radius;
}


int main(){
	using namespace std;
	circle Obj1;
	float result=Obj1.calculateArea(5);
	cout<<"Area is =="<<result<<endl;
	return 0;
}
