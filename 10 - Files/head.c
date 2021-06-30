#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define MAX_LINES 80
#define SIGNAL '-'

// Show errors
void Fatal_Error(int error_id, char *string);

/*  File Filters
    Implement the head program whose syntax is as follows:
    head [-n] [file]

    Example: head -15 head.txt

	Print out the 'n' lines of the 'file' passed on the command line.
	If the value of 'n' value is not passed, 10 lines are shown by default.
	
	Valid syntaxes:	head
					head -n
					head file
					head -n file
*/
int main(int argc, char *argv[]){
	FILE *fp = stdin;
	char s[MAX_LINES + 1];          // +1 because of \0
	int i = 0;						// line processor index
	int number_of_lines = 10;

	switch(argc){
		//  syntax: head
		case 1: break;

		/*	syntax: head -n
					head file 
		*/
		case 2: if(argv[1][0] == SIGNAL)
					number_of_lines = atoi(argv[1] + 1);
				else
					if( (fp = fopen(argv[1], "r")) == NULL )
						Fatal_Error(2, argv[1]);
				break;

		/*	syntax: head -n file
		*/
		case 3: if(argv[1][0] != SIGNAL)
					Fatal_Error(1, "");
				else{
					number_of_lines = atoi(argv[1] + 1);
					if( (fp = fopen(argv[2], "r")) == NULL )
						Fatal_Error(2, argv[2]);
				}
				break;
		default: Fatal_Error(1, "");
	}

	while( fgets(s, MAX_LINES + 1, fp) != NULL && i++ < number_of_lines )
		printf("%s", s); // or fputs(s, stdout);

	fclose(fp);
	
	return 0;	
}

void Fatal_Error(int error_id, char *string){
	switch(error_id){
		case 1: // Show syntax
			  fprintf(stderr, "Syntax: \n\nhead [-n] [File]\n\n");
			  break;
		case 2: // File open error
		      fprintf(stderr, "Impossible to Open the file %s\n", string);
		      break;
	}
	exit(error_id);
}