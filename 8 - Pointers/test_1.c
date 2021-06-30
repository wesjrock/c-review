#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Testing pointers

int main(){
	int v[3] = {10, 20, 30};
	int x = 5, y = 2;
	int *ptr, *ptr_2;
	int *ptr_3 = &y;


	ptr = &v[0];

	printf("v[0] = %d   ptr = %d\n", v[0], *ptr);


	ptr = v; // v is equal to &v[0]

	printf("v[0] = %d   ptr = %d\n", v[0], *ptr);


	ptr = &v[2];

	printf("v[2] = %d   ptr = %d\n", v[2], *ptr);


	ptr_2 = &x;

	printf("x = %d   ptr = %d\n", x, *ptr_2);
	

	printf("y = %d   ptr = %d\n", y, *ptr_3);

	return 0;
}

