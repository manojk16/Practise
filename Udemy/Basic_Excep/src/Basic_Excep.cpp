//============================================================================
// Name        : Basic_Excep.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Basic_Exception in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void mightGoWrong(){

	//bool error=true;
	//instead of error lets us take error1 and error2
	bool error1=false;
	bool error2=true;
	/*if(error){
		// instead of int let throw an string
		//throw 8;
		throw "Some thing went wrong";
		// in string case it will give error so we shud catch it using char * so use other catch block
	}*/
	if(error1){
			// instead of int let throw an string
			//throw 8;
			throw "Some thing went wrong";
			// in string case it will give error so we shud catch it using char * so use other catch block
		}
	// As Now error1 get throw so it will not come to the condition of error2 and means once error throws next line will not be executed

	if(error2){
		throw string("Some thing else went wrong");
	}


}

// When I am running this prog it's getting terminated so use try and catch
// try is block and catch() in which we will cathc an exception
int main() {
	try{
	mightGoWrong();
	}
	catch(int e){
		cout << "error code " <<e<<endl;
	}
	catch(char const  *e){
		cout <<"String error caught:"<< e <<endl;
	}
	catch (string &e) { // Catch for string // when we are instantiating object (string("Some thing else went wrong"))then we have to pass the object by reference
		cout<<"String error Message" << e << endl;
	}
	cout << "Still Running" << endl;
	return 0;
}
