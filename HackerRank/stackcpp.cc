/*
 * stackcpp.cc
 *
 *  Created on: 21-May-2018
 *      Author: manoj
 */
/*
	Study of stack and queue;
*/
#include <iostream>
#include <vector>
using namespace std;

class Stack{
	int top;
	int st_arr[10];
public:

	Stack(){
		top=-1;
		int st_arr={0};
	}
	void push(int x);
	int pop();
	bool isEmpty();
};

void Stack::push(int x){
	if(top>=10){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		st_arr[++top]=x;
		cout<<"Element Entered"<<endl;;
	}
}

int Stack::pop(){
	if(top<0){
		cout<<"Under flow"<<endl;
		return 0;
	}
	else{
		int x=st_arr[top--];
		return x;
	}
}

bool Stack::isEmpty(){
	if(top<0){
		cout<<"Stack is Empty"<<endl;
		return false;
	}
	else{
		cout<<"Stack is Not Empty"<<endl;
		return true;
	}
}

int main(){
	Stack st=Stack();
	st.push(20);
	st.push(10);
	cout<<st.pop()<<endl;
	cout<<st.isEmpty()<<endl;
	cout<<st.pop()<<endl;
	cout<<st.isEmpty()<<endl;


}
