//============================================================================
// Name        : Two.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	cout << "Welcome to Two D Vector!!!" << endl; // prints Welcome to Two D Vector!!!

	vector< vector<int> > grid(3,vector<int>(4,7));

	// 2 D vector with 3 rows and 4 columns;
    // first we iterate rows and then coloumn with in the rows
    for(int row=0;row < grid.size();row++){
	for(int col =0; col < grid[row].size();col++){

		cout<< grid[row][col]<< flush;

		//grid[row] is the vector and grid[row][col] will access the particular element in to the particular element

		}
	cout<<"size of grid is ::" << grid.size()<<endl;
	cout<<endl;
    }
		return 0;
}
