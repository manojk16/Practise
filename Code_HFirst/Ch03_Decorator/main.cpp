#include <iostream>

#include "Beverage.h"
#include "BeverageBeer.h"
#include "BeverageCoffe.h"
#include "CondimentDecorator.h"
#include "CondimentMocha.h"
#include "CondimentWhip.h"



int main(){
Decorator::Beverage *beverage = new Decorator::Beveragebeer("Beer",10);
Decorator::Beverage *Mocha= new Decorator::CondimentMocha(beverage);
Decorator::Beverage *Whip = new Decorator::CondimentWhip(Mocha);


std ::cout<<beverage->getdiscription() <<" :: "<<beverage->getcost()<<std::endl;

std ::cout<<Mocha->getdiscription() <<" :: "<<Mocha->getcost()<<std::endl;
std ::cout<<Whip->getdiscription() <<" :: "<<Whip->getcost()<<std::endl;


}

