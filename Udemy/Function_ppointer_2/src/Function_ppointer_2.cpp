//============================================================================
// Name        : Function_ppointer_2.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool match(string test){
	return test.size()==3;
}

int countString(vector<string> &texts, bool (*match_t)(string test)){
	int tally=0;
	for(int i=0;i<texts.size();i++){
		if(match_t(texts[i])){
			tally++;
		}
	}
	return tally;
}
int main() {
	cout << "Function Pointer part 2 " << endl; // prints Function Pointer part 2 

	vector<string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("two");
	texts.push_back("four");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("ten");

	cout<<match(" ")<<endl;

	cout<<count_if(texts.begin(),texts.end(),match)<<endl; // cout the number of matches
	cout<<countString(texts,match)<<endl;
	return 0;

}
