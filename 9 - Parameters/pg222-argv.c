#include <stdlib.h>
#include <stdio.h>

/* Printing *argv[] values
   in: ./pg222 -123 5
   out: 1 2 3 5 		
   */
int main(int argc, char *argv[]){
	// second string
	printf("%c\n", argv[1][1]);
	printf("%c\n", argv[1][2]);
	printf("%c\n", argv[1][3]);

	// third string
	printf("%c\n", argv[2][0]);

	return 0;
}

