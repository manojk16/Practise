//============================================================================
// Name        : helloConcurent.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <thread>


using namespace std;


void function_1(){
	cout << "In Thread 1"<<endl;
}
int main() {
	cout << "In main Thread" << endl; // prints helloConcurent

	thread t1(function_1);
	t1.join();
	return 0;
}
