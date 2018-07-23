//============================================================================
// Name        : BoxIt.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

class Box{
	int l,b,h;
public:
	Box():l(0),b(0),h(0){}
	Box(int l,int b,int h):l(l),b(b),h(h){

	}
	Box(const Box &obj){
		l=obj.l;
		b=obj.b;
		h=obj.h;
	}
int getLength(){
	return l;
}
int getBreadth(){
	return b;
}
int getHeight(){
	return h;
}
long long CalculateVolume(){
	return static_cast<long long > (l*b*h);
}
bool operator<(Box& obj){
	return (l < obj.l && b < obj.b && h < obj.h);
}
friend ostream& operator<<(ostream& out, Box& B);
};
ostream& operator<<(ostream& out, Box& B){
	out << B.l <<" " << B.h <<" " << B.b<<endl;
	return out;
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
