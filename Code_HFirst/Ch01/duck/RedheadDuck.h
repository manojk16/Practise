/*
 * RedheadDuck.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */

#ifndef __RED_DUCK_H__
#define __RED_DUCK_H__


#include "duck.h"
#include <iostream>
namespace duck{
class RedheadDuck:public Duck{
public:
	RedheadDuck(): Duck(new FlyWithWings(), new QuackSqueak())
		    {
		    }
	void display(){
		std::cout<<"looks lika a RedheadDuck"<<std::endl;
	}
};
}

#endif
