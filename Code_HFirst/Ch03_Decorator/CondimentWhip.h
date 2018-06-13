#ifndef __CONDIMENT_WHIP_H
#define __CONDIMENT_WHIP_H
#include "CondimentDecorator.h"
namespace Decorator{

class CondimentWhip : public CondimentDecorator{
private:
	Beverage *beverage;
	int cost;
	string description;
public:
	CondimentWhip(Beverage *b):cost(5), description("Mocha"){
		this->beverage=b;
	}
virtual ~CondimentWhip(){

}
int getcost(){
	return beverage->getcost() + this->cost;
}
string getdiscription(){
	return this->description+" " + beverage->getdiscription();
}
};
}
#endif
