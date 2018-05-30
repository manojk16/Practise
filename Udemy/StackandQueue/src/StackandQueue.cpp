//============================================================================
// Name        : StackandQueue.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : Stack_Queue.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello Stack_Queue C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test{
	string name;
public:
	Test(string name):name(name){}
	~Test(){
			//cout<<"Destroy The Object"<<endl;
	}
	void print(){
		cout<<name<<endl;
	}
};

int main() {
	cout << "!!!Hello Stack & Queue!!!" << endl; // prints !!!Hello Stack & Queue!!!
	stack<Test> teststack;
	teststack.push(Test("Mike"));
	teststack.push(Test("John"));
	teststack.push(Test("Sue"));


	/* This is invalid code as Object s destroyed !!
	 * Test &test1=teststack.top();
	teststack.pop();
	test1.print(); // Reference refe to destroyed Object
*/
while(teststack.size()>0){
	Test &test=teststack.top();
	test.print();
	teststack.pop();
}


cout<<"******************QUEUE******************************************************"<<endl;

//FIFO

queue<Test> testqueue;
testqueue.push(Test("Mike"));
testqueue.push(Test("John"));
testqueue.push(Test("Sue"));


	/* This is invalid code as Object s destroyed !!
	 * Test &test1=teststack.top();
	teststack.pop();
	test1.print(); // Reference refer to destroyed Object
*/
cout<<endl;
testqueue.back().print(); //Sue
cout<<"Front"<<endl;
testqueue.front().print(); //Mike

	cout<<endl;
while(testqueue.size()>0){
	Test &test=testqueue.front();
	test.print();
	testqueue.pop();
}


	return 0;
}
