#include <stdlib.h>
#include <stdio.h>

// rand() returns a random number between 0 and MAX_SIZE - 1

int main(){
	int i, size = 10;
	int v[11];

	/*
	// return numbers between 0 and 9
	for(i = 1; i <= size; i++)
		v[i] = rand() % 10;

	for(i = 1; i <= size; i++)
		printf("%d\n", v[i]);
	*/

	
	// return numbers between 1 and 10
	for(i = 1; i <= size; i++)
		v[i] = 1 + rand() % 10;

	for(i = 1; i <= size; i++)
		printf("%d\n", v[i]);

	return 0;
}