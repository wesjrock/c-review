#include <stdlib.h>
#include <stdio.h>

float power(float x, int n);

int main(){
	float x;
	int n;

	scanf("%f %d", &x, &n);
	printf("%.1f ^ %d = %.1f\n", x, n, power(x, n) );

	return 0;
}

float power(float x, int n){
	int i;
	float res;

	for(i = 1, res = 1; i <= n; i++){
		res *= x;
	}

	return res;
}

//  0 ^ 0 = 1 	// doesn't loop AND RETURNS res (INDEFINITION)
//  1 ^ 0 = 1	// doesn't loop (THIS ISN'T AN INDEFINITION)
// -1 ^ 0 = 1	// doesn't loop (INDEFINITION)
