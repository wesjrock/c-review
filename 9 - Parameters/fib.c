#include <stdlib.h>
#include <stdio.h>

/* Recursive and Iterative Fibonacci
   note: 0 is not included in the sequence
*/

long int fib_rec(int n);
long int fib_it(int n);

int main(int argc, char *argv[]){
	int n = 3;

	//long int res = fib_rec(n);
	//printf("Recursive Fibonacci of %d = %ld\n", n, res);

	long int res_2 = fib_it(n);
	printf("Iterative Fibonacci of %d = %ld\n", n, res_2);
	
	return 0;
}

long int fib_rec(int n){
	if(n < 0)
		return -1L;  // invalid
	if(n <= 1)
		return 1L; // 1L is equal to (long)1
	else
		return fib_rec(n - 1) + fib_rec(n - 2);
}

long int fib_it(int n){
	int i;
	long n1, n2, tmp;

	if(n < 0)	return -1L;  // invalid
	if(n <= 1)	return 1L;

	for(i = 2, n1 = n2 = 1; i < n; i++){
		tmp = n1;	// this is the value of n1 from "previous iteration"
		n1 = n2; 	// this is the value of n1 at the present iteration
		n2 = n1 + tmp;
	}

	// note: fib(2) skips the loop
	return n1 + n2;
}
