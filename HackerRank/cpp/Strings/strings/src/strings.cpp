//============================================================================
// Name        : strings.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s="abcd";
    string s1="ef";
    cout<< s.size()<<" "<<s1.size() <<endl;
    cout << s + s1 <<endl;
    s[0]='e'; s1[0]='a';
    cout<< s <<" "<<s1 <<endl;
    return 0;
}
