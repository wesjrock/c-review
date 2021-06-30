#include <stdlib.h>
#include <stdio.h>

// Recursion

// Returns numbers in descending order
void down(int n);

// Returns numbers in ascending order
void up(int n);

int main(int argc, char *argv[])
{
	int n = 5;

	//down(n);

	up(n);
	
	return 0;
}

void down(int n){
	if(n < 1) return;

	printf("%d\n", n);
	down(n - 1);
}

void up(int n){
	if(n < 1) return;

	up(n - 1);
	printf("%d\n", n);
}