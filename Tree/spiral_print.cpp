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


void printSpiral(Node *root){
	stack<Node*> s1;
	stack<Node*> s2;
	//queue<Node*> q;
	Node *curr = root;
	//cout << "In spiral " << endl;
	s1.push(curr);
	Node *temp = NULL;
	while(!s1.empty()){
	
//	cout << "In spiral " << endl;
		while(!s1.empty()){
			temp = s1.top();
			s1.pop();
			if(temp->left != NULL) s2.push(temp->left);
			if(temp->right!= NULL) s2.push(temp->right);
			cout << temp->data << " ";	
		}
		while(!s2.empty()){
			temp = s2.top();
			s2.pop();
			if(temp->right != NULL) s1.push(temp->right);
			if(temp->left != NULL) s1.push(temp->left);
			cout << temp->data << " ";
		
		}
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
	
	print(root);
	cout << endl;
	cout << "Sprial" << endl;
	printSpiral(root);
	cout << endl;
	return 0;	
}
