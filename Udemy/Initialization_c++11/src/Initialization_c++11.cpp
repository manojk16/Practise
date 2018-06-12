//============================================================================
// Name        : Initialization_c++11.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;
/*
 * c++ 11 Generalize the uses of Braces
*/
int main(){
	cout << "Initialization_c++11" << endl; // prints Initialization_c++11
	int value{5};
	cout<<value<<endl;
	string name{"pop"};
	cout<<name<<endl;

	int arr[]{1,2,3};
	cout<<arr[1]<<endl;

	int *ptr=new int[3]{1,2,3};
	cout<<ptr[1]<<endl;

	int value1{};
	cout<<value1<<endl;
	int *ptrsomething{&value};
	cout<<*ptrsomething<<endl;


	int *ptr2{nullptr};

	cout<<ptr2<<endl;
	vector<string> strings{"one","two","three"};
	cout<<strings[2]<<endl;


	return 0;
}
