/*
 * 3_recursiveBSearch.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: manoj
 */
#include <iostream>
using namespace std;
// Recursive prog to leanrly search the element in to array
//Recursive program to linearly search an element in a given array


int linearR(int arr[],int l,int r,int x){
	if(r<l)
		return -1;
	if(arr[l]==x)
		return l;
	return linearR(arr,l+1,r,x);


}



int main(){
	int n;
	cout<<"Enter The Number of element in to array\n";
	cin >> n;
	int arr[n];
	cout<<"Enter the Number of element in to array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout <<"Elements in to array are::\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}

	int elementToSearch;
	cout<<"\nelementToearch;"<<endl;
	cin >> elementToSearch;

	int index =linearR(arr,0,n-1,elementToSearch);
	if(index!=-1)
		cout<<"element present at index ::"<<index<<endl;
		else
			cout<<"Elements not present"<<endl;

return 0;
}
