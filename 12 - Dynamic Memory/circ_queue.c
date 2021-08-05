/* Circular Queue with Array */

#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 4 

typedef struct{
	int data[MAX_SIZE];
	int front, rear;
} QUEUE;

void Initialize(QUEUE *q);
int IsEmpty(QUEUE *q);
int IsEmpty(QUEUE *q);
int Front(QUEUE *q);
int IsFull(QUEUE *q);
void Enqueue(QUEUE *q, int value);
void Dequeue(QUEUE *q);
void Print(QUEUE q);

int main(int argc, char *argv[]){
	QUEUE q1;

	Initialize(&q1);
	/*
	Enqueue(&q1, 1);
	Enqueue(&q1, 2);
	Enqueue(&q1, 3);
	Print(q1);
	Enqueue(&q1, 4);
	Print(q1);
	Dequeue(&q1);
	Print(q1);
	*/

	Enqueue(&q1, 2);
	Print(q1);
	
	
	return 0;
}

void Initialize(QUEUE *q){
	q->front = -1;
	q->rear = -1;
}

int IsEmpty(QUEUE *q){
	if(q->front == -1 && q->rear == -1)
		return 1;
	else
		return 0;
}

int Front(QUEUE *q){
	if(q->front == -1){
		printf("\nError: empty queue!\n");
		return -1;
	}
	else
		return q->data[q->front];
}

int IsFull(QUEUE *q){
	return ( (q->rear + 1) % MAX_SIZE == q->front );
}

void Enqueue(QUEUE *q, int value){
	if(IsFull(q)){
		printf("\nQueue is full!\n");
		return;
	}	
	else if(IsEmpty(q)){
		q->front = q->rear = 0;
	}
	else{
		q->rear = (q->rear + 1) % MAX_SIZE;
	}
	q->data[q->rear] = value;
}

void Dequeue(QUEUE *q){
	if(IsEmpty(q)){
		printf("\nQueue is empty!\n");
		return;
	}
	else if(q->front == q->rear)
		q->front = q->rear = -1;
	else
		q->front = (q->front + 1) % MAX_SIZE;
}

void Print(QUEUE q){
	if(IsEmpty(&q))
		return;

	int i;
	int count = ((q.rear + MAX_SIZE - q.front) % MAX_SIZE) + 1;	

	for(i = 0; i < count; i++){
		int index = (q.front + i) % MAX_SIZE;
		printf("%d ", q.data[index]);
	}
	printf("\n");
}

