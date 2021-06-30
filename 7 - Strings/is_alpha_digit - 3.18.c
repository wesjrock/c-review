#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 100

// Given a string, returns true if the string is in the format: alphabetic character + numeric digit
// in:  X7
// out: true
int Is_Alpha_Digit(char *s);

int main(){
	char s[DIM] = "X7";

	int res = Is_Alpha_Digit(s);

	printf("%d\n", res);

	return 0;
}

int Is_Alpha_Digit(char *s){
	int i;

	for(i = 0; s[i] != '\0'; i++){
		// If 'i' is even, return false if isn't an alphabetic character
		if(i % 2 == 0){
			if(!isalpha(s[i]))	
				return 0;
		}
		/* If 'i' is odd, then the first character is alphabetic, 
		   if it isn't a numerical digit, return false */
		else if (!isdigit(s[i]))  
			return 0;
	}

	return 1;
}