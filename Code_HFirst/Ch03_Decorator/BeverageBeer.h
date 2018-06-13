#ifndef _BEVARAGE_BEER_H
#define _BEVARAGE_BEER_H


#include "Beverage.h"


namespace Decorator{

class Beveragebeer:public Beverage{
private:
	string decription;
	int cost;

public:
	Beveragebeer(string s,int c):decription(s),cost(c){}
	~Beveragebeer(){}
	int getcost(){
		return cost;
	}
	string getdiscription(){
		return decription;
	}
};
}



#endif
