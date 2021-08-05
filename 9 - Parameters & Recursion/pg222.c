#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* Pointer Arithmetic
   in: ./pg222 -123
   out: 123 		// because (argv[1] + 1) means point to the start of the array 
   					   which is the symbol '-' of the string "-123" and increment 1 * sizeof(char)
   					   in its address, so it's the same as (argv[1] + (1 * sizeof(char)) )
   */
int main(int argc, char *argv[]){
	printf("%d\n", atoi(argv[1] + 1) );

	return 0;
}

