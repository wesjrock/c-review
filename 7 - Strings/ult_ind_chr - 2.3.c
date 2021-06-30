#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

// given a string and a character, return the last index of the character in the string
int ult_ind_chr(char *s, char c);
int ult_ind_chr_2(char *s, char c);

int main(){
	int index;
	char s[DIM] = "banana";
	char c = 'a';
	
	index = ult_ind_chr_2(s, c);

	printf("%c was found at index -> %d\n", c, index);

	return 0;
}

int ult_ind_chr(char *s, char c){
	int i;

	for (i = strlen(s) - 1; i >= 0 ; i--){
		if(s[i] == c)
			return i;
	}

	// if it doesn't find the character
	return -1;
}

int ult_ind_chr_2(char *s, char c){
	int i, index = -1;

	for (i = 0; s[i] != '\0'; i++){
		if(s[i] == c)
			index = i;
	}

	return index;
}

