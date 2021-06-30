#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 100

// Given a string, returns only its uppercase characters
// in:  HelloW
// out: HW
char * Return_Uppercase(char *s);

int main(){
	char s[DIM] = "HelloW";

	printf("%s\n", Return_Uppercase(s));

	printf("%c\n", s[3]);

	return 0;
}

char * Return_Uppercase(char *s){
	int i, j;

	for(i = j = 0; s[i] != '\0'; i++){
		if(isupper(s[i])){
			s[j] = s[i];
			j++;
		}
	}
	s[j] = 0;

	return s;
}
