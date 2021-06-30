#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// Returns max number in an array
float max(float v[], int n);

int main(){
	float res;
	int i, n = 10;
	float v[n];

	srand(time(NULL));

	for(i = 0; i < n; i++){
		v[i] = rand() % 10;
	}

	printf("max of 3 elements = %.2f\n", max(v, 3));
	printf("max of 5 elements = %.2f\n", max(v, 5));
	printf("max of 10 elements = %.2f\n", max(v, 10));

	return 0;
}

float max(float v[], int n){
	int i;
	float max;

	max = v[0];
	for(i = 1; i < n; i++){
		if(v[i] > max){
			max = v[i];
		}
	}

	return max;
}