//============================================================================
// Name        : BinaryFile.cpp
// Author      : Manoj
// Version     :
// Copyright   : You can Copy or Distribute it
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push,1);
// we are pushing the Person Data to the stack and with the single byte boundries
// again size will be 64 byte so put it last
struct Person {
	char name[50];
	int age;
	double weight;

};
// we can read and write these data in to/from files
#pragma pack(pop);
// It size should be 62 but system shows it is 64 bytes
int main() {

	Person someone = { "Manoj", 34, 82.2 };
	cout << "Binary !!" << endl; // prints Binary !!

	cout << sizeof(Person) << endl;

	/////////////Write Binary Files /////////////////////

	ofstream outputfile;
	outputfile.open("test.bin", ios::binary);

	if (outputfile.is_open()) {

		outputfile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
		outputfile.close();
	} else {

		cout<<"could not create the files "<<endl;
	}
/////////////////////Read Binary Files ///////////////////////

	Person someoneElse={};
	ifstream inputfile;

	inputfile.open("test.bin", ios::binary);

	if (inputfile.is_open()) {

		inputfile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
		inputfile.close();
	} else {
		cout<<"could not read the files "<<endl;
	}

	cout << someoneElse.name<<","<<someoneElse.age<<","<<someoneElse.weight<<"."<<endl;
	return 0;
}
