#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Returns the number and names of the arguments passed to the main function.
   in:  ./0905 alfa 123 x 55a
   out: 1 - Parameter = "./0905"
		2 - Parameter = "alfa"
		3 - Parameter = "123"
		4 - Parameter = "x"
		5 - Parameter = "55a"
*/
int main(int argc, char *argv[]){
	int i;

	for (i = 0; i < argc; i++){
		printf("%d - Parameter = \"%s\"\n", i + 1, argv[i]);
	}
	
	return 0;
}

