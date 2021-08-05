// Function Pointer and Call-back functions: qsort

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* if A > B, compare will return a positive value and qsort will sort in increasing order
   if A < B, compare will return a negative value and qsort will sort in decreasing order */
int CompareInc(const void* a, const void* b){
	int A = *((int*)a); // typecasting to int* and getting value
	int B = *((int*)b); 

	return A - B; 
}

int CompareDec(const void* a, const void* b){
	int A = *((int*)a); // typecasting to int* and getting value
	int B = *((int*)b); 

	return B - A; 
}

// compare using absolute values
int CompareAbs(const void* a, const void* b){
	int A = *((int*)a); // typecasting to int* and getting value
	int B = *((int*)b); 

	return abs(A) - abs(B); 
}

int main(int argc, char *argv[]){
	int i, A[] = {-31, 22, -1, 50, -6, 4};

	qsort(A, 6, sizeof(int), CompareInc); // compare is a call-back function that will be used in qsort

	for(i = 0; i < 6; i++)
		printf("%d ", A[i]);
	printf("\n");

	return 0;
}

