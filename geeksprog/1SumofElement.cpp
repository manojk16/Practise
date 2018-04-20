/*
 * 1SumofElement.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: manoj
 */

#include <iostream>

using namespace std;


int main(){
	int arr[]={12,3,-15,16};
	cout<<"Elements are::"<<endl;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
	int sum=0;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		sum =sum+arr[i];
	}
	cout<<"Total sum is ::"<<sum<<endl;
	return 0;

}


