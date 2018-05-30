/*
 * Day18.cc
 *
 *  Created on: 22-May-2018
 *      Author: manoj
 */




/*
Welcome to Day 18! Today we're learning about Stacks and Queues.
Check out the Tutorial tab for learning materials and an instructional video!

A palindrome is a word, phrase, number, or other sequence of characters which reads the same
backwards and forwards. Can you determine if a given string, s, is a palindrome?

To solve this challenge, we must first take each character in , enqueue it in a queue,
and also push that same character onto a stack. Once that's done, we must dequeue the first
character from the queue and pop the top character off the stack, then compare the two characters
to see if they are the same; as long as the characters match, we continue dequeueing, popping,
and comparing each character until our containers are empty (a non-match means s isn't a palindrome).


Write the following declarations and implementations:
Two instance variables: one for your stack, and one for your queue.
A void pushCharacter(char ch) method that pushes a character onto a stack.

A void enqueueCharacter(char ch) method that enqueues a character in the queue instance variable.

A char popCharacter() method that pops and returns the character at the top of the stack instance variable.

A char dequeueCharacter() method that dequeues and returns the first character in the queue instance variable.
Input Format

You do not need to read anything from stdin. The locked stub code in your editor reads a single line containing
string s. It then calls the methods specified above to pass each character to your instance variables.
Constraints
s is composed of lowercase English letters.

Output Format
You are not responsible for printing any output to stdout.
If your code is correctly written and s is a palindrome, the locked stub code will print "The word s is a palindrome" ;
otherwise, it will print "The word, s, is not a palindrome"
Sample Input
racecar
Sample Output
The word, racecar, is a palindrome.
*/


#include <iostream>

using namespace std;


class Node{
public:
	int data;
	Node *next;
public:
	Node(int d){
		data=d;
		next=NULL;
	}
};
class Solution{
	Node *queue;
	Node *stack;
public:
	Solution(){
		queue=NULL;
		stack=NULL;
	}
	void enqueueCharacter(char data){
		Node *newNode=new Node(data);
		Node *head=queue;
		if(head==NULL){
			queue=newNode;
		}else{
			while(head->next!=NULL){
				head=head->next;
			}
			head->next=newNode;
		}
	}

	void pushCharacter(char data){
		Node *newNode=new Node(data);
		Node *head=stack;
		if(head==NULL){
			stack=newNode;
		}else{
			newNode->next=stack;
			stack=newNode;
		}

	}
	char popCharacter(){
		char data;
		if(stack==NULL){
			data=0;
		}else{
			data=stack->data;
			stack = stack->next;
		}
		return data;
	}
	char dequeueCharacter(){
		char data;
		if(queue==NULL){
			data=0;
		}else{
			data=queue->data;
			queue=queue->next;
		}
		return data;
	}
	void display(){
		Node *start;
		cout<<"QUEUE"<<endl;
		start=queue;
		while(start){
			cout<<start->data<<" ";
			start=start->next;
		}
		start=stack;
		cout<<"STACK"<<endl;
		while(start){
			cout<<start->data<<" ";
			start=start->next;
		}

	}
};

int main(){
	string s;
	getline(cin,s);
	Solution obj;
	for(int i=0;i<s.length();i++){
		obj.pushCharacter(s[i]);
		obj.enqueueCharacter(s[i]);
	}
	bool isPalindrom=true;

	for(int i=0;i<s.length()/2;i++){
		if(obj.popCharacter()!=obj.dequeueCharacter()){
			isPalindrom=false;
			break;
		}
	}
		if(isPalindrom){
			cout<< "The Word, "<< s << ", is a palindrom.";
		}else{
			cout<< "The Word, "<< s << ", is not palindrom.";

		}
		cout<<endl;
		return 0;
}
