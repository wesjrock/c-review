#include <stdlib.h>
#include <stdio.h>

void init_array(int a[], int size);

// ex0603
int main(){
	int a[11];
	int i;

	init_array(a, 11);

	for(i = 1; i <= 10; i++){
		printf("index %d --> %d\n",i , a[i]);
	}

	return 0;
}

void init_array(int a[], int size){
	int i;

	for(i = 1; i <= 10; i++){
		a[i] = 0;
	}
}