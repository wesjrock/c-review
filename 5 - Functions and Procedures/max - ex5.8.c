#include <stdlib.h>
#include <stdio.h>

float Max(float x, float y, float z);

int main(){
	float x, y, z;

	printf("Type 3 values: \n");
	scanf("%f %f %f", &x, &y, &z);
	
	printf("Greater value = %.2f\n", Max(x, y, z));

	return 0;
}

float Max(float x, float y, float z){
	if(x > y)
		if(x > z)
			return x;
		else
			return z;
	else if(y > z)
		return y;
	else
		return z;
}

