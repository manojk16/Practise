//============================================================================
// Name        : Initializer_list.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;
class Test{
public:
	Test(initializer_list<string> texts){
		for(auto value:texts){
			cout<<value<<endl;
		}
	}
	void print(initializer_list<string> texts){
		for(auto value:texts){
			cout<<value<<endl;
		}
	}
};
int main() {

	cout << "Initializer_list" << endl; // prints Initializer_list

vector<string> strings{"one","two"};

	Test test {"One","two","Three"};
	test.print({"one","Two","Three"});


	return 0;
}
