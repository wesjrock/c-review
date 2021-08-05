#include <stdlib.h>
#include <stdio.h>

// Verifica se dois numeros sao iguais
int isequal (int x, int y);

int main(){
	int x, y, result;

	printf("Digite dois numeros: ");
	scanf("%d %d", &x, &y);

	result = isequal(x, y);
	printf("Result: %d\n", result);

	return 0;
}

int isequal (int x, int y){
	// se x for igual a y, retorna 1 para VERDADEIRO ou 0 para FALSO
	return (x == y);
}