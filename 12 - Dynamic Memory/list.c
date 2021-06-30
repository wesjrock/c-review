#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
	int data;
	struct Node *next;
} Node;

Node *head;

void Insert(int data, int position);
void Print();
void Delete(int position);
void Reverse();
void Print_Recursive(Node *p);
void Reverse_Print_Rec(Node *p);
void Reverse_Recursive(Node *p);

int main(int argc, char *argv[]){
	head = NULL; 					// empty list

	// 4 5 2 3 
	Insert(2, 1);
	Insert(3, 2);
	Insert(4, 1);
	Insert(5, 2);
	//Delete(3);
	//Reverse();
	//Print();
	//Print_Recursive(head);	
	//Reverse_Print_Rec(head);
	Reverse_Recursive(head);
	Print();

	return 0;
}

void Insert(int data, int position){
	int i;
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;

	if(position == 1){				
		newNode->next = head; 		  // if the list is empty, head is already NULL
		head = newNode; 
		return;
	}

	Node *previousNode = head;
	for(i = 0; i < position - 2; i++){ // (position - 2) because we are also counting the head, but it could be (i = 1; i < pos - 1; i++)
		previousNode = previousNode->next;
	}
	newNode->next = previousNode->next;
	previousNode->next = newNode;
}

void Print(){
	Node *temp = head;
	printf("List is: ");
	while(temp != NULL){
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void Delete(int position){
	Node *temp1 = head;
	if(position == 1){
		head = temp1->next;			// head points to second node
		free(temp1);
		return;	
	}

	int i;
	for(i = 0; i < position - 2; i++){
		temp1 = temp1->next; 		// temp1 points to (n-1)th node
	}

	Node *temp2 = temp1->next; 		// nth node
	temp1->next = temp2->next; 		// (n+1)th node or tail
	free(temp2);
}

void Reverse(){
	Node *current, *prev, *next;
	current = head;
	prev = NULL;

	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

void Print_Recursive(Node *p){
	if(p == NULL){
		printf("\n");
		return;
	}
	printf("%d ", p->data);
	Print_Recursive(p->next);
}

void Reverse_Print_Rec(Node *p){
	if(p == NULL){
		return;
	}
	Reverse_Print_Rec(p->next);
	printf("%d ", p->data);
}

void Reverse_Recursive(Node *p){
	if(p->next == NULL){
		head = p;
		return;
	}
	Reverse_Recursive(p->next);

	Node *q = p->next;
	q->next = p;
	p->next = NULL;
}