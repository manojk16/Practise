/*
 * 1cpp.cpp
 *
 *  Created on: 11-Apr-2018
 *      Author: manoj
 */

#include <iostream>
using namespace std;

struct student{

	int roll;
	char *name;

void show(){
	cout<<"Name of the student is ::"<<name<<endl;
	cout <<"Roll Number is ::"<<roll<<endl;
}
}std1;


int main(){
	std1.roll=121;
	std1.name="Manoj";
	std1.show();
	return 0;
}


