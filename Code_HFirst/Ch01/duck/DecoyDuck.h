/*
 * DecoyDuck.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */

#ifndef __DECOY_DUCK_H__
#define __DECOY_DUCK_H__


#include "duck.h"
#include <iostream>

class DecoyDuck:public Duck{
public:
	void display(){
		std::cout<<"looks lika a DecoyDuck"<<std::endl;
	}
};


#endif
