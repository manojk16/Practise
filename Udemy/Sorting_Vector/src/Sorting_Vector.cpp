//============================================================================
// Name        : Sorting_Vector.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


class Test{
	int id;
	string name;
public:
	Test(int id, string name):id(id),name(name){}
	void print(){
		cout<<id<<"   : "<<name<<endl;
	}
	/*bool operator<(const Test &other){
		//return name < other.name;// What you will do if names are equal-> then return by Id
		return id<other.id;
	}*/
	friend bool comp(const Test &a, const Test &b);
};

bool comp(const Test &a, const Test &b){
	return a.name < b.name;
}
int main(){
	vector<Test> tests;
	tests.push_back(Test(5,"Ram"));
	tests.push_back(Test(3,"Renny"));
	tests.push_back(Test(10,"Sayam"));
	tests.push_back(Test(7,"Sayam"));

	//sort(tests.begin(),tests.end());
	//sort(tests.begin(),tests.end(),comp);//comp it is funcptr
	sort(tests.begin(),tests.begin()+2,comp);
	for(int i=0;i<tests.size();i++){
		tests[i].print();
	}

}
