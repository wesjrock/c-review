#include <stdlib.h>
#include <stdio.h>

// Check if the character is a digit or not
int x_isdigit(char ch);

int main(){
	char c;

	while(1){
		c = getchar();

		// If it isn't a digit, print it
		if(!x_isdigit(c)){
			putchar(c);
		}
	}

	return 0;
}

int x_isdigit(char ch){
	return (ch >= '0' && ch <= '9');
}