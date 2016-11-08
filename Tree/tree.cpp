#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
		int data = x;
		left = NULL;
		right = NULL;	
	}	
};


int main(){
	
	Node *root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(5);
	root->left->right = new Node(6);

	root->right->left->right = new Node(9);
	root->right->right->left = new Node(10);
	return 0;	
}
