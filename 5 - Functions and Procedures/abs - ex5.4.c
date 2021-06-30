#include <stdlib.h>
#include <stdio.h>

// ex4
int abs(int x);

int main(){
	int x;

	scanf("%d", &x);

	printf("Abs(%d) --> %d\n", x, abs(x));



	return 0;
}

int abs(int x){
	if(x < 0)
		return -x; // x * (-1)
	return x;
}