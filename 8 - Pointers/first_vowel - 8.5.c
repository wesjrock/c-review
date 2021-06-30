#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Returns the address where the first vowel in the string s occurs.
   If it doesn't exist, returns null.
*/
char * First_Vowel(char *s);

int main(){
	char s[100] = "zx_spectrum";
	char *ptr;

	ptr = First_Vowel(s);

	printf("%s\n", ptr);

	return 0;
}

char * First_Vowel(char *s){
	const char vogals[] = "aeiou";
	int i;

	for(i = 0; s[i] != '\0'; i++){
		if(strchr(vogals, tolower(s[i])) != NULL)
			return &s[i];
	}

	return NULL;
}