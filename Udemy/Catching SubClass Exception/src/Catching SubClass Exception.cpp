//============================================================================
// Name        : Catching.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>
using namespace std;
// Two Exception here include in subclass
// Sequence of Exception
// First catch the subclass exception ifirst then the parent class exception
void goeswrong(){
	bool error1=true;
	bool error2=false;
	if(error1){
		throw bad_alloc();
	}
	if(error2){
		throw exception();
	}
}


int main() {
	cout << "Catching Sub Class Exception!!" << endl; // prints "Catching Sub Class Exception!!"

	try{
		goeswrong();
	}
	catch(bad_alloc &e){
			cout<<"bad Alloc:::"<<e.what()<<endl;
		}
	catch(exception &e){ // bad_alloc is sub class of exception so it is executing so put sub class first
		cout<<" in exception :: "<<e.what()<<endl;
	}
	/*catch(bad_alloc &e){
		cout<<"bad Alloc:::"<<e.what()<<endl;
	}*/
	return 0;
}


// if we run it first out put will be bad Alloc::: i.e
