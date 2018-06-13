
// This is strategy Pattern
#ifndef __DUCK_H__
#define __DUCK_H__
#include <iostream>
#include "QuackBehavior.h"
#include "FlyBehavior.h"

namespace duck{

class Duck{

private :
FlyBehavior *flyBehavior;
QuackBehavior *quackBehavior;
public:

void swim(){
	std::cout<<"All duck can Swim "<<std::endl;
}
void display()=0;
void performQuack(){
	quackBehavior->quack();

}
void performFly(){
	flyBehavior->fly();
}

void setFlyBehavior(FlyBehavior *fly){
	flyBehavior=fly;

}
void setQuackBehavior(QuackBehavior *quack){
	quackBehavior=quack;
}

Duck(FlyBehavior *f, QuackBehavior *q)
    {
		quackBehavior = q;
		flyBehavior = f;
    }
~Duck()
   {
       delete q;
       delete f;
   }
};
}
#endif
