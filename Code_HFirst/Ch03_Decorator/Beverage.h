#ifndef _BEVARAGE_
#define _BEVARAGE_

#include <string>


namespace Decorator{
using std::string;

class Beverage{
private:

public:
	Beverage(){

	}
	virtual ~Beverage(){

	}
	virtual int getcost()=0;
	virtual string getdiscription()=0;

};
}


#endif
