#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float exp_rec(float x, int n, float t);

int main(int argc, char *argv[])
{
	float x = 64;
	int   n = 2;
	float t = 31;

	printf("%f\n", exp_rec(x, n, t) ); 

	return 0;
}

float exp_rec(float x, int n, float t){
	if(n < 1)
		return 0;
	else
		return x / pow(1 + t, n) + exp_rec(x, n - 1, t);
}