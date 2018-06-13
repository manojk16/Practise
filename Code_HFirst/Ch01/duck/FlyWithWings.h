/*
 * FlyWithWings.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */

#ifndef __FLYW_DUCK_H__
#define __FLYW_DUCK_H__

#include <iostream>
#include "FlyBehavior.h"


class FlyWithWings:public FlyBehavior{
public:
	void fly(){
		std::cout<<"duck flying"<<std::endl;
	}

};
#endif
