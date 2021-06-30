#include <stdlib.h>
#include <stdio.h>

int main(){

	/*
	// SIZEOF: memory size operator
	printf("char size = %d\n", sizeof(char));
	printf("int size = %d\n", sizeof(int));
	printf("short int size = %d\n", sizeof(short int));
	printf("long int size = %d\n", sizeof(long ,int));
	printf("float size = %d\n", sizeof(float));
	printf("double size = %d\n", sizeof(double));
	*/

	// Pagina 35

	// DIVISION
	int  a = 21;
	float  b = 4.0;

	printf("%d / %f = %f\n", a, b, a/b);

	// REMAINDER 
	int c = a;
	int d = b;

	printf("%d %% %d = %d\n", c, d, c%d);

	return 0;
}