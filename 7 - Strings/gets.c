#include <stdlib.h>
#include <stdio.h>

#define DIM 50

// store a string in an array
char * mygets(char *s);

int main(){
	char s[DIM];

	mygets(s);

	printf("%s\n", s);

	return 0;
}

char * mygets(char *s){
	int i = 0;
	char ch;

	while( (ch = getchar()) != '\n' ){
		s[i++] = ch;
	}
	s[i] = '\0';

	return s;
}