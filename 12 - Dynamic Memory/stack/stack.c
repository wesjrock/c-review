#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
	int data;
	struct Node *next;
} Node;

Node *top = NULL;

void Push(int x);
void Pop();
int Top();
int IsEmpty();
void Print();

int main(int argc, char *argv[]){
	Push(2); Print();
	Push(4); Print();
	Push(6); Print();
	Pop();   Print();

	return 0;
}

void Push(int x){
	Node *temp = (Node*)malloc(sizeof(Node));
	temp->data = x;
	temp->next = top;
	top = temp;
}

void Pop(){
	Node *temp;
	if(top == NULL)
		return;

	temp = top;
	top = top->next;
	free(temp);
}

int Top(){
	return top->data;
}

int IsEmpty(){
	if(top == NULL)
		return 1;

	return 0;
}

void Print(){
	Node *temp = top;

	printf("Stack: ");
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

