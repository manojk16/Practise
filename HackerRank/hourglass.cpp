#include <iostream>
#include <vector>
#include <limits.h>


using namespace std;


/*Problem: Hour glass problem find the maximum sum of hour glass problem 4
for this rows and number of columns must be greater than 3
Number of top-left cells in a hour glass is equal to (R-2)*(C-2). Therefore, in a matrix total number of hour glass is (R-2)*(C-2)
Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum

*/
const int rows=6;
const int columns=6;

/*int array2D(int arr[rows][columns])*/
int array2D(vector<vector<int> > arr){
	if(rows<3||columns<3){
		return -1;
	}
	int max_sum=INT_MIN;
	for(int i=0;i<rows-2;i++){
		for(int j=0;j<columns-2;j++){
			int sum=(arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);
			if(sum>max_sum){
				max_sum=sum;
			}
		}
	}

	return max_sum;
	
}
int main(){
	vector<vector<int> > mat(columns);
	for(int i=0;i<rows;i++){
		mat[i].resize(columns);
		for(int j=0;j<columns;j++){
			cin>>mat[i][j];
		}
	}

	cout << "Matrix is ::"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<mat[i][j]<<"\t";
		}
		cout <<"\n";

	}

	int res=array2D(mat);
	if(res==-1){
		cout<<"Not Possible"<<endl;
	}
	else{
		cout<<"Max Sum of the Hour Glass is:: "<<res<<endl;
	}
	return 0;
}