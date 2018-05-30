/*
 * 2Queuell.cc
 *
 *  Created on: 23-May-2018
 *      Author: manoj
 */

#include <iostream>
#include <vector>

using namespace std;
class Queue{
	int data;
	Queue *next;
	Queue *front;
	Queue *rear;
public:
	Queue(){
		data=0;
		next=NULL;
		front=NULL;
		rear=NULL;
	}
	void Enqueue(int data){
		Queue *temp= new Queue(data);
		if(front ==NULL && rear==NULL){
			front=rear=temp;
			return ;
		}else{
			rear->next=temp;
			rear=temp;
		}
	}

	void Dequeue(){
		Queue *temp=front;
		if(front==NULL){return;}//queue is empty
		if(front==rear){
			front=rear=NULL;// queue is only having single element.
		} else{
			front=front->next;
		}
		delete temp;
	}
};


int main(){
	int n;
	cin>>n;
	Queue obj=Queue();
	obj.Enqueue(n);
	obj.Enqueue(10);



	return 0;
}
