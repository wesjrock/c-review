#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 100

// Duplicate a string
char * strduplicate(char *s);
char * strduplicate_2(char *s);

int main(){
	char s[DIM] = "Ana";

	printf("%s\n", strduplicate_2(s));

	return 0;
}

char * strduplicate(char *s){
	int i;
	int j = 0;
	int total_dim = strlen(s) * 2;

	for(i = strlen(s); i < total_dim; i++){
		// index 'i' starts at '\0'
		s[i] = s[j];		
		j++;
	}
	s[i] = '\0';

	return s;
}

char * strduplicate_2(char *s){
	int i;
	int len = strlen(s);

	for(i = 0; i < len; i++)
		s[len + i] = s[i];
	s[len + i] = '\0';

	return s;
}