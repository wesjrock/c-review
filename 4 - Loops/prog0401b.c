#include <stdlib.h>
#include <stdio.h>

// Em C: 0 		 eh	FALSO
//       != de 0 eh VERDADEIRO

int main(){
	// INCREMENTO E DECREMENTO
	/*
	int a, b;

	// ambas variaveis comecam com valor 3
	a = b = 3;

	// a-- : atribui primeiro e decrementa depois
	// --b : decrementa primeiro e atribui depois
	// saida: 3 e 2
	printf("a = %d , b = %d\n", a--, --b);

	// como ambas foram decrementadas
	// saida: 2 e 2
	printf("a = %d , b = %d\n", a, b);
	*/

	// prog0401 alternativo
	/*
	int i;

	i = 1;
	while(i <= 10)
		printf("%d\n", i++);
	*/

	// outro exemplo

	/*
	int i = 0;

	// Aqui o incremento eh executado, mas como a condicao retorna falso, ele nao entra no if
	// no if a pergunta eh "i eh igual a i++ ?" nao, pois i eh 0 e i++ eh 1
	// Saida: 1
	if(i++){
		printf("ENTREI AQUI\n");
	}
	printf("%d\n", i);
	*/

	return 0;
}