#include<iostream>
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

int max(int a, int b) {
	return(( a>b)?a:b);
}
int findHeight(Node *root){
	if(root == NULL) return 0;
	
	int l = findHeight(root->left);
	int r = findHeight(root->right);
	
	return max(r, l)+1;
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
	
	cout << findHeight(root) << endl;
	return 0;	
}
