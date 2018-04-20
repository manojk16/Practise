/*
 * 19typeCasting.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: manoj
 */
#include <iostream>
using namespace std;
class TypeCasting{
	int i;

};

class Addition{
	int x,y;
public:
	Addition(int a,int b){
		x=a;
		y=b;
	}
	int result(){
		return x+y;
	}
};

int main(){
	TypeCasting d;
	Addition *ptr;
	ptr=(Addition*)&d;
	cout<<ptr->result()<<endl;
	return 0;
}

