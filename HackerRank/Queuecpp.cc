/*
 * Queuecpp.cc
 *
 *  Created on: 22-May-2018
 *      Author: manoj
 */

// Implementation in Queue
#include <iostream>
using namespace std;
const int MAXSIZE=10;
class Queue{
	int rear;
	int front;
	int arr[MAXSIZE];
public:
	Queue(){
		rear=front=0;
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
	if(front<0||front>rear){
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
else{
	rear=rear+1;
	arr[rear]=x;
	return 1;
}
}
int Queue::peek(){
	return arr[front];
}

int Queue::dequeue(){
	if(isempty()){
		cout<<"Under Flow"<<endl;
		return 0;
	}
	else{
		int data=arr[front];
		front=front+1;
		return data;
	}
}
void Queue::display(){

	cout<<front<<" "<<rear<<endl;
	for(int i=front;i<=rear;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
}

int main(){
	Queue q=Queue();
	cout<<q.isempty()<<endl;
	cout<<q.isfull()<<endl;

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);

	q.display();
	cout<<q.dequeue()<<endl;
}
