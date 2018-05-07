/*
 * Custome_Exception.cpp
 *
 *  Created on: 27-Apr-2018
 *      Author: manoj
 */

#include <iostream>
#include <exception>

using namespace std;


class Myexception:public exception{
public:
	virtual const char* what(){
		throw "Something goes wrong";
	}

};
class Test{
public:
	void goesWrong(){
		throw Myexception();
	}
};


int main(){
	Test test;
	try{
		test.goesWrong();
	}
	catch(Myexception &e){
		cout<< e.what() <<endl;
	}
	catch(char const* e){
		cout<< e <<endl;
	}
	return 0;
}

