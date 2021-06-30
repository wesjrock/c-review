#include <stdlib.h>
#include <stdio.h>

// ex5

float power(float x, int n);
float val(float x, int n, float t);

int main(){
	float x, t;
	int n;

	printf("Type your salary, years and tax value\n");
	scanf("%f %d %f", &x, &n, &t);

	printf("Liquid Value: %f\n", val(x, n, t));


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

float val(float x, int n, float t){
	int i;
	float res = 0;

	for(i = 1; i <= n; i++){
		res += x / power(1+t , i);
	}

	return res;
}