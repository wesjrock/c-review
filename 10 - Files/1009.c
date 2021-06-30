#include <stdlib.h>
#include <stdio.h>

/* DIRECT ACCESS FOR FILES
   Count the number of bytes in a file passed by command line */
int main(int argc, char *argv[]){
	FILE *fp;

	if(argc != 2){
		printf("Syntax:\n\n%s [file]\n\n", argv[0]);
		exit(1);
	}

	if( (fp = fopen(argv[1], "rb")) == NULL){
		printf("Impossible to open file %s\n", argv[1]);
		exit(2);
	}

	fseek(fp, 0L, SEEK_END);

	printf("File size: %ld bytes\n", ftell(fp));
	fclose(fp);
	
	return 0;
}