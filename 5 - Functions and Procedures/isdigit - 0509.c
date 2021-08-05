#include <stdlib.h>
#include <stdio.h>

// Verifica se o caractere eh digito ou nao
int x_isdigit(char ch);

int main(){
	char c;

	while(1){
		c = getchar();

		// se nao for digito, mostra na tela
		if(!x_isdigit(c)){
			putchar(c);
		}
	}

	return 0;
}

int x_isdigit(char ch){
	return (ch >= '0' && ch <= '9');
}