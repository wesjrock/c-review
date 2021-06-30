#include <stdlib.h>
#include <stdio.h>

// Create an empty file, open it and detect if its position is at the end
int main(int argc, char *argv[]){
	FILE *fp;
	int i = 0, value, n;

	// Create an empty file
	if((fp = fopen("TRASH", "wb")) == NULL){
		printf("Impossible to create file %s\n", "TRASH");
		exit(1);
	}
	fclose(fp);

	// Open it
	if((fp = fopen("TRASH", "rb")) == NULL){
		printf("Impossible to read file %s\n", "TRASH");
		exit(1);
	}

	puts(feof(fp) ? "EOF" : "NOT EOF");

	// Try to read a character
	fgetc(fp);

	puts(feof(fp) ? "EOF" : "NOT EOF");

	fclose(fp);
	return 0;
}

