#include <stdlib.h>
#include <stdio.h>

int main(){
	// Conditional or Ternary Operator
	float salario;

	scanf("%f", &salario);

	// if the condition is true it returns the first option, otherwise it returns the second
	salario = salario > 1000 ? salario * 1.05 : salario * 1.07;

	printf("salario = %.2f\n", salario); 

	return 0;
}