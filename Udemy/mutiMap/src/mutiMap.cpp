//============================================================================
// Name        : mutiMap.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
multimap store the value with Duplicat Key
*/

#include <iostream>
#include <map>
using namespace std;

int main() {
	cout << "Welocme to Multimap   !!!!" << endl; // prints Welocme to Multimap   !!!!

	multimap<int, string> lookup;
	lookup.insert(make_pair(30,"Mike"));
	lookup.insert(make_pair(20,"Raj"));
	lookup.insert(make_pair(30,"Viccky"));
	lookup.insert(make_pair(10,"Nikki"));
	for(multimap<int,string>::iterator it=lookup.begin();it!=lookup.end();it++){
		cout << it->first <<": " << it->second<<endl;
	}
	cout<<"\n";
	cout<<"\n";
	for(multimap<int,string>::iterator it=lookup.find(20);it!=lookup.end();it++){
		cout << it->first <<": " << it->second<<endl;

	}

	//How to get the range of the element in to element
	return 0;
}
