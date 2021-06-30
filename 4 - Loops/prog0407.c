#include <stdlib.h>
#include <stdio.h>

int main(){
	// Sum and Product of the N first natural numbers
	/*
	int n, num, soma, produto;

	scanf("%d", &num);

	for(soma = 0, n = produto = 1; n <= num; n++){
		soma += n;
		produto *= n;
	}
	printf("Soma = %d\nProduto = %d\n", soma, produto);
	*/

	/*
	int i, j;

	for(i = 1; i <= 5; i++){
		for(j = 1; j <= 10; j++){
			printf("%2d * %2d = %2d\n", i, j, i * j);

			// stops with each line that is written
			if(i != 6){
				printf("PRESSIONE ENTER PARA CONTINUAR\n");
				getchar();
			}
		}
	}
	*/

	// prog0410
	/*
	int i;
	for(i = 2; i <= 20; i+=2){
		printf("%d\n", i);
	}
	*/

	// prog0412
	// print the first 29 even numbers

	int i;
	for(i = 1; i <= 100; i++){
		if(i == 60) 
			break;
		else if (i % 2 == 1) 
			continue;
		else
			printf("%d\n", i);
	}

	return 0;
}