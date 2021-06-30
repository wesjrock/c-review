#include <stdlib.h>
#include <stdio.h>

#define NUM 11

// ex0606
void init_array(int v[]);

int main()
{
	int v[NUM];
	int i;

	init_array(v);

	for(i = NUM - 1; i > 0 ; i--){
		printf("index %d --> %d\n", i, v[i]);
	}

	return 0;
}

void init_array(int v[]){
	int i;

	for(i = 1; i <= NUM - 1; i++){
		v[i] = i;
	}
}