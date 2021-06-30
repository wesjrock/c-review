#include <stdlib.h>
#include <stdio.h>

/* Open NUMBERS.DAT file and show the values present in it only in the odd positions */
int main(int argc, char *argv[]){
	FILE *fp;
	float x;

	if( (fp = fopen("NUMBERS.DAT", "rb")) == NULL ){
		printf("Impossible to open file %s\n", "NUMBERS.DAT");
		exit(1);
	}

	while(1){
		if( fread(&x, sizeof(float), 1, fp) == 0) // Failed to read the file
			break;
		printf("%f\n", x);
		fseek(fp, sizeof(float), SEEK_CUR); // moves one float element forward from the current position
	}

	fclose(fp);
	
	return 0;
}

