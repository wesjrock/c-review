#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
	Returns the sum of arguments passed to the main function
	Note: use pointers
	in:  10 10 10
	out: 30
*/
int main(int argc, char *argv[])
{
	int total;

	argv++;

	for(total = 0; *argv != NULL; argv++){
		total += atoi(*argv);
	}

	printf("total = %d\n", total);
	
	return 0;
}

