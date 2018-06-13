/*
 * Squeak.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */

#include "QuackBehavior.h"
#include <iostream>


class QuackSqueak:public QuackBehavior{
public:

	void quack(){
		std::cout<<"rubber duckie squeak"<<std::endl;

	}

};

