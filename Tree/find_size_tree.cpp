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


int findSize(Node *root){
	
	if(root == NULL) return 0;
		
	return (1+ findSize(root->left) + findSize(root->right));

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
	//static int max = -9999;
	cout << findSize(root) << endl;
	return 0;	
}
