/*
 * 24CopyConstructor.cpp
 *
 *  Created on: 16-Apr-2018
 *      Author: manoj
 */


#include <iostream>
using namespace std;

class Test_Copy{
	int hieght;
	int length;
	int breath;
public:
	int objcnt;
	int cnt;
	Test_Copy(int h=1,int l=2,int b=3):hieght(h),breath(b),length(l),cnt(0),objcnt(0){
		cout<<"Constructor Called\n";
		cnt++;
		objcnt++;
	}
	Test_Copy(const Test_Copy& obj){
		cout<<"In Copy Constructor \n";
		hieght=obj.hieght;
		length=obj.length;
		breath=obj.breath;
		objcnt=obj.objcnt;
		cnt=obj.cnt;
		cnt++;
		objcnt++;
	}

	~Test_Copy(){
		cnt--;
		objcnt--;
		cout<<"In Destructor"<<endl;
	}
	int getcnt(){
		return cnt;
	}
	int volume(){
		return length*hieght*breath;
	}
};

int main(){

Test_Copy obj1(10,20);
Test_Copy obj2(obj1);
cout<<"Object Cnt"<<obj2.getcnt()<<endl;
cout<<"Object. Volume"<<obj2.volume()<<endl;

}

