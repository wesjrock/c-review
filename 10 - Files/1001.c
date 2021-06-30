#include <stdlib.h>
#include <stdio.h>

// Try to open a file
int main(int argc, char *argv[]){
	FILE *fp;
	char s[100];

	puts("Enter the file name: ");
	gets(s);

	fp = fopen(s, "r");

	if(fp == NULL)
		printf("Impossible to open the file %s\n", s);
	else{
		printf("%s was opened with success\n", s);
		fclose(fp);
	}
	
	return 0;
}

