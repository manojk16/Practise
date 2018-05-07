//============================================================================
// Name        : map.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

int main() {
	cout << "Welcome to Map" << endl; // prints Welcome to Map

	map<string, int> ages;
	ages["Raj"]=40;
	ages["Abhay"]=30;
	ages["Vicky"]=50;
	ages["aanu"]=04;


	cout<<"Age of Aanu:: "<< ages["aanu"]<<endl;

	for(map<string, int>::iterator it=ages.begin();it!=ages.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
		cout<<"**********************************"<<endl;
	for(map<string, int>::iterator it=ages.begin();it!=ages.end();it++){
		pair<string, int> age=*it;
		cout<<age.first<<" "<<age.second<<endl;
		}

//insert in to the map
	pair<string, int> addToMap("Peter",100);
	ages.insert(addToMap);
	//****************OR*********************************
	ages.insert(pair<string,int>("San",75));
	//*************************OR******************************
	ages.insert(make_pair("Raju",25));
	cout<<"******After Insertion****************************"<<endl;
	for(map<string, int>::iterator itAdd=ages.begin();itAdd!=ages.end();itAdd++){
			pair<string, int> age=*itAdd;
			cout<<age.first<<" "<<age.second<<endl;
			}

	return 0;
}
