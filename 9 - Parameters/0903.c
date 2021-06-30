#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LENGTH 9

// returns the minimium and maximum values of an array
void calc(float *v, int length, float *xmin, float *xmax);

int main(){
	float v[LENGTH] = {10, 20, 30, 40, 50, 11, 12, 5, -33};
	float min, max;

	calc(v, LENGTH, &min, &max);

	printf("min = %f\tmax = %f\n", min, max);

	return 0;
}

void calc(float *v, int length, float *xmin, float *xmax){
	int i;

	*xmin = *xmax = *v; // assigns the value of v[0]

	for(i = 0; i < length; i++){
		if(v[i] < *xmin)	*xmin = v[i];
		if(v[i] > *xmax)	*xmax = v[i];
	}
}