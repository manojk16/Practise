/*
 * 1Vector.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: manoj
 */




#include <iostream>
#include <vector>

using namespace std;
int main(){

	std::vector<int> vectofInts;
	for(int i=0;i<10;i++){
		vectofInts.push_back(i+1);
	}

	vector<int>::iterator it=vectofInts.begin();

	while(it!=vectofInts.end()){

		cout<<*it<<endl;
		it++;
	}

	return 0;
}
