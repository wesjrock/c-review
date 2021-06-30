#include <stdlib.h>
#include <stdio.h>

/* Enter parameters in the command line and return them in reverse order
   in: ./0910 alpha beta celta delta
   out: delta celta beta alpha ./0910
*/
int main(int argc, char *argv[])
{
	int i = 0;
	char *ptr;

	for(i = 0; i < argc / 2; i++){
		ptr = argv[i];
		argv[i] = argv[argc - i - 1];
		argv[argc - i - 1] = ptr;
	}

	for(i = 0; i < argc; i++)
		puts(argv[i]);

	return 0;
}

