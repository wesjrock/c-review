#include <stdlib.h>
#include <stdio.h>

/* Copy file1 contents to file2
	in: ./mycopy file1 file2
*/
int main(int argc, char *argv[]){
	FILE *fin, *fout;
	int ch;

	if(argc != 3){
		printf("Syntax: \n\n%s source destiny\n\n", argv[0]);
		exit(1);
	}

	// Open the source file
	fin = fopen(argv[1], "rb");

	if(fin == NULL){
		printf("Impossible to open the file %s\n", argv[1]);
		exit(2);
	}

	if( (fout = fopen(argv[2], "wb")) == NULL ){
		printf("Impossible to create the file %s\n", argv[2]);
		exit(3);
	}

	while( (ch = fgetc(fin)) != EOF )
		fputc(ch, fout);

	fclose(fin);
	fclose(fout);
	
	return 0;
}

