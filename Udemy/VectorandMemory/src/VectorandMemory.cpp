//============================================================================
// Name        : VectorandMemory.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	cout << "Welcome to Vectors and Memory !!" << endl; // prints Welcome to Vectors and Memory !!
	vector<int> number(0);
	int capacity = number.capacity();
	cout << "Capacity is ::" << capacity << endl;
	cout << "Size::" << number.size() << endl;

	for (int i = 0; i < 10000; i++) {
		if (number.capacity() != capacity) {
			capacity = number.capacity();
			cout << "Capacity ::" << capacity << endl;
		}
		number.push_back(i);
	}
	cout << "Capacity is ::" << capacity << endl;
	cout << "Size::" << number.size() << endl;

	number.resize(100);
	cout << "Capacity is ::" << capacity << endl;
	cout << "Size::" << number.size() << endl;

	number.reserve(100);
	cout << "Capacity is ::" << capacity << endl;
	cout << "Size::" << number.size() << endl;

	number.reserve(100000);
	cout << "Capacity is after reserve 100000 ::" << capacity << endl;
	cout << "Size::" << number.size() << endl;

	number.clear();
	cout << "Capacity is ::" << capacity << endl;
	cout << "Size::" << number.size() << endl;



	return 0;
}
