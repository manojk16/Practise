/*
 * 7oddNumberofTimes.cpp
 *
 *  Created on: 18-Apr-2018
 *      Author: manoj
 */
//Only One Number is occuring odd number of time
#include <iostream>


int OddNumber(int arr[],int size){
	int oddcount =0;
	
	for(int i=0;i<size;i++){
		int count =0;
		for(int j=0;j<size;j++){

			if(arr[i]==arr[j]){

				count++;
			}
		}
		if(count % 2!=0){
			return arr[i];
		}
	}
	return -1;

}

int main(){
	int arr[]={1,2,2,2,2,4,4,2,1};
	int size= sizeof(arr)/sizeof(arr[0]);
	std::cout<<OddNumber(arr,size)<<std::endl;


	return 0;
}





