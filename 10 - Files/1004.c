#include <stdlib.h>
#include <stdio.h>

// Open DATA.DAT file and Read the elements from it using an array
int main(int argc, char *argv[]){
	FILE *fp;
	int i, v[10], n;

	if( (fp = fopen("DATA.DAT", "rb")) == NULL ){
		printf("Impossible to open the file %s\n", "DATA.DAT");
		exit(1);
	}

	n = fread(v, sizeof(int), 10, fp);

	if(n != 10)
		fprintf(stderr, "Only %d elements were read!\n", n);

	for(i = 0; i < n; i++)
		printf("%2dº Nº: %d\n", i, v[i]);

	fclose(fp);

	return 0;
}

/*
	// option a
	fread(v, sizeof(int), 10, fp);

	// option b
	for(i = 0; i < 9; i++)
		fread(v + i, sizeof(int), 1, fp);

	// option c
	for(i = 0; i < 9; i++)
		fread(&v[i], sizeof(int), 1, fp);

	// option d
	fread(v, 1, sizeof(int) * 10, fp);
*/
