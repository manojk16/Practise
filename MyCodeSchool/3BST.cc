/*
 * 3tree.cc
 *
 *  Created on: 23-May-2018
 *      Author: manoj
 */



/*
	Introduction to tree : Non Linear data structure,
	Tree can be called recursive data structure
	Tree with N Nodes there will be N-1 edges;
	Depth x= length of the path from root to that Node
	H eight Of a tree= No of edges of the longest path x to a leaf node
	Height of the leaf node is zero
	Hieght of tree = Height of root node

	Simplest Tree: Any tree in which a node can have atmost two children
	Application : storing heirarchical data
	organizig data for quick search, insertion and deletion


	Trie-> is a special type of tree which is used to store the dictionary


	Binary Tree: Each Node in tree can have at most 2 children
	proper Binary Tree : If every node have 0 or 2 nodes
	Competes Binary Tree: If all level except possibly the last level are compilitely filled
	and all nodes are far left as possible
	Maximum Number of Nodes at any level will be pow(2,i);

	Perfect Binary Tree: all nodes are completely filled
	Max Number of nodes at height h pow(2,1)+pow(2,2)+pow(2,3)............pow(2,h);
	=pow(2,h+1)-1;or pow(2,no of levels)-1;

	h=log(n+1)-1

	Min hieht of a tree = floor(log n)
	Max Hieght = n-1 in sparse tree


	Depth of a node: Number of path from root to that Node
	and Hieght of the Tree is  : Number of edges in the longest path from the root Node to a leaf Node

	Hieght of tree is the max depth of a Node in the tree
	Height of tree is eqaul to Max(hieghtofleft subtree, hieght of right sub tree)+1;


	************************Tree Traversal**************************************************
	************************
	************************
	************************  DFS and BFS
	In BFS We visit all the node at same the level before visiting the node at the next level
	in the DFS the relative order to visit the subtree can be different like it may be root Left sbtree and Right Subtree or it may be rightsubtree left subtree and root.
*/

#include <iostream>
#include <vector>

using namespace std;
struct BstNode{
public:

	int data;
	BstNode *left;
	BstNode *right;

};
BstNode *GetNewNode(int data){
	BstNode *new_node=new BstNode();
	new_node->data=data;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}
BstNode* insert(BstNode *root, int data){
	if(root==NULL)// tree is empty
		{
		root=GetNewNode(data);
		return root;
	}
	else if(data<=root->data){
		root->left=insert(root->left,data);
	}else{
		root->right=insert(root->right,data);
	}
	return root;
}
//Iterative Solution
int findMin(BstNode *root){
	BstNode *current=root;
	if(root==NULL){
		cout<<"Tree is Empty"<<endl;
		return -1;
	}
	while(current->left!=NULL){
		current=current->left;
	}
	return current->data;
}
int findMax(BstNode *root){
	if(root==NULL){
			cout<<"Tree is Empty"<<endl;
			return -1;
		}
	while(root->right!=NULL){
		root=root->right;
	}
	return root->data;
}
// Recursive Solution:

int findMinR(BstNode *root){
	if(root==NULL){
			cout<<"Tree is Empty"<<endl;
			return -1;
		}else if(root->left==NULL){
		return root->data;
	}else{
		return findMinR(root->left);
	}
}
int findMaxR(BstNode *root){
	if(root==NULL){
			cout<<"Tree is Empty"<<endl;
			return -1;
		}else if(root->right==NULL){
		return root->data;
	}else{
		return findMaxR(root->right);
	}
}

// Height of the Binary Tree

int findHeight(BstNode *root){
	if(root==NULL){
		return -1; // There is a reason to return -1 this is beacause if we return 0 then from else condition we are returning max(0,0)+1 means height of leaf node is 1 so to make it zero we return -1
	}
	int leftheight, rightheight;
	leftheight=findHeight(root->left);
	rightheight=findHeight(root->right);
	return max(leftheight,rightheight)+1;
	// T(n)=o(n);
}
int main(){
	BstNode *root=NULL;
	root =insert(root,15);
	root =insert(root,10);
	root =insert(root,20);
	root =insert(root,25);
	root =insert(root,8);
	root =insert(root,12);
	// Ask Number to Enter
	cout<<"Min is :: " << findMin(root)<<endl;
	cout<<"Max is :: " << findMax(root)<<endl;
	cout<<"MinR is :: " << findMinR(root)<<endl;
	cout<<"MaxR is :: " << findMaxR(root)<<endl;
	/*int number;
	cin >> number;
	if(search(root,number)==true)cout<<"Found\n";
	else cout<<"Not Found\n";*/
	return 0;
}
/*

void insert(BstNode **rootptr, int data){
	if(*root==NULL)// tree is empty
		{

	}
}
int main(){
	BstNode *root=NULL;
	insert(&root,15);
	insert(&root,10);
	insert(&root,20);
	return 0;
}

*/
