#include <stdlib.h>
#include <stdio.h>

int main(){
	float taxa;

	// divisao inteira que esta incorreta, pois da resultado 0
	taxa = 5/100;
	printf("divisao incorreta = %f\n", taxa);

	// divisao em float, taxa de 5%
	printf("divisao correta = %f\n", .05/1.0);

	return 0;
}