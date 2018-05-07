/*
 * 1_Exercise_Exception.cpp
 *
 *  Created on: 26-Apr-2018
 *      Author: manojs
 */

#include <iostream>
#include <string>
using namespace std;

void mightGoWrong(){

	bool error1=true;
	bool error2=true;
	bool error3=true;
	/*if(error1){
		throw 8;

	}
*/
	/*if(error2){
		throw "Some thing Went wrong";
	}*/
	if(error3){
		throw string("Some thing Else Went wrong");
	}
}




int main(){

	try{
		mightGoWrong();
	}
	catch (int e) {
		cout<<" Exception Caught ::" << e << endl;
	}

	catch (char const* e) {
		cout<<" Char ptr:: Error Caught" << e << endl;
	}

	catch (string &e) {
		cout<<"String Error Message went Wrong::"<< e << endl;
	}
	return 0;

}
