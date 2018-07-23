//============================================================================
// Name        : StringStream.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> parseInts(string str){
	vector<int> vect;
	stringstream ss(str);
	int a;
	while(ss >> a){
		vect.push_back(a);
		if(ss.peek()==','){
			ss.ignore();
		}
	}
	return vect;

}
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
