/* Queue - linked list */
#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node *front = NULL;
Node *rear = NULL;

void Enqueue(int x);
void Dequeue();
int Front();
void Print();

int main(int argc, char const *argv[]){
	Enqueue(3); Print(); 
	Enqueue(6); Print();
	Enqueue(9); Print();
	Dequeue();  Print();
	Enqueue(12); Print();
	
	return 0;
}

void Enqueue(int x){
	Node *temp = (Node*)malloc(sizeof(Node));
	temp->data = x;
	temp->next = NULL;

	if(front == NULL && rear == NULL){
		front = rear = temp;
		return;
	}

	rear->next = temp;
	rear = temp;
}

void Dequeue(){
	Node *temp = front;
	if(front == NULL){
		printf("Queue is empty!\n");
		return;
	}
	if(front == rear){
		front = rear = NULL;
	}
	else{
		front = front->next;
	}

	free(temp);
}

int Front(){
	if(front == NULL){
		printf("Queue is empty!\n");
		return -1;
	}

	return front->data;
}

void Print(){
	Node *temp = front;
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}