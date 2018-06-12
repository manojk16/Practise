//============================================================================
// Name        : Functor.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using  namespace std;


// Functors is the another way of passing code block to the function

/*
	They have some advantages over the function pointer means what we can do with functors we can't do with the fucntion pointer
Functor is a class or struct that among other things overload the () operator


*/
struct Test{                                   //
	virtual bool operator()(string &test)=0;

	virtual ~Test(){}//
};
struct MatchTest:public Test{                                //
	bool operator()(string &test){              //
		return test=="LION";                    //  FUNCTOR
	}                                          //
};
void check(string text, Test &test){
	if(test(text)){
		cout<<"text Matched"<<endl;
	}
	else{
		cout<<"No match"<<endl;
	}
}

int main() {
	cout << "Functor" << endl; // prints Functor


	MatchTest pred;
	string value="LION";
	cout<<pred(value)<<endl;// here pred(value) is looks like a function call but it is not the  and it is overloading of the () operator with the help of Matchtest Object
	//check("LION",MatchTest());
	MatchTest m;
	check("LIONd", m);

	return 0;
}
