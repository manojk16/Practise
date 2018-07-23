//opoverloading.cpp
#include <iostream>

#ifndef _EMP_
#define _EMP_
using namespace std;
class EMP
{
public:
	int hour;
	int rate;
	static int count;
public:
	EMP(){count++;}

	EMP(int h, int r);
	int getHour() const;// if we want to get something then fun should return something
	int getRate() const;
	void setHour(int);
	void setRate(int);
	float calSalary();
	~EMP()
	{	
		--count;
		cout<<"Distructor Called"<<count<<endl;
		
	}

};
#endif