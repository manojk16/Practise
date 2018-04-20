/*
 * 6Majority.cpp
 *
 *  Created on: 18-Apr-2018
 *      Author: manoj
 *      Majority Element
 */
#include <iostream>


void Majority(int arr[],int size){
	int maxcount =0;
	int index=-1;
	for(int i=0;i<size;i++){
		int count =0;
		for(int j=0;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count > maxcount){
			maxcount=count;
			index=i;
		}
	}
	if(maxcount>size/2){
		std::cout<<arr[index] <<std::endl;
	}
	else{
		std::cout<<"No Element found "<<std::endl;
	}
}

int main(){
	int arr[7]={1,2,1,3,1,4,1};
	int size= sizeof(arr)/sizeof(arr[0]);
	Majority(arr,size);


	return 0;
}


