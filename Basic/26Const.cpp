/*
 * 26Const.cpp
 *
 *  Created on: 20-Apr-2018
 *      Author: manoj
 */

#include <iostream>


class Test{
	int x;
	static int y;
	mutable int z;
public:
	Test(int a,int b):x(a),z(b){}


	int getvalue(const int a, const int b) const;
};

int Test::y=5;

int Test::getvalue(const int t, const int s) const{
	y=15+10;
	z=20;
	t++;
	s++;
	//x=x+y;
	return t+s;

}


int main(){

	Test m_obj(10,20);
	std::cout<<m_obj.getvalue(15,20)<<std::endl;

}
