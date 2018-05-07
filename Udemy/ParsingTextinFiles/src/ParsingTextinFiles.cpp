//============================================================================
// Name        : ParsingTextinFiles.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	cout << "Parsing Text  in Files !!" << endl; // prints "Parsing Text  in Files !!"
	ifstream input;
	input.open("stat.txt");

	if(!input.is_open()){
		return 1;
	}

	while(input){
		string line;
		getline(input,line,':');
		int Population;
		input >> Population;
		input.get();
		if(!input){
			break;
		}
		cout<<" ' "<< line<< " ' " <<"--' "<<Population<<endl;
	}
	input.close();
	return 0;
}
