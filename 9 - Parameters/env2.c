#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Print all environment variables but only the content after the '=' sign
int main(int argc, char *argv[], char **env){
	while(*env)
		puts(strchr(*env++ , '=') + 1);

	return 0;
}

