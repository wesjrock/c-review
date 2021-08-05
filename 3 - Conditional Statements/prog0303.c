#include <stdlib.h>
#include <stdio.h>

int main(){
	// prog0303
	/*
	int x;
	scanf("%d", &x);

	// Anything different from 0 is true in C
	if(x)
		printf("TRUE\n");
	else
		printf("FALSE\n");
		*/

	// prog0305

	int leite, cafe, copo_aux;
	scanf("%d %d", &leite, &cafe);

	if(leite > cafe){
		copo_aux = leite;
		leite = cafe;
		cafe = copo_aux;
		printf("\nleite = %d cafe = %d\n", leite, cafe);
	}

	// Nao da para trocar um copo de leite com cafe com apenas dois copos
	/*
	leite = cafe;
	cafe = leite;

	// Com um terceiro copo, isso eh possivel
	copo_aux = cafe;
	cafe = leite;
	leite = copo_aux;
	*/


	return 0;
}