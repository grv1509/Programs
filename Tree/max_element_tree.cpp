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


int findMax(Node *root){
	
	int l , r,root_val, max;
	if(root == NULL) return 0;
	else{
		root_val = root->data;
		l = findMax(root->left);
		r = findMax(root->right);

		if(l<r){
			max= r;
		}else max = l;

		if(root_val > max) max = root_val;
	}

	return max;

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
	cout << findMax(root) << endl;
	return 0;	
}
