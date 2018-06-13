/*
 * MallardDuck.h
 *
 *  Created on: 11-Jun-2018
 *      Author: manoj
 */


#include "duck.h"
#include <iostream>
namespace duck{
class MallardDuck:public Duck{
public:
	MallardDuck(): Duck(new FlyNoWay(), new Quack())
	    {
	    }
	void display(){
		std::cout<<"looks liks a MALLAR"<<std::endl;
	}
};
}

