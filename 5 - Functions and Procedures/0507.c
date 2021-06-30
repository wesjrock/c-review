#include <stdlib.h>
#include <stdio.h>

int soma(int a, int b);
int dobro(int x);

int main(){
	int a, b, total;

	printf("Digite dois valores: ");
	scanf("%d %d", &a, &b);

	total = soma(a, b);

	printf("%d + %d = %d\n", a, b, total);
	printf("2 * %d = %d e 2 * %d = %d\n", a, dobro(a), b, dobro(b));

	return 0;
}

int soma(int a, int b){
	return a + b;
}

int dobro(int x){
	return 2*x;
}
