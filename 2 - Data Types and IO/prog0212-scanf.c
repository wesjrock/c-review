#include <stdlib.h>
#include <stdio.h>

int main(){
	char a, b;

	printf("Type two characters: \n");

	// scanf reads any input from the keyboard but needs parameters 

	/*
	// DOESNT'T WORK
	scanf("%c", &a);
	scanf("%c", &b);
	*/

	// IT WORKS BECAUSE BLANK SPACE ON SCANF IGNORS \ n \ t and ' '
	scanf("%c", &a);
	scanf(" %c", &b);

	printf("You typed: '%c' and '%c'\n", a, b);

	return 0;
}