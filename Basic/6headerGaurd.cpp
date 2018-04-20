/*
 * 6headerGaurd.cpp
 *
 *  Created on: 13-Apr-2018
 *      Author: manoj
 */

#include <iostream>
#include "6headerGaurd.h"


void Rectangle::setValue(int x, int y){
	length=x;
	breath=y;
}
int Rectangle::getArea(){
	return length*breath;
}

void Rectangle::printdata(Rectangle& obj){
	obj.length=200;
	std::cout<<"Value of x is " << obj.length << std::endl;

}
int main(){

	/*Rectangle obj1;
	obj1.setValue(10,20);
	int Area=obj1.getArea();
	std::cout<<"Area is " << Area <<std::endl;*/
	std::cout<< "Let Me check on the Heap"<<std::endl;
	Rectangle* obj2=new Rectangle(20,30);
	std::cout<<obj2->getArea()<<std::endl;
	// I wan to create the object memory only on the stack no on the heap

   Rectangle* anObject=NULL;
   anObject=anObject->getanObject();

   std::cout<<"Call the friend function now " <<std::endl;

   printdata(anObject);



	return 0;
}


