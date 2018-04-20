/*
 * 6headerGaurd.h
 *
 *  Created on: 13-Apr-2018
 *      Author: manoj
 */


#ifndef HEADER_G
#define HEADER_G
class Rectangle{
	int length;
	int breath;

//public:
private:
	Rectangle(){
		std::cout<<"Object Created"<<std::endl;
		length=0;
		breath=0;
	}
public:
Rectangle(int x, int y){
	length=x;
	breath=y;
}

void printdata(Rectangle&);
public:

	void setValue(int, int);
	int getArea();

Rectangle* getanObject(){

	return (new Rectangle);

}

};

#endif

