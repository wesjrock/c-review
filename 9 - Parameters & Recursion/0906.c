#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
	Returns the sum of arguments passed to the main function.
	Note: without pointers
	in:  10 10 10
	out: 30
*/
int main(int argc, char **argv)
{
	int i, total;

	// i starts at 1 because we don't need argv[0] which is the program name
	for(i = 1, total = 0; i < argc; i++){
		total += atoi(argv[i]);
	}
	printf("total = %d\n", total);
	
	return 0;
}

