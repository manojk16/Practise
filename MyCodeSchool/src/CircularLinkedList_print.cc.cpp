//============================================================================
// Name        : cc.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Important API for Linked list

// 1. Find the Nth Node form Last

1..
void printNthNodeFromEnd(Node *head, int n){

if(head==NULL){
	return ;
}
int len=0;
Node *temp=head;
while(temp!=NULL){
	temp=temp->next;
	len++;
}
int NthNode=len-n+1;
if(len<n)
	return;

temp=head;
for(int i=0;i<NthNode;i++){
	temp=temp->next;
}

cout<<temp->data;


}


//2.Check whether the given linked list is either NULL-terminated or ends in a cycle (cyclic).


Ans: use to find the loop in to a linked list

// Qu 3: Check whether the given linked list is NULL-terminated. If there is a cycle, find
//the length r the loop.


void detectloop(Node *head){
	Node *slwptr=head;
	node *fastptr=head;

	while(slwptr && fastptr && fastptr->next!=NULL){
		slwptr=slwptr->next;
		fastptr=fastptr->next->next;

		if(fastptr==slwptr){
			cout << "Loop find"<<endl;
			bool flag=1;
		}
	}
	int count=0;
	if(flag){
		fastptr=fastptr->next;
		while(fastptr!=slwptr){
			fastptr=fastptr->next;
			counter++;
		}
	}

}

// Qu 4 : Middle of the linked list :::

Traverse linked list using two pointers. Move one pointer by one and other pointer by two. When the fast pointer reaches end slow pointer will reach middle of the linked list.



		Check whether the given Linked List length is even or odd?
		Solution: Use a 2x pointer. Take a pointer that moves at 2x [two nodes at a time]. At the end, if
		the length is even, then the pointer will be NULL; otherwise it will point to the last node



		*******************************STACK******************************************



*************************Question********************************************************






