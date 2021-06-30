#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 100

// Given a string, replace each first character of a word with an uppercase letter
char * wordupr(char *s);
char * wordupr_2(char *s);

int main(){
	char s[DIM] = "ONCE upon a TimE";

	printf("%s\n", wordupr_2(s));

	return 0;
}

char * wordupr(char *s){
	int i;

	if(strlen(s) == 0)	return s;

	s[0] = toupper(s[0]);

	for(i = 1; s[i] != '\0'; i++){
		if(isupper(s[i]))
			s[i] = tolower(s[i]);
		else if(s[i] == ' '){
			s[i + 1] = toupper(s[i + 1]);
			i++;
		}
	}

	return s;
}

char * wordupr_2(char *s){
	int i;

	s[0] = toupper(s[0]); //Ana A\

	for(i = 1; s[i - 1] != '\0'; i++){
		if(s[i - 1] == ' ')
			s[i] = toupper(s[i]);
		else
			s[i] = tolower(s[i]);
	}

	return s;
}

