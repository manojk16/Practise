//============================================================================
// Name        : range_Based_loops.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;


	int main() {
	cout << "range_Based_loops" << endl; // prints range_Based_loops

	//char text[]={"One","Two", "three"};
	auto texts = { "One", "two", "Three" };

	// C++ provie the enhanced for loop
	for (auto itr : texts) {
		cout << itr << endl;
	}

	vector<int> vect;
	vect.push_back(5);
	vect.push_back(7);
	vect.push_back(10);
	vect.push_back(9);
	vect.push_back(4);

	for(auto numbers : vect){
		cout << numbers<<endl;
	}

	return 0;
}


