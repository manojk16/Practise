//============================================================================
// Name        : Auto_keyword.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>
using namespace std;

/*
	In c++ 98 auto is the by default  storage class specifier
	 in c++11 meaning of auto is extended
*/

//How to use auto in function return type
/*auto text(){
	return 7;
}*/
/*auto text() ->int{
	return 7;
}*/

// Suppose we have a
/*template <class T>
// and pass valueof type T


auto text(T value) -> decltype(value){
	return value;
}*/
// In decltype we can use expression also

template <class T,class Q>
auto text(T  value1, Q value2) -> decltype(value1+value2){
	return value1+value2;
}
int get(){
	return 999;
}
auto test2()->decltype(get()){
	return get();
}

int main() {
	cout << "Auto_keyword" << endl; // prints Auto_keyword
	auto value=7;
	cout<<value<<endl;
	auto value2=7.0;
	cout << value2<<endl;
	auto name="hello";
	cout<<name<<endl;
	//cout<<text("Hi there")<<endl;
	cout<<text(5,6)<<endl;
	//cout<<func1(5,7)<<endl;
	cout<<test2()<<endl;
	return 0;
}

