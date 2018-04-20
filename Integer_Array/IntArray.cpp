#include <iostream>
#include "IntArray.h"

int main(){
	using namespace std;

	intArray array(10);
	for(int i=0;i<10;i++){
		array[i]=i+1;

	}

	array.resize(8);
	//array.remove(3);
	for(int j=0;j<array.getLength();j++){
		cout<<array[j]<<" ";
	}


	return 0;
}
