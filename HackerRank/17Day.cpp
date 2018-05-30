/*
 * 17Day.cpp
 *
 *  Created on: 21-May-2018
 *      Author: manoj
 */


#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <exception>
#include <stdexcept>

using namespace std;



class calculator{
public:

	int power(int n,int p){
		if(n<0||p<0){
			throw invalid_argument("n and p should be non-negative");
		} else{
			return pow(n,p);
		}
	}
};


int main(){
	calculator mycalc=calculator();
	int T, n,p;
	cin>>T;
	while(T--){
		cin >> n >> p;
		try{
			int ans=mycalc.power(n,p);
			cout<<ans<<endl;
		}catch(exception& e){
			cout<<e.what()<<endl;
		}

	}
}
