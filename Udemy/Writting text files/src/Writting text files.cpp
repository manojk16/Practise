//============================================================================
// Name        : Writting.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;


int main() {
	cout << "Writting Text Files !!" << endl; // prints "Writting Text Files !!"
	ofstream outfile;
	outfile.open("result_1.txt");

	if(outfile.is_open()){

		outfile << "I am here Only"<<endl;
		outfile.close();
	}
	else{
		cout<<"File can't be write"<<endl;
	}

 fstream outfile2;
 outfile2.open("result_1.txt",ios::out);
 if(outfile2.is_open()){
	 outfile2 << "This is open by 2nd Method"<<endl;
	 outfile2.close();
 }
 else{
	 cout<<"Files Can't be created"<<endl;
 }


	return 0;
}
