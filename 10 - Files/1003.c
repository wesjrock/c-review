#include <stdlib.h>
#include <stdio.h>

// Enter 10 numbers in an array and write it to a binary file
int main(int argc, char *argv[]){
	FILE *fp;
	int i, v[10];

	for(i = 0; i <= 9; i++){
		printf("Enter the %dth number: ", i);
		scanf("%d", &v[i]);
	}

	if( (fp = fopen("DATA.DAT", "wb")) == NULL ){
		printf("Impossible to create file %s\n", "DATA.DAT");
		exit(1);
	}

	if(fwrite(v, sizeof(int), 10, fp) != 10)
		fprintf(stderr, "Not all elements were written!\n");

	fclose(fp);
	
	return 0;
}

/*
	// option a
	fwrite(v, sizeof(int), 10, fp);
	
	// option b
	for(i = 0; i < 9; i++)
		fwrite(v + i, sizeof(int), 1, fp);	// write it one at a time

	// option c
	fwrite(v, 1, sizeof(int) * 10, fp);
*/