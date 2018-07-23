#ifndef _SIMPLE_FACTORY_
#define _SIMPLE_FACTORY_

#include "Pizza.h"
#include "CheesPizza.h"
#include "VeggiePizza.h"
#include <string>

class SimplePizzafactory{
public:
static Pizza* createPizza(string str){
		if(str=="cheese")
		{
			pizza_ = new CheesePizza;
		}
		else if(str=="Veggie")
		{
			pizza_ = new VeggiePizza;
		}

		return pizza_;
	}

private:
	static Pizza* pizza_;
};

Pizza* SimplePizzafactory::pizza_=NULL;

#endif