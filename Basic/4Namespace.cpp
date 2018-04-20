/*
 * 4Namespace.cpp
 *
 *  Created on: 13-Apr-2018
 *      Author: manoj
 */
#include<iostream>
namespace alpha{
int fisrt;
int second;

}

namespace gamma{
int second;
int third;
}


namespace delta{
int third;
int fourth;
}


int main(){
using namespace alpha;
fisrt=20;
second=30;
gamma::second=40;
std::cout<<"Fisrt="<<fisrt<<"\t"<<"Second=="<<second<<std::endl;
std::cout<<"Gamma Second=="<<gamma::second<<std::endl;

}

