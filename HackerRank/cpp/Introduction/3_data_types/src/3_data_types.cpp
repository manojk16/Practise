//============================================================================
// Name        : 3_data_types.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!


	//Input Format

	//Input consists of the following space-separated values: int, long, char, float, and double, respectively.

	int a;
	long long b;
	char c;
	float f;
	double d;
	cin >> a >> b >> c >> f >> d;
	cout << fixed;

	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << setprecision(2);
	cout << f << "\n";
	cout << setprecision(9);
	cout << d << "\n";

	return 0;
}
