#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*  Page 195

	output:
	x = 5 , &x = 140732871404264
	x = 5 , &x = 140732871404264
	x = 5 , &x = 140732871404264
*/
int main(){
	int x = 5;
	int *ptr_x;
	int **ptr_ptr_x; // with pointer to pointer it is possible to store addresses of other pointers

	ptr_x = &x;
	ptr_ptr_x = &ptr_x;

	printf("x = %d , &x = %ld\n", x, &x);
	printf("x = %d , &x = %ld\n", *ptr_x, ptr_x);
	printf("x = %d , &x = %ld\n", **ptr_ptr_x, *ptr_ptr_x);

	return 0;
}

