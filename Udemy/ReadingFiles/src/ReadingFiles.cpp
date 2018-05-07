//============================================================================
// Name        : ReadingFiles.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

/*
int main() {
	cout << "Reading Text Files !!" << endl; // prints "Reading Text Files !!"
	string infileName = "Manoj";
	ifstream infile;
	infile.open("result_1.txt");

	if(infile.is_open()){
		string line;
		infile >> line;
		cout << line <<endl;
	}
	else{
		cout<<"can't open the file"<<endl;
	}


	return 0;
}*/


int main(){
	fstream infile;
	//string fileName = "result_1.txt";
	infile.open("result_1.txt",ios::in);
	if(infile.is_open()){
		string line;
		infile << line;
		cout << line;
		infile.close();

	}
	else{
		cout <<"cant be open"<<endl;
	}
	return 0;
}
