#include <stdlib.h>
#include <stdio.h>

#define DIM 50

// replace an entire string with a specified character
char * strset(char *s, char ch);

int main(){
	char s[DIM] = "banana";
	char ch = '#';

	strset(s, ch);

	printf("%s\n", s);

	return 0;
}

char * strset(char *s, char ch){
	int i;

	for(i = 0; s[i] != '\0'; i++)
		s[i] = ch;

	return s;
}