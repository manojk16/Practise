//============================================================================
// Name        : Overloading_Pre_Post.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{
	int x;
public:
	Test(){
		x=0;
	}
	Test(int n):x(n){

	}
	void print(){
		cout<<"Value of x : "<<x<<endl;
	}
	Test& operator++(){
		++x;
		return *this;
	}
	Test operator++(int){
		Test temp=*this;
		x=x+1;
		return temp;
	}
};
int main() {
	cout << "Overloading_Pre_Post" << endl; // prints Overloading_Pre_Post
	Test t(50);
	Test t2=++ ++t;
	t2.print();
	Test t3(30);
	t3.print();
	t3++.print();
	t3.print();






	return 0;
}
