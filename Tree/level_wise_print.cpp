#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
		data = x;
		left = NULL;
		right = NULL;	
	}	
};


void printLevelWise(Node *root){
	queue<Node*> q;
	Node *curr = root;
	
	q.push(curr);
	
	while(!q.empty()){
		Node *temp = q.front();
		if(temp->left) q.push(temp->left);
		if(temp->right)q.push(temp->right);
		cout << temp->data << " ";
		q.pop();
	}
	
}
void print(Node *root){
	if(root == NULL) return;
	print(root->left);
	cout << root-> data << " ";
	print(root->right);
	
}

int main(){
	
	Node *root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(5);
	root->left->right = new Node(6);
	root->right->left = new Node(67);
	root->right->left->right = new Node(9);
	root->right->left->left = new Node(10);
	
	printLevelWise(root);
	return 0;	
}
