#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

// returns the next character in the ascci table
char * next_char(char *s);

int main(){
	char s[DIM] = "ABCD";

	next_char(s);

	//printf("Testing the last ascii character + 1: %c\n", (char)255 + 1 );

	printf("%s\n", s);

	return 0;
}

char * next_char(char *s){
	int i;

	for(i = 0; s[i] != '\0'; i++)
		s[i] = (int)s[i] + 1;

	return s;
}
