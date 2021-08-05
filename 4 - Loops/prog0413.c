#include <stdlib.h>
#include <stdio.h>

int main(){
	// LACO ENCADEDADO
	int i, j;

	/*
	// 11 iteracoes no laco de fora
	for(i = 0; i <= 10; i++){
		for(j = 0; j <= i; j++){
			printf("iteracao: %d = %d\n", i, j);
		}
		putchar('\n');
	}
	*/

	// 10 iteracaos no laco de fora
	for(i = 1; i <= 10; i++){
		for(j = 1; j <= 10; j++){
			printf("iteracao: %d = %d\n", i, j);
			if(j == i)
				break;
		}
		putchar('\n');
	}

	return 0;
}