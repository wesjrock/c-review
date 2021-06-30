#include <stdlib.h>
#include <stdio.h>

// Print characters given a number of lines
void linha(int num, char ch);


int main(){

	linha(20, '*');
	linha(5, '@');
	linha(10, '!');
	linha(15, '^');

	return 0;
}

void linha(int num, char ch){
	int i;

	for(i = 1; i <= num; i++){
		printf("%c", ch);
	}
	putchar('\n');
}