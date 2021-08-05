#include <stdlib.h>
#include <stdio.h>

int main(){
	/*
	// Tabela ASCII
	int i;

	for(i = 0; i <= 255; i++){
		printf("%3d : %c\n", i, (char) i);
	}
	*/

	// Digite um numero e imprima a ordem crescente e decrescente
	/*
	int i, j, n;

	scanf("%d", &n);

	// este for eh executado n vezes
	for(i = 1, j = n; i <= n; i++, j--){
		printf("%d %d\n", i, j);
	}
	*/

	// O mesmo programa de cima com apenas duas variaveis
	/*
	int i, n;
	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		printf("%d %d\n", i, n - i + 1);
	}
	*/

	/*
	// prog0417: digite um numero e um caractere, e imprima este caractere de acordo com o numero
	// exemplo: 3 *
	// saida: ***
	//		  ***
	//		  ***

	int i, j, n;
	char a;

	scanf("%d %c", &n, &a);
	// neste caso em 3 linhas que sao as iteracoes externas
	// teremos o caractere impresso em 3 colunas que sao as iteracoes internas
	for(i = 1; i <= n ; i++){
		for(j = 1; j <= n; j++){
			putchar(a);
		}
		putchar('\n');
	}
	*/

	// prog0418: minha solucao
	// digite um numero e imprima todos os valores a partir dele exceto multiplos de 3
	// Se o valor for multiplo de 10 pare o programa
	/*
	int i, n, soma = 0;

	printf("digite um numero: ");
	scanf("%d", &n);
	for(i = 0; i >= 0; i++){
		soma = n + i;

		// pula os multiplos de 3
		if(soma%3 == 0){
			continue;
		}
		// para o programa se for multiplo de 10
		else if(soma%10 == 0){
			break;
		}
		printf("%d\n", soma);
	}
	*/

	// prog0418: solucao do autor
	/*
	int i, n;

	printf("digite um numero: ");
	scanf("%d", &n);

	// loop infinito
	for(i = n; ; i++){
		if(i%3 == 0)
			continue;
		else if(i%10 == 0)
			break;

		printf("%d\n", i);
	}
	*/

	// EXS PROPOSTOS pg101
	// 2. Escreve o laco do...while como um laco while

	/*
	// exemplo: do...while
	do{
		instrucao;
	}
	while(condicao);
	*/

	// exemplo: while
	/*
	cont = 0;
	while(condicao){
		cont++;
		instrucao;
	}
	*/

	// solucao ex2
	/*
	int cont = 0;
	while(cont >= 0){ // Enquanto a condicao eh verdadeira, prossiga com o ciclo
		cont++;
		printf("ITERACAO %d\n", cont);
		getchar();
	}
	*/

	// 3. Escreva o laco for como laco while
	// exemplo: for
	/*
	for(carga inicial; condicao; pos-intrucao){
		instrucao;
	}
	*/

	// solucao ex3
	/*
	int i = 0;
	while(i >= 0){
		printf("ITERACAO: %d\n", i);
		i++; // isso eh uma pos-instrucao
		if(i == 10) break;
	}
	*/

	// 4. Escreve o while como um laco for
	/*
	int i;
	for(i = 0; i >= 0; i++){
		printf("ITERACAO: %d\n", i);
		if(i == 9) break;
	}
	*/



	// ex7: escreva o programa como um laco while
	/*
	int i = 1;
	while(i <= 20){
		// se nao houvesse i++ anteriormente as instrucoes, ficariamos em loop infinito
		i++;		
		if(i == 10)
			continue;
		else
			printf("%d\n", i);
	}
	*/

	// ex8
	// resposta do livro porem com contadores comecando em 0
	/*
	int i, j, n;
	char c = '*';

	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("%c", c);
		for(j = 0; j < i ; j++){
			printf("%c", c);
		}
		printf("\n");
	}
	*/

	// ex9: igual ao ex de cima porem com ascii
	/*
	int i, j, n;
	scanf("%d", &n);

	// atencao aqui, antes fiz um teste com os contadores iniciando em 0, porem deu problema
	// o problema foi na aritmetica de char com inteiro, pois nao estava somando corretamente
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i ; j++){
			putchar('A' + i - 1);
		}
		putchar('\n');
	}
	*/

	// ex10: neste exercicio, as palavras 'ate que' significam que vc nao quer valores
	// entre 1 e 100, ou seja, enquanto o oposto desses valores retornar verdadeiro
	// continue digitando, caso contrario encerre o programa
	/*
	int n;
	do{
		scanf("%d", &n);
	}while(n < 1 || n > 100);
	printf("vc digitou: %d\n", n);
	*/

	// ex11: escreva toda a tabela ascii mas parando de 20 em 20 caracteres
	/*
	int i, cont;
	char ch;

	for(i = 0, cont = 1; i <= 255; i++){
		printf("%3d ---> %c\n", i, (char)i );
		if(cont == 20){
			do{
				printf("PRESSIONE c ou C para continuar ...\n");
				scanf("%c", &ch);
			}while(ch != 'c' && ch != 'C');
			cont = 1;
		}
		else
			cont++;
	}
	*/

	//ex12
	/*
	int i, j, x;

	scanf("%d %d", &x, &j);

	if(x >= 0 && j <= 255){4
		for(i = x; i <= j; i++){
			printf("%3d --> %c\n", i, (char)i);
		}
	}
	*/

	// EXEMPLO do ex14, Ordem de atribuicao e incremento em variavel x que esta isolada
	/*
	int x = 0;

	x++; // x passa a valer 1
	printf("x = %d\n", x);

	x = 0;
	++x; // x passa a valer 1
	printf("x = %d\n", x);

	// os resultados sao os mesmos pois x se encontra isolada
	*/


	//ex15: Podemos utilizar incrementos em constantes?
	// R: nao pois constantes utilizam #define, ou seja, valores que nao devem ser alterados


	//ex17: loop infinito
	// pois o teste da variavel n no while nunca sera igual a zero
	/*
	int n = 0;
	do{
		printf("...\n");
		n++;
	}while(n != 0);
	*/

	//ex18
	// termina o programa sem mostrar nada, pois a condicao retorna falsa pelo fato de que
	// i vale 0, ou seja FALSO, e em C qualquer valor diferente de 0 eh VERDADEIRO
	/*
	int i = 0;
	while(i++) // aqui i esta valendo 0
		printf("%d\n", i);
	*/

	// loop infinito, pois i eh diferente de 0 pelo fato de que eh sempre incrementado
	/*
	int i = 0;
	while(++i)
		printf("%d\n", i);
	*/

	//ex19: o que acontece se colocarmos ; perdido pelo programa
	/*
	int i;

	// ; aqui executa o for normalmente mostrando 200 numeros
	for(i = 1; i <= 200; i++) ; // ; aqui mostra apenas o numero 201, pois eh como se ele executasse duzentas vezes a instrucao for vazia, ou seja, com nada dentro pois o ; indica uma instrucao vazia e somente apos essas duzentas linhas vazias eh que eh executado o printf com o valor 201
		printf("%d\n", i);

	*/

	//ex21: testando valores
	/*
	int x = 6, y = -1, z = -1;

	// aqui x nao eh igual a y, portanto o valor atribuido a z sera FALSO ou 0
	z = (x == y);

	printf("z = %d\n", z);
	*/











	return 0;
}