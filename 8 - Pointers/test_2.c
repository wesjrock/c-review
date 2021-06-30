#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char s[20] = "Ola";
	char *ptr = s;

	// error: array type 'char [20]' is not assignable
	//s = "ole"; 

	// error: cannot increment value of type 'char [20]'
	//printf("%s\n", s++);
	
	// OK, because it isn't changing s content
	// output: la
	//printf("%s\n", s + 1);

	// OK, because this means s[0] = 'O' + 1 which gives the character 'P'
	//(*s)++;  // here we are changing the value of s, which in this case is s[0] = 'O'
	//printf("%s\n", s);

	// error: array type 'char [20]' is not assignable
	//s = s - 2;

	// OK, output is 1
	//printf("%ld\n", s + 1 - s);


	// EXERCISE - PAGE 190
	// How to access the character 'a' in the string above ?
	/*
	printf("%c\n", s[2] );
	printf("%c\n", *(s + 2) );
	printf("%c\n", *(ptr + 2) );
	printf("%c\n", ptr[2] );
	*/

	return 0;
}

