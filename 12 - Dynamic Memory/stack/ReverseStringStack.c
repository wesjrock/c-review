/* Reverse a string using a stack */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Node{
	int data;
	struct Node *next;
} Node;

Node *top = NULL;

void Push(int x);
void Pop();
int Top();
void Reverse(char *s, int size);

int main(){
	char s[51];
	printf("Enter a string: ");
	scanf("%s", s);
	Reverse(s, strlen(s));
	printf("Output: %s\n", s);

	return 0;
}

void Reverse(char *s, int size){
	int i;

	for(i = 0; i < size; i++)
		Push(s[i]);

	for(i = 0; i < size; i++){
		s[i] = Top(); // overwrite array
		Pop();
	}

}	

int Top(){
	return top->data;
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

