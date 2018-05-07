//============================================================================
// Name        : sets.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
	sets only stores the uniques element and inorder
	to finding the unique objects sets are very good


*/

#include <iostream>
#include <set>
using namespace std;

class Test {
	int id;
	string name;
public:
	Test() :
			id(0), name("") {

	}
	Test(int id, string name) :
			id(id), name(name) {

	}
	void print() const {
		cout << "id:: " << id << " name:: " << name << endl;
	}

	bool operator<(const Test &other) const {
		//return name<obj.name;
		if (name == other.name) {
			return id < other.id;
		} else {
			return name < other.name;
		}
	}
};

/*
int main() {
	cout << "Welcome to Sets !!" << endl; // prints Welocme to Sets !!

	set<int> numbers;
	numbers.insert(30);
	numbers.insert(10);
	numbers.insert(20);
	numbers.insert(40);

	for(set<int>::iterator it=numbers.begin();it!=numbers.end();++it){
		cout<<*it<<endl;
	}
	set<int>::iterator findit=numbers.find(30);
	if(findit!=numbers.end()){
		cout<<"Number found ::" << *findit <<endl;
	}

	//or
	if(numbers.count(30)){
		cout<< "Numbers Found "<<endl;
	}


	return 0;
}
*/

int main() {
	set<Test> test;
	test.insert(Test(30, "Mike"));
	test.insert(Test(20, "Kaka"));
	test.insert(Test(10, "Ramu"));
	test.insert(Test(40, "Jenny"));
	test.insert(Test(333, "Jenny"));

	for (set<Test>::iterator it = test.begin(); it != test.end(); it++) {
		it->print();
	}

	return 0;
}
