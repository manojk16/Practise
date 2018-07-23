#ifndef _VEGGIE_PIZZA_
#define _VEGGIE_PIZZA_
#include "Pizza.h"


class VeggiePizza:public Pizza{
public:
	void createPizza(){
		std::cout<<"Create The Pizza \n";
	}

	void bakePizza(){
		std::cout<<"Bake The Pizza \n";
	}
	
};

#endif