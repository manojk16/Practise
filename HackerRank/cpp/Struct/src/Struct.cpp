//============================================================================
// Name        : Struct.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct Student{
	string fistname;
	string lastname;
	int age;
	int standard;


};
Student st;
int main() {
	cout << "Struct" << endl; // prints Struct
	cin >> st.age >> st.fistname >> st.lastname >> st.standard;
	cout << st.age <<" : "<< st.fistname<<" : "  << st.lastname <<" :" << st.standard;
	return 0;
}
