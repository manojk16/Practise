/*
 * RubberDuck.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */

#ifndef __RBR_DUCK_H__
#define __RBR_DUCK_H__
#include "duck.h"
#include <iostream>

namespace duck{
class RubberDuck:public Duck{
public:
	RubberDuck():Duck(new FlyNoWay()){

	}

	}
	void display(){
		std::cout<<"looks like a RubberDuck"<<std::endl;
	}
};
}
#endif
