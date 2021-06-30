#include <stdlib.h>
#include <stdio.h>

int main(){
	float taxa;

	// integer division that is incorrect, as it gives 0 result
	taxa = 5/100;
	printf("divisao incorreta = %f\n", taxa);

	// float division, 5% rate
	printf("divisao correta = %f\n", .05/1.0);

	return 0;
}