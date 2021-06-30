#include <stdlib.h>
#include <stdio.h>

/* In C: 0 is FALSE
   != of 0 is TRUE */

int main(){
	// INCREMENT AND DECREMENT
	/*
	int a, b;

	// both variables start with value 3
	a = b = 3;

	// a-- : assign first and decrement later
	// --b : decrements first and assigns later
	// output: 3 and 2
	printf("a = %d , b = %d\n", a--, --b);

	// both were decremented
	// output: 2 and 2
	printf("a = %d , b = %d\n", a, b);
	*/

	// Alternative prog0401 
	/*
	int i;

	i = 1;
	while(i <= 10)
		printf("%d\n", i++);
	*/

	// outro exemplo

	/*
	int i = 0;

	// Here the increment is performed, but as the condition returns false, it does not enter the 'if'
	// Inside the 'if' the question is "i is equal to i++ ?" No, because i is 0 and i++ is 1
	// Saida: 1
	if(i++){
		printf("ENTREI AQUI\n");
	}
	printf("%d\n", i);
	*/

	return 0;
}