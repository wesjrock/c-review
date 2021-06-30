#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MINUS 		'-'
#define MINUS_L 	"-1"
#define MAX_LINES 	80

void Fatal_Error(int error_id, char *string);

/*	Given a file, count the number of characters per line and print them out.
	If the -1 parameter is passed on, show line number. 

	syntax: count text.txt
			count -1 text.txt
*/
int main(int argc, char *argv[]){
	int show_lines = 0; 	// flag for showing line number
	int line_number = 0;
	FILE *fp = stdin;
	char s[MAX_LINES + 1];

	switch(argc){
		case 1: break;

		// syntax: head -1
		case 2: if( strcmp(argv[1], MINUS_L) == 0)
					show_lines = 1;
				else
					if( (fp = fopen(argv[1], "r")) == NULL)
						Fatal_Error(2, argv[1]);
				break;
		case 3: if(argv[1][0] != MINUS)
					Fatal_Error(3, argv[1]);
				if( strcmp(argv[1], MINUS_L) != 0)
					Fatal_Error(3, argv[1]);
				show_lines = 1;
				if( (fp = fopen(argv[2], "r")) == NULL)
					Fatal_Error(2, argv[2]);
				break;
		default: Fatal_Error(1, "");
	}

	while( fgets(s, MAX_LINES + 1, fp) != NULL){
		s[strlen(s) - 1] = '\0'; // to remove \n from each line
		
		if(show_lines)
			fprintf(stdout, "%d: %d\n", ++line_number, (int)strlen(s));
		else
			printf("%d\n", (int)strlen(s));
	}

	fclose(fp);
	
	return 0;
}

void Fatal_Error(int error_id, char *string){
	switch(error_id){
		case 1: // Show syntax
			  fprintf(stderr, "Syntax: \ncount [-1] [File]\n\n");
			  break;
		case 2: // File open error
		      fprintf(stderr, "Impossible to Open the file %s\n", string);
		      break;
		case 3: // Invalid option
			  fprintf(stderr, "Option \"%s\" Invalid  ", string);
			  break;
	}
	exit(error_id);
}
