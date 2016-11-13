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

void print(Node *head){
	Node *temp = head;
	while(temp){
		cout << temp-> data << " ";
		temp = temp->next;
	}

	cout << endl;
}

Node* reverse(Node *head){
	Node *curr = head;
	Node *prev = NULL;
	Node *next = NULL;
	
	while(curr){
		next= curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	
	return prev;	
}
int main(){
	Node *head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);
	
	Node *rev_head = reverse(head);
	print (rev_head);	
	return 0;
}
