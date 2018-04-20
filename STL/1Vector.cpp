/*
 * 1Vector.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: manoj
 */



#include <iostream>
#include <vector>


int main(){

	std::vector<int> vectofInts;
	for(int i=0;i<10;i++){
		vectofInts.push_back(i+1);
	}

	std::vector<int>::iterator it=vectofInts.begin();

	while(it!=vectofInts.end()){

		std::cout<<*it<<std::endl;
		it++;
	}

	return 0;
}
