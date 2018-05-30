//============================================================================
// Name        : Sorting_Vector.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>



using namespace std;


class Test{
	int id;
	string name;
public:
	Test(int id, string name):id(id),name(name){}
	void print(){
		cout<<id<<" : "<<name<<endl;
	}
};


int main(){
	vector<Test> tests;
	tests.push_back(Test(5,"Ram"));
	tests.push_back(Test(3,"Renny"));
	tests.push_back(Test(10,"Janney"));
	tests.push_back(Test(7,"Sayam"));

	for(int i=0;i<tests.size();i++){
		tests[i].print();
	}

}
