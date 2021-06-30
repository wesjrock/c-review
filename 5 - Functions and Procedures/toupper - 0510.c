#include <stdlib.h>
#include <stdio.h>

int x_toupper(char ch);

int main(){
	char c;
	int ascii_maiusculo;

	while(1){
		c = getchar();

		putchar(x_toupper(c));
	}

	return 0;
}

int x_toupper(char ch){
	// se minuscula
	if(ch >= 'a' && ch <= 'z'){
		/* ex: ch = 'b'
			   98 + 65 - 97
			   retorna 66 que eh 'B'

		*/
		return ch + 'A' - 'a';
	}
	else
		return ch;
}