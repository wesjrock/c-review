#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define OP_OUT "-o"

/*	Show filtered characters based on a file and selected options.
	The standard output is the screen but if the user specifies an output file, write
	it out to a file.	

	Options:
		-M	show only uppercase characters [this is the standard option]
		-m	show only lowercase characters
		-d 	show only digits
		-D	show only digits

		-o[File] write output to a file 

	in: ./show -m f1.txt -oResults.txt

*/
int main(int argc, char *argv[]){
	FILE *fin, *fout = stdout;
	int i;
	int ch;
	char option = 'M'; 

	// Check if the last parameter is of type -oFile
	if( strncmp(argv[argc - 1], OP_OUT, strlen(OP_OUT)) == 0){
		if( (fout = fopen(argv[argc - 1] + 2, "wt")) == NULL){ // +2 because -o contains two characters
			fprintf(stderr, "Impossible to create file %s\n", argv[argc - 1]);
			exit(1);
		}
		else{
			// File has been opened with success, so the -oFile parameter is not needed for the loop
			argc--; 
		}
	}

	for(i = 1; i < argc; i++){
		if(argv[i][0] == '-'){ // if it is an option
			switch(argv[i][1]){
				case 'm':
				case 'M':
				case 'd':
				case 'D': option = argv[i][1];
			}
		}
		else{
			fprintf(fout, "%s\n", argv[i]);

			if( (fin = fopen(argv[i], "r")) == NULL)
				continue; // move to the next file
			
			while( (ch = fgetc(fin)) != EOF)
				switch(option){
					case 'm': if(islower(ch)) fputc(ch, fout); break;
					case 'M': if(isupper(ch)) fputc(ch, fout); break;
					case 'd':
					case 'D': if(isdigit(ch)) fputc(ch, fout); break;
				}
				fclose(fin);
			fputc('\n', fout);
		}
	}

	fclose(fout);
	exit(0);
	
	return 0;
}