/*
 * FlyNoWay.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */

#ifndef __FLYN_DUCK_H__
#define __FLYN_DUCK_H__


#include <iostream>
#include "FlyBehavior.h"


class FlyNoWay:public FlyBehavior{
public:
	void fly(){
		std::cout<<"No Fly"<<std::endl;
	}
};
#endif
