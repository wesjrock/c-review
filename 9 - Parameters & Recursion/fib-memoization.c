/* Recursive Fibonacci with Memoization */

#include <stdio.h>

int F[51];

int Fib(int n){
	if(F[n] != -1){   // If F[n] value is in memory, i.e. if it has already been calculated
		return F[n];  
	}

	F[n] = Fib(n - 1) + Fib(n - 2); // Save F[n] in memory

	return F[n];
}

int main(int argc, char *argv[]){
	int i, n, result;

	for (i = 0; i < 51; ++i){
		F[i] = -1;
	}

	F[0] = 1, F[1] = 1; // By definition, Fib(0) and Fib(1) equals 1

	printf("Enter a value: ");
	scanf("%d", &n);
	result = Fib(n);
	printf("Fibonacci of %d = %d\n", n, result);
	
	return 0;
}

