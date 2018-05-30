#include <iostream>


using namespace std;

class Node{
public:
	int data;
	Node *next;
	Node *prev;

	Node(int d){

		data=d;
		next=NULL;
		prev=NULL;
	}
};
void insert(Node **head,int d){
	Node *new_node=new Node(d);
	Node *temp=*head;
	if(temp==NULL){
		*head=new_node;
		return;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=new_node;
	new_node->prev=temp;
	new_node->next=NULL;
	return ;

}

void display(Node *head){
	cout<<"In display"<<endl;
	if(head==NULL){
		cout<<"In Null condition"<<endl;
		return;
	}
	while(head!=NULL){
		cout<<head->data<<"---->";
		head=head->next;
	}
	cout<<"Null"<<endl;
}

Node* SortedInsert(Node *head,int data)
{
    Node *new_node=new Node(data);
    new_node->data=data;
    Node *current=NULL;
    if(head==NULL){
        head=new_node;
        return head;
    }
   // If new data is > then the head->data;
    else if(head->data > new_node->data){
        new_node->next=head;
        new_node->next->prev=new_node;
        head=new_node;
        return head;
    }
    else {
        current=head;
        while(current->next!=NULL && current->next->data < new_node->data){
            current=current->next;
        }
        new_node->next=current->next;
        if(current->next!=NULL){
            new_node->next->prev=new_node;
        }
        current->next=new_node;
        new_node->prev=current;
        return head;
    }
    return head;
}

Node *reverseDoubly(Node *head){
	if(head==NULL){
		return NULL;
	}
	Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	return temp;
}

void display2(Node *current){
	while(current!=NULL){
		cout<<current->data<<" ";
		current=current->prev;
	}
}
int main(){
Node *head=NULL;

insert(&head,25);
insert(&head,35);
insert(&head,45);
insert(&head,55);
cout<<"display After insertion "<<endl;
display(head);
Node *temp=SortedInsert(head,38);
cout<<"display after sortInsert"<<endl;
display(head);
Node *rev=reverseDoubly(head);
cout<<"display after reverse"<<endl;
display2(rev);
cout<<"\n";


return 0;
}