#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;

	Node(int x){
		data = x;
		next = NULL;	
	}
};

void print(Node *root){
	Node *temp = root;
	while(temp){
		cout << temp-> data << " ";
		temp = temp->next;
	}

	cout << endl;
}
int main(){
	Node *root = new Node(1);
	root->next = new Node(2);
	root->next->next = new Node(3);
	root->next->next->next = new Node(4);
	
	print (root);	
	return 0;
}
