#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define DIM 50

char * strupr(char *s);

int main(){
	char s[DIM] = "fish";

	strupr(s);

	printf("%s\n", s);

	return 0;
}

char * strupr(char *s){
	int i;

	for(i = 0; s[i] != '\0'; i++){
		s[i] = toupper(s[i]);
	}

	return s;
}