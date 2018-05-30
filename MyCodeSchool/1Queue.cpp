/*
 * 1Queue.cpp
 *
 *  Created on: 23-May-2018
 *      Author: manoj
 */

/*
operation is :
Enqueue(x);
dequeue();
isEmpty();
peek() or front()
all operation of O(1)
rear=frot==only one element

use cases : where there is shared reosources but resource can handle only one at a time Printer in n/w example
*/
//Array Implementation:

//initially front=rear=-1;
#include <iostream>
#include <iomanip>
using namespace std;
const int MAXSIZE=10;
class Queue{
	int rear;
	int front;
	int arr[MAXSIZE];
public:
	Queue(){
		rear=front=-1;
		int arr[]={0};
	}
	int enqueue(int);
	int dequeue();
	int peek();
	bool isfull();
	bool isempty();
	void display();
};

bool Queue::isfull(){
	if(rear==MAXSIZE-1){
		return true;
	}
	else{
		return false;
	}
}
bool Queue::isempty(){
	if(front==-1 && rear==-1){
		return true;
	}
	else{
		return false;
	}
}
int Queue::enqueue(int x){
if(isfull()){
	cout<<"Queue is full"<<endl;
	return 0;
}
else if(isempty()){
	rear=front=0;
}
else{
	rear=rear+1;
}
	arr[rear]=x;
}
int Queue::peek(){
	return arr[front];
}

int Queue::dequeue(){
	if(isempty()){
		cout<<"Under Flow"<<endl;
		return -1;
	}else if(front==rear){
		int data=arr[front];
		rear=front=-1;
		return data;
	}
	else{
		int data=arr[front];
		front=front+1;
		return data;
	}

}
void Queue::display(){


	for(int i=front;i<=rear;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
}

int main(){
	Queue q=Queue();
	cout<<boolalpha;


	cout<<q.isempty()<<endl;
	cout<<q.isfull()<<endl;


	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);


	q.display();


	cout<<q.dequeue()<<endl;
	q.display();

	cout<<"peek Operation"<<endl;
	cout<<q.peek()<<endl;
}
