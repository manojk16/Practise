/*
 * 7thFriend.cpp
 *
 *  Created on: 13-Apr-2018
 *      Author: manoj
 */


#include <iostream>
#include "7thFriend.h"



int Distance::show(Distance& obj1){
	obj1.m_distance=100;
}
int access(Distance& obj2){
	obj2.m_distance=200;
	std::cout<<"Friend access the value"<<std::endl;
	return obj2.m_distance;
}



int main(){
	Distance obj1;
	int x=access(obj1);
	std::cout<<"Value of x is ,,x::"<<x<<std::endl;

	return 0;
}
