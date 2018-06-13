/*
 * Quack.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */
#include <iostream>
#include "QuackBehavior.h"
class Quack:public QuackBehavior{
	public:
	void quack(){
		std::cout <<"duck quacking"<<std::endl;
	}

};


