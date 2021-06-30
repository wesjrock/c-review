#include <stdlib.h>
#include <stdio.h>

int main(){
	/*
	// Tabela ASCII
	int i;

	for(i = 0; i <= 255; i++){
		printf("%3d : %c\n", i, (char) i);
	}
	*/

	// Enter a number and print in ascending and descending order
	/*
	int i, j, n;

	scanf("%d", &n);

	// this 'for' is executed n times
	for(i = 1, j = n; i <= n; i++, j--){
		printf("%d %d\n", i, j);
	}
	*/

	// The same program as above with only two variables
	/*
	int i, n;
	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		printf("%d %d\n", i, n - i + 1);
	}
	*/

	/*
	// prog0417: type a number and a character, and print this character according to the number
	// exemplo: 3 *
	// saida: ***
	//		  ***
	//		  ***

	int i, j, n;
	char a;

	scanf("%d %c", &n, &a);
	// in this case in 3 lines that are the external iterations
	// we will have the character printed in 3 columns which are the internal iterations
	for(i = 1; i <= n ; i++){
		for(j = 1; j <= n; j++){
			putchar(a);
		}
		putchar('\n');
	}
	*/

	// prog0418: my solution
	// enter a number and print all values from it except multiples of 3
	// If the value is multiple of 10 stop the program
	/*
	int i, n, soma = 0;

	printf("digite um numero: ");
	scanf("%d", &n);
	for(i = 0; i >= 0; i++){
		soma = n + i;

		// skip multiples of 3
		if(soma%3 == 0){
			continue;
		}
		// stop the program if it is multiple of 10
		else if(soma%10 == 0){
			break;
		}
		printf("%d\n", soma);
	}
	*/

	// prog0418: book solution
	/*
	int i, n;

	printf("digite um numero: ");
	scanf("%d", &n);

	// loop infinito
	for(i = n; ; i++){
		if(i%3 == 0)
			continue;
		else if(i%10 == 0)
			break;

		printf("%d\n", i);
	}
	*/

	// Proposed Exercises pg101
	// 2. Write the do...while loop as a while loop

	/*
	// Example: do...while
	do{
		instrucao;
	}
	while(condicao);
	*/

	// Example: while
	/*
	cont = 0;
	while(condicao){
		cont++;
		instrucao;
	}
	*/

	// Solution ex2
	/*
	int cont = 0;
	while(cont >= 0){ // As long as the condition is true, proceed with the cycle
		cont++;
		printf("ITERACAO %d\n", cont);
		getchar();
	}
	*/

	// 3. Write the for loop as a while loop
	// exemplo: for
	/*
	for(carga inicial; condicao; pos-intrucao){
		instrucao;
	}
	*/

	// Solution ex3
	/*
	int i = 0;
	while(i >= 0){
		printf("ITERACAO: %d\n", i);
		i++; // this is a post-instruction
		if(i == 10) break;
	}
	*/

	// 4. Write the while as a for loop
	/*
	int i;
	for(i = 0; i >= 0; i++){
		printf("ITERACAO: %d\n", i);
		if(i == 9) break;
	}
	*/



	// ex7: write the program as a while loop
	/*
	int i = 1;
	while(i <= 20){
		// if there was no i++ before the instructions, we would be in an infinite loop
		i++;		
		if(i == 10)
			continue;
		else
			printf("%d\n", i);
	}
	*/

	// ex8
	// book answer however with counters starting at 0
	/*
	int i, j, n;
	char c = '*';

	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("%c", c);
		for(j = 0; j < i ; j++){
			printf("%c", c);
		}
		printf("\n");
	}
	*/

	// ex9: same as exercise above but with ascii
	/*
	int i, j, n;
	scanf("%d", &n);

	// attention here, before I did a test with the counters starting at 0, but there was a problem
	// the problem was in the arithmetic of char with integer, because it wasn't adding correctly
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i ; j++){
			putchar('A' + i - 1);
		}
		putchar('\n');
	}
	*/

	// ex10: in this exercise, the words 'until' mean you don't want values
	// between 1 and 100, that is, while the opposite of these values return true
	// continue typing, otherwise terminate the program
	/*
	int n;
	do{
		scanf("%d", &n);
	}while(n < 1 || n > 100);
	printf("vc digitou: %d\n", n);
	*/

	// ex11: write the entire ascii table but stopping every 20 characters
	/*
	int i, cont;
	char ch;

	for(i = 0, cont = 1; i <= 255; i++){
		printf("%3d ---> %c\n", i, (char)i );
		if(cont == 20){
			do{
				printf("PRESSIONE c ou C para continuar ...\n");
				scanf("%c", &ch);
			}while(ch != 'c' && ch != 'C');
			cont = 1;
		}
		else
			cont++;
	}
	*/

	//ex12
	/*
	int i, j, x;

	scanf("%d %d", &x, &j);

	if(x >= 0 && j <= 255){4
		for(i = x; i <= j; i++){
			printf("%3d --> %c\n", i, (char)i);
		}
	}
	*/

	// EXAMPLE from ex14, Assignment order and increment in variable x that is isolated
	/*
	int x = 0;

	x++; // x becomes 1
	printf("x = %d\n", x);

	x = 0;
	++x; // x becomes 1
	printf("x = %d\n", x);

	// the results are the same as x is isolated
	*/


	//ex15: Can we use increments on constants?
	// R: no because constants use #define, that is, values that should not be changed


	//ex17: infinite cycle
	// because the test of the variable n in the while will never be equal to zero
	/*
	int n = 0;
	do{
		printf("...\n");
		n++;
	}while(n != 0);
	*/

	//ex18
	// terminates the program without showing anything, as the condition returns false due to the fact that
	// i is 0, that is FALSE, and in C any value other than 0 and h TRUE
	/*
	int i = 0;
	while(i++) // here i is 0
		printf("%d\n", i);
	*/

	// infinite loop, as 'i' is different from 0 in that it is always incremented
	/*
	int i = 0;
	while(++i)
		printf("%d\n", i);
	*/

	//ex19: what happens if we put ; lost in the middle of the program
	/*
	int i;

	// ; here run the for loop normally showing 200 numbers
	for(i = 1; i <= 200; i++) ; // ; here it shows only the number 201, as it is as if it executed two hundred times the instruction is empty, that is, with nothing inside because the ; indicates an empty instruction and only after these two hundred empty lines is the printf executed with the value 201
		printf("%d\n", i);

	*/

	//ex21: testing values
	/*
	int x = 6, y = -1, z = -1;

	// aqui x nao eh igual a y, portanto o valor atribuido a z sera FALSO ou 0
	// here x isn't equal to y, so the value assigned to z will be FALSE or 0
	z = (x == y);

	printf("z = %d\n", z);
	*/











	return 0;
}