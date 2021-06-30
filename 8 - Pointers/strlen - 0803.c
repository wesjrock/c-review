#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// EXPLANATION AND ILLUSTRATION ON PAGE 192
int my_strlen(char *s);

int main(){
	char s[100];

	printf("Enter a string: ");
	gets(s);

	printf("%d\n", my_strlen(s));

	return 0;
}

int my_strlen(char *s){
	char *ptr = s; // s[0] memory address

	while(*s != '\0')
		s++; // increment memory address

	return (int) (s - ptr); // &s[end_index] - &s[0]
}

