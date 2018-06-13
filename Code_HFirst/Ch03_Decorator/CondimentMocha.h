#ifndef __CONDIMENT_MOCHA_H
#define __CONDIMENT_MOCHA_H
#include "CondimentDecorator.h"
#include <string>
namespace Decorator{

class CondimentMocha : public CondimentDecorator{
private:
	Beverage *beverage;
	int cost;
	string description;
public:
	CondimentMocha(Beverage *b):cost(5), description("Mocha"){
		this->beverage=b;
	}
virtual ~CondimentMocha(){}
int getcost(){
	return beverage->getcost() + this->cost;
}
string getdiscription(){
	return this->description+" " + beverage->getdiscription();
}
};
}
#endif
