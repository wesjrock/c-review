#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char s[100];
	char *ptr = s; // points to the first character in the string	

	printf("Enter a string: ");
	gets(s);

	if(*ptr == '\0')	
		return 0;

	// Print the string
	while(*ptr != '\0')
		putchar(*ptr++);

	printf("\n");


	// Print the string in reverse
	ptr--; // last character of the string before \0

	// while ptr >= &s[0]
	while(ptr >= s)
		putchar(*ptr--);


	printf("\n");

	return 0;
}