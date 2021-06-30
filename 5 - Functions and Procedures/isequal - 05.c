#include <stdlib.h>
#include <stdio.h>

// Check if two numbers are equal
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
	// if x equals y, returns 1 for TRUE or 0 for FALSE
	return (x == y);
}