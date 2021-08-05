#include <stdlib.h>
#include <stdio.h>

int main(){
	// Operador Condicional ou Ternario
	float salario;

	scanf("%f", &salario);

	// se a condicao for verdadeira retorna a primeira opcao, senao retorna a segunda
	salario = salario > 1000 ? salario * 1.05 : salario * 1.07;

	printf("salario = %.2f\n", salario); 

	return 0;
}