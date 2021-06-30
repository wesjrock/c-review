#include <stdlib.h>
#include <stdio.h>

#define DIM 20

// erase a specified character in a string
char * strdelc(char *s, char ch);

int main(){
	char s[DIM] = "erase characters";
	char ch = 'a';

	printf("%s\n", strdelc(s, ch));

	return 0;
}

char * strdelc(char *s, char ch){
	int i, j;

	for(i = j = 0; s[i] != '\0'; i++){
		if(s[i] != ch){
			s[j++] = s[i];
		}
	}
	s[j] = '\0';

	return s;
}