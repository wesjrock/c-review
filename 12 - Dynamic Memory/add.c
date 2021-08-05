/* Return the sum of two integers using dynamic memory allocation */

#include <stdlib.h>
#include <stdio.h>

void PrintHelloWorld();
int *Add(int *a, int *b);

int main(int argc, char *argv[]){
	int a = 2, b = 4;
	int *ptr = Add(&a, &b);
	PrintHelloWorld();
	printf("Sum = %d\n", *ptr);

	return 0;
}

void PrintHelloWorld(){
	printf("Hello World\n");
}

int *Add(int *a, int *b){
	int *c = (int*)malloc(sizeof(int)); // HEAP
	*c = (*a) + (*b);
	return c;
}