#include <stdlib.h>
#include <stdio.h>

int main(){
	char a, b;

	printf("Type two characters: \n");

	// scanf reads any input from the keyboard but needs parameters 

	/*
	// NAO FUNCIONA
	scanf("%c", &a);
	scanf("%c", &b);
	*/

	// FUNCIONA POIS O ESPAÇO EM BRANCO NA SCANF IGNORA \n \t e ' '
	scanf("%c", &a);
	scanf(" %c", &b);

	printf("You typed: '%c' and '%c'\n", a, b);

	return 0;
}