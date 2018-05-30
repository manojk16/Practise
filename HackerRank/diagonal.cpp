#include <iostream>
#include <vector>
#include <stdlib.h>


using namespace std;
int diagonalSumDiff(int a[3][3], int n){

	int sum1=0,sum2=0;
	for(int i=0,j=n-1;i<n;i++,j--){
		sum1=a[i][j];
		sum2=a[i][j];
	}
	int result = abs(sum1-sum2);


	return result;
}
int main(){
	//vector<vector<int> > a;
	int a[3][3];

	int n;
	cout << "Enter The Number of element "<<endl;
	cin >> n;
	cout<<"Enter The value in to square 2 D array"<<endl;
	int value;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}

	cout << "Value in to MAtrix are "<<endl;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j]<<"\t";
		}
		cout << endl;	
	}

	cout<<diagonalSumDiff<<endl;
	return 0;
}


