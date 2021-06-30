#include <stdlib.h>
#include <stdio.h>

// Open DATA.DAT file and Read the elements from it using an integer
int main(int argc, char *argv[]){
	FILE *fp;
	int i = 0, value;

	if( (fp = fopen("DATA.DAT", "rb")) == NULL ){
		printf("Impossible to open the file %s\n", "DATA.DAT");
		exit(1);
	}

	while(fread(&value, sizeof(int), 1, fp))
		printf("%2dº Nº: %d\n", i++, value);

	fclose(fp);

	return 0;
}