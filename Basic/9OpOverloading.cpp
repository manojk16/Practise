/*
 * 9OpOverloading.cpp
 *
 *  Created on: 13-Apr-2018
 *      Author: manoj
 */
#include <iostream>


class TimeInterval{
	int Minutes;
	int Seconds;
public:
	TimeInterval(int m, int s){
		Minutes=m;
		Seconds=s;
		std::cout<<"In Ctor"<<std::endl;
	}

	void print(){
		std::cout<<"Minutes =="<<Minutes<<std::endl;
		std::cout<<"Seconds=="<<Seconds<<std::endl;
	}
int operator()(int mili){
	return (Seconds+Minutes*60)*mili;
}

	};


int main(){

	TimeInterval obj1(20,30);
	int total_sec= obj1(1000);
	std::cout<<"Total Sec are "<<total_sec<<std::endl;
}


