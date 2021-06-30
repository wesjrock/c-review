#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DIM 20

// returns a string with a space character ' ' between each character
char* strpad(char *s);

int main(){
	char s[DIM] = "apple";

	printf("%s\n", strpad(s) );

	return 0;
}

char* strpad(char *s){
	// index starts at '\0'
	int i = strlen(s);

	// move '\0' forward
	s[2 * i] = '\0';

	// index starts at the last character of the string which isn't '\0'
	for(i--; i >= 0; i--){
		s[2 * i] = s[i];
		s[2 * i + 1] = ' ';
	}

	return s;
}