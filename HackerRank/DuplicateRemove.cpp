/*
 * DuplicateRemove.cpp
 *
 *  Created on: 18-May-2018
 *      Author: manoj
 */
#include <iostream>
#include <vector>

using namespace std;

int removedup(int arr[],int n){

	if(n==0||n==1){
		return n;
	}
	int temp[n];
	int j=0;
	for(int i=0;i<n-1;i++){
		if(arr[i]!=arr[i+1]){
			temp[j++]=arr[i];
		}
	}
	temp[j++]=arr[n-1];
	for(int i=0;i<j;i++){
		arr[i]=temp[i];
	}
	return j;
}

int main(){
	int n,size;

	cout<<"Enter The size"<<endl;
	cin>>size;

	int arr[size];
	cout<<"Enter The Element\n";
	for(int i=0;i<size;i++){
		cin>>n;
		arr[i]=n;
	}

int len=removedup(arr,size);

	for(int i=0;i<len;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
}
