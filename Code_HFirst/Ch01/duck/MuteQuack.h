/*
 * MuteQuack.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */



#include "QuackBehavior.h"
#include <iostream>
namespace duck{
class MuteQuack:public QuackBehavior{
public:

	void quack(){
		std::cout<<"can’t quack!"<<std::endl;

	}

};
}


