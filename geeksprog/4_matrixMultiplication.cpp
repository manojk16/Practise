/*
 * 4_matrixMultiplication.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: manoj
 */

#include <iostream>
using namespace std;
const int n=4;
void multiply_mat(int mat_1[][n],int mat_2[][n],int result[][n]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			result[i][j]=0;
			for(int k=0;k<n;k++){
				result[i][j]+=mat_1[i][k]*mat_2[k][j];
			}
		}
	}

}
int main(){
	int mat_1[n][n]={{1,1,1,1},
			       {2,2,2,2},
				   {3,3,3,3},
				   {4,4,4,4}};

	int mat_2[n][n]=   {{1,1,1,1},
				       {2,2,2,2},
					   {3,3,3,3},
					   {4,4,4,4}};


	int result[n][n];

	multiply_mat(mat_1,mat_2,result);
	cout<<"Multiplication is ::"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<" "<<result[i][j];
		}
		cout<<endl;
	}

	return 0;
}


