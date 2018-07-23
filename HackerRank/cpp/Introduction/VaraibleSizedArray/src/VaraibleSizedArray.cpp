//============================================================================
// Name        : VaraibleSizedArray.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	cout << "VaraibleSizedArray" << endl; // prints VaraibleSizedArray

	vector<vector<int> > vect;
	int N, Q, k;
	cin >> N >> Q >> k;
	vect.resize(10);
	for(int i=0;i<N;i++){
		for(int j=0;j<k;j++){
			cin >> vect[i][j];
		}
	}
	int a,b;
	for(int i=0; i<Q; i++) {
		cin >> a >> b;
		cout << vect[a][b];
	}
	return 0;
}
