/*
 * 8MaxContinuousArray.cpp
 *
 *  Created on: 18-Apr-2018
 *      Author: manoj
 */
#include<iostream>
#include<climits>


using namespace std;

int MaxContSum(int arr[],int size){

	int max_so_for=INT_MIN;
	int max_ending_here=0;
	for(int i=0;i<size;i++){
		max_ending_here = max_ending_here+arr[i];
		if(max_so_for < max_ending_here){
			max_so_for = max_ending_here;
		}
		if(max_ending_here < 0){
			max_ending_here=0;
		}
	}
	return max_so_for;
}








int main(){
	int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
	int size= sizeof(arr)/sizeof(arr[0]);
	std::cout<<MaxContSum(arr,size)<<std::endl;


	return 0;
}
