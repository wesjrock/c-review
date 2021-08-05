#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Print all environment variables
int main(int argc, char *argv[], char **env){
	while(*env)
		puts(*env++);

	return 0;
}

