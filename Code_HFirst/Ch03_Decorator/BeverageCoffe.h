#ifndef _BEVARAGE_CPFFEE_H
#define _BEVARAGE_CPFFEE_H


#include "Beverage.h"


namespace Decorator{

class BeverageCoffe:public Beverage{
private:
	int cost;
	string decription;
public:
	BeverageCoffe(string s, int c):decription(s),cost(c){}
	~BeverageCoffe(){}
	int getcost(){
		return cost;
	}
	string getdiscription(){
		return decription;
	}
};
}



#endif
