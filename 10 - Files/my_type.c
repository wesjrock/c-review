#include <stdlib.h>
#include <stdio.h>

/* Read content from a text file and print on the screen
   in: ./my_type my_type.txt
*/ 
int main(int argc, char *argv[]){
	FILE *fp;
	int ch; // Integer to read characters from fgetc()

	//  Test the number of arguments in the command line
	if(argc != 2){
		printf("Syntax: \n\n%s File\n\n", argv[0]);
		exit(1);
	}

	// Open the file with its name from argv[1];
	fp = fopen(argv[1], "r");

	if(fp == NULL){
		printf("Impossible to open the file %s\n", argv[1]);
		exit(2);
	}

	while( (ch = fgetc(fp)) != EOF ) // EOF is equal to -1 which isn't part of ASCII characters
		putchar(ch);

	fclose(fp);
	
	return 0;
}

