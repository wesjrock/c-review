#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

char * my_strcpy(char* dest, char* orig);

/*  Erases a substring in a string
	in:  "the game is over", "is"
	out: the game over
*/
char * StrDelStr(char *s1, char *s2);

int main(){
	char s1[SIZE] = "O rato roeu a rolha da garrafa de rum do rei da Russia";
	char s2[SIZE] = "rum";

	printf("%s\n", StrDelStr(s1, s2));

	return 0;
}

char * my_strcpy(char* dest, char* orig){
	int i;

	for(i = 0; orig[i] != '\0'; i++){
		dest[i] = orig[i];
	}
	dest[i] = '\0';

	return dest;
}

char * StrDelStr(char *s1, char *s2){
	char *loc = strstr(s1, s2);

	if(loc != NULL)
		my_strcpy(loc, loc + strlen(s2) );

	return s1;
}