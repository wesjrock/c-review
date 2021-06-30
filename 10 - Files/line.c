#include <stdlib.h>
#include <stdio.h>

#define MAX_STR 120 	// Dimension of the bigger string

/*	Given a file passed by command line, put line numbers in it */
int main(int argc, char *argv[]){
	FILE *fp;
	char s[MAX_STR + 1]; 
	int i = 0;           

	if(argc == 1){
		fprintf(stderr, "Syntax: Line [File]\n\n");
		exit(1);
	}

	if( (fp = fopen(argv[1] , "r")) == NULL){
		fprintf(stderr, "Impossible to open file %s\n\n", argv[1]);
		exit(1);
	}

	while( fgets(s, MAX_STR + 1, fp) != NULL)
		printf("%2d: %s", ++i, s);

	fclose(fp);
	
	return 0;
}

