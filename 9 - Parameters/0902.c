#include <stdio.h>

// without pointers, this won't change the variables
void swap_1(int a, int b);

// with pointers, this will change the variables
void swap_2(int *a, int *b);

int main(){
	int n = 2;
	int k = 7;

	swap_1(n, k);
	printf("without pointers:\n n = %d\tk = %d\n\n", n, k);

	swap_2(&n, &k);
	printf("with pointers:\n n = %d\t k = %d\n", n, k);

}

void swap_1(int a, int b){
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

void swap_2(int *a, int *b){
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}