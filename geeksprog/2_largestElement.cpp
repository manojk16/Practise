/*
 * 2_largestElement.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: manoj
 */
#include <iostream>
using namespace std;
int largest_N(int arr[],int size){
	int max=arr[0];
	for(int i=0;i<size;i++){
		
		if(max<arr[i]){
			max=arr[i];
		}
	}
	cout<<"max is ::"<<max<<endl;
	return max;
}

int main(){
	int n;
	cout<<"Enter The Number of element in to array\n";
	cin >> n;
	int arr[n];
	cout<<"Enter the Number ofelement in to array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout <<"Elements in to array are::\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
	int max_element=largest_N(arr,n);
	cout<<"largest Element is::"<<max_element<<endl;

}



