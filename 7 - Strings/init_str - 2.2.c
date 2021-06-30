#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

// given a string, return an empty string
char * init_str(char *s);

int main(){
	char s[DIM] = "test";

	init_str(s);

	printf("%s\n", s);

	return 0;
}

char * init_str(char *s){
	int i;

	s[0] = '\0';

	return s;	
}


