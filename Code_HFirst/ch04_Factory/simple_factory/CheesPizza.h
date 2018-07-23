
#ifndef _CHEESE_PIZZA_
#define _CHEESE_PIZZA_
#include "Pizza.h"

#include <iostream>

class CheesPizza : public Pizza{
public:
	void createPizza(){
		std::cout<<"Create The Pizza \n";
	}

	void bakePizza(){
		std::cout<<"Bake The Pizza \n";
	}
	
};

#endif
