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

	// You can't exchange a cup of milk with coffee with just two cups
	/*
	leite = cafe;
	cafe = leite;

	// With a third glass, this is possible
	copo_aux = cafe;
	cafe = leite;
	leite = copo_aux;
	*/


	return 0;
}