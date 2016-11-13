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

Node* rec_reverse(Node *head){
	
	if(head == NULL) return NULL;
	if(head->next == NULL) return head;
	
	Node *rest = rec_reverse(head->next);
	head->next->next = head;
	head->next = NULL;

	return rest;	
}
int main(){
	Node *head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);
	
	Node *rev_head = rec_reverse(head);
	print (rev_head);	
	return 0;
}
