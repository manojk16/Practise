/*
 * 5ArrayPairsum.cpp
 *
 *  Created on: 17-Apr-2018
 *      Author: manoj
 */
//Given an array A[] and a number x, check for pair in A[] with sum as x
#include <iostream>
using namespace std;
bool hasArrayTwoCandidates(int arr[],int size, int x){
	int l=0;
	int r=size-1;
	while(l<r){
		if(arr[l]+arr[r]==x){
			return 1;
		}
		else if(arr[l]+arr[r]<x){
			l++;
		}
		else{
			r--;
		}
	}
	return 0;
}

int main(){
	int arr[]={-8, 1, 4, 6, 10, 45};
	int x=16;
	int arr_size=sizeof(arr)/sizeof(arr[0]);
	if(hasArrayTwoCandidates(arr,arr_size, x))
		cout<<"Array has a pair or the given sum"<<endl;
	else
		cout<<"Array doesn't have any pair"<<endl;

	return 0;
}


