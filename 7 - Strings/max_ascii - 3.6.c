#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

// returns the character with maximum ascii value
char max_ascii(char *s);
char max_ascii_2(char *s);

int main(){
	char s[DIM];
	char max;

	//strcpy(s, "");
	//strcpy(s, "edcba");
	strcpy(s, "abcde");

	max = max_ascii_2(s);

	printf("%c\n", max);

	return 0;
}

char max_ascii(char *s){
	int i;
	char max = s[0];

	if( strcmp(s , "") == 0 )
		return '\0';
	else{
		for(i = 0; s[i] != '\0'; i++)
			if(s[i] > max)
				max = s[i];	
	}

	return max;
}

char max_ascii_2(char *s){
	int i;
	char max = '\0'; // '\0' in the ASCII table equals 0

	for (i = 0; s[i] != '\0'; i++)
		max = max > s[i] ? max : s[i] ; 
	
	return max;
}

