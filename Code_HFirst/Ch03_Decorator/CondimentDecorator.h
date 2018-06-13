#ifndef __CONDIMENT_DECORATOR_H
#define __CONDIMENT_DECORATOR_H
#include "Beverage.h"
namespace Decorator
{

class CondimentDecorator: public Beverage
{
public:
	CondimentDecorator(){}
	~CondimentDecorator(){}
};
}

#endif
