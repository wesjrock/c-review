#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DIM 50

// returns an inverted string
char* strrev(char *s);

int main(){
	char s[DIM] = "Hello my name is Wesley";

	printf("%s\n", strrev(s) );

	return 0;
}

char* strrev(char *s){
	int i, len;
	char aux;

	for(i = 0, len = strlen(s) - 1; i < len; i++, len--){
		aux = s[i];
		s[i] = s[len];
		s[len] = aux;
	}

	return s;
}