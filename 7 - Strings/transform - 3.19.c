#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 100

// Given a string, transform its first half in lowercase and the second half in uppercase
char * Transform(char *s);
char * Transform_2(char *s);
char * Transform_3(char *s);

int main(){
	char s[DIM] = "Mafalda";

	printf("%s\n", Transform_3(s));

	return 0;
}

char * Transform(char *s){
	int i, j;
	int length = strlen(s);

	for(i = 0; i < (length / 2); i++)
		s[i] = tolower(s[i]);
	for(j = i; j < length; j++)
		s[j] = toupper(s[j]);
	
	return s;
}

char * Transform_2(char *s){
	int i;
	int length = strlen(s);

	for(i = 0; s[i] != '\0'; i++){
		if(i < strlen(s) / 2 )
			s[i] = tolower(s[i]);
		else
			s[i] = toupper(s[i]);
	}

	return s;
}

char * Transform_3(char *s){
	int i;
	int length = strlen(s) - 1;

	for(i = 0; i <= length; i++, length--){
		s[i] = tolower(s[i]);
		s[length] = toupper(s[length]);
	}

	return s;
}
