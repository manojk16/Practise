//============================================================================
// Name        : vector.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

// resizble array
using namespace std;

int main() {
	cout << "Welcome to Vectors !!" << endl; // prints Welcome to Vectors !!

	vector<string> strings;
	// [] overloaded to vector class
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");
	//strings[3]="dog";
	//cout<<strings[1]<<endl;
	cout<<"Size is :: "<<strings.size()<<endl;
	/*for(int i=0;i<strings.size();++i){   // not recomended
		cout<<strings[i]<<endl;
	}
*/
	//strings.end() is not the last element it is the last point after the last element

	for(vector<string>::iterator iter=strings.begin();iter!=strings.end();++iter ){
		cout<<*iter<<"-->"<<endl;
		//scout<<"Address is "<< &strings[iter]<<endl;
	}
	return 0;
}
/*
 * Create A vector of int and then try to iterate
*/
