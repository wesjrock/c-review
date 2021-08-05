#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int iszero(int n);
void add_1(int *n);
void zero(int *n);

int main(int argc, char *argv[]){
	int n = 5;
	int res = iszero(n);
	printf("is zero result = %d\n", res);

 	add_1(&n);
 	printf("add_1 result = %d\n", n);

 	zero(&n);
 	printf("zero result = %d\n", n);

	return 0;
}

/* Input parameter: the parameter value is important for processing the function
					but its value isn't changed inside the function
*/
int iszero(int n){
	return n == 0;
}


// Output parameter: the parameter value is changed inside the function and sent out
void add_1(int *n){
	(*n)++;
}

void zero(int *n){
	*n = 0;
}

