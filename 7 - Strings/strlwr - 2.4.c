#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

char * strlwr(char *s);

int main(){
	char s[DIM] = "TEST";

	strlwr(s);

	printf("%s\n", s);	

	return 0;
}

char * strlwr(char *s){
	int i;

	for(i = 0; s[i] != '\0'; i++){
		s[i] = tolower(s[i]);
	}

	return s;
}