#include <stdlib.h>
#include <stdio.h>

/* SEQUENTIAL ACCESS FOR FILES
   Count the number of bytes in a file passed by command line */
int main(int argc, char *argv[]){
	FILE *fp;
	long int nBytes = 0;

	if(argc != 2){
		printf("Syntax:\n\n%s [file]\n\n", argv[0]);
		exit(1);
	}

	if( (fp = fopen(argv[1], "rb")) == NULL){
		printf("Impossible to open file %s\n", argv[1]);
		exit(2);
	}

	while(fgetc(fp) != EOF){
		nBytes++;
	}
	fclose(fp);

	printf("File size: %ld bytes\n", nBytes);
	
	return 0;
}

/*
	// The same results could be produced by using ftell()
	while(fgetc(fp) != EOF){
		;
	printf("File size: %ld\n", ftell(fp));
	fclose(fp);
	}
*/

