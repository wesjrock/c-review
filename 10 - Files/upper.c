#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* Read a text file and convert its characters to uppercase
   in: ./upper grades.txt
   in2: ./upper grades.txt > results.txt
*/
int main(int argc, char *argv[]){
	FILE *fp;
	int ch;

	switch(argc){
		case 1:	fp = stdin;
				break;
		case 2: if( (fp = fopen(argv[1], "r")) == NULL ){
					fprintf(stderr, "Impossible to open the file %s\n", argv[1]);
					exit(1);
				}
				break;
		default: fprintf(stderr, "Syntax: \n\n%s [File]\n", argv[0]);
				 exit(2);
	}

	while( (ch = fgetc(fp)) != EOF )
		putchar(toupper(ch));
	fclose(fp);
	
	return 0;
}

