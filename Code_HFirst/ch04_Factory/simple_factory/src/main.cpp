

#include "../include/SimplePizzafactory.h"



int main(){

	SimplePizzafactory::createPizza("cheese")->prepare();
	SimplePizzafactory::createPizza("Veggie")->Bake();


	return 0;
}