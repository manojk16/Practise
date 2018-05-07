/*
 * Satndard_Exception.cpp
 *
 *  Created on: 27-Apr-2018
 *      Author: manoj
 */


#include <iostream>

using namespace std;



class cangoWrong{

public:
	cangoWrong(){

		char *ptr = new char[99999999999999999];
		delete [] ptr;
	}
};
int main(){

	try{
	cangoWrong();
	}
	catch (bad_alloc &e) {
		cout<<"Error Message is :"<<e.what()<<endl;

	}
	cout<<"Still ruuning So it is hadeler like" <<endl;
	return 0;
}

