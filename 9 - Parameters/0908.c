#include <stdlib.h>
#include <stdio.h>

// Iterative Factorial
unsigned fat(int n);

// Recursive Factorial
unsigned fat_2(int n);

int main(int argc, char *argv[]){
	int k;

	while(scanf("%d", &k))
		printf("%d! = %u\n", k, fat_2(k));

	return 0;
}

unsigned fat(int n){
	unsigned i;
	int res = 1;

	for(i = 1; i <= n; i++)
		res *= i;

	return res;
}

unsigned fat_2(int n){
	if(n == 0)
		return 1;
	else
		return n * fat(n - 1);
}