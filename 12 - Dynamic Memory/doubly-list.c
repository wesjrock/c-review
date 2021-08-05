/* Doubly Linked List */

#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
	int data;
	struct Node *prev;
	struct Node *next;
} Node;

Node *head;

// Creates a new node and returns a pointer to it
Node* GetNewNode(int x);
void InsertAtHead(int x);
void InsertAtTail(int x);
//Prints all elements in linked list in forward traversal order
void Print();
void ReversePrint();

int main(int argc, char *argv[]){
	head = NULL;

	InsertAtHead(1);
	InsertAtHead(2);
	InsertAtHead(3);
	Print();
	ReversePrint();
	
	return 0;
}

Node* GetNewNode(int x){
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void InsertAtHead(int x){
	Node *newNode = GetNewNode(x);
	if(head == NULL){
		head = newNode;
		return;
	}

	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}

void InsertAtTail(int x){
	Node *temp = head;
	Node *newNode = GetNewNode(x);
	if(head == NULL){
		head = newNode;
		return;
	}

	while(temp != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
}

void Print(){
	Node *temp = head;
	printf("Forward: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void ReversePrint(){
	Node *temp = head;
	if(temp == NULL){ // empty list
	 	return;
	}

	while(temp->next != NULL){ // going to last node
		temp = temp->next;
	}

	// traversing backwards using prev pointer
	printf("Reverse: ");
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("\n");
}