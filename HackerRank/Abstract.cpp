/*
 * Abstract.cpp
 *
 *  Created on: 18-May-2018
 *      Author: manoj
 */

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
class Book{
protected:
	string title;
	string author;
public:
	Book(string t,string a){
		title=t;
		author=a;
	}
	virtual void display()=0;
};

class MyBook:public Book{
	int price;
public:
	MyBook(string title,string author,int price):Book(title,author){
		this->price=price;
	}
	void display(){
		cout<<"Title:"<<" "<<title<<endl;
		cout<<"Author:"<<" "<<author<<endl;
		cout<<"Price:"<<" "<<price<<endl;
	}
};
int main(){
	string title,author;
	int price;
	getline(cin,title);
	getline(cin,author);
	cin>>price;
	MyBook Novel(title,author,price);
	Novel.display();
	return 0;

}
