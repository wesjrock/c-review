#include <stdlib.h>
#include <stdio.h>

/*  Count the number of characters in a file passed by command line
	
	in: ./1007 1007.c
	out: 614
*/
int main(int argc, char *argv[]){
	FILE *fp;
	int count = 0;

	if(argc != 2){
		printf("Syntax:\n\n%s [file]\n\n", argv[0]);
		exit(1);
	}

	if( (fp = fopen(argv[1], "rb")) == NULL){
		printf("Impossible to open file %s\n", argv[1]);
		exit(1);
	}

	while(!feof(fp)){
		fgetc(fp); 
		count++;
	}
	fclose(fp);

	printf("Total characters: %d\n", count);

	return 0;
}