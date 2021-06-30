#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

// returns a character of a string according to an index
char n_esimo(char *s, int n);

int main(){
	int index = 7;
	char ch, s[DIM];

	strcpy(s, "lettuce");

	if(index <= strlen(s) ){
		ch = n_esimo(s, index);
		printf("%c\n", ch);
	}

	return 0;
}

char n_esimo(char *s, int n){
	return s[n - 1];
}