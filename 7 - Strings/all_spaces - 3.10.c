#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

char * all_spaces(char *s);

int main(){
	char s[DIM] = "abcd";

	printf("%s\n", all_spaces(s) );

	return 0;
}

char * all_spaces(char *s){
	int i;

	for(i = 0; s[i] != '\0'; i++)
		s[i] = ' ';

	return s;
}


