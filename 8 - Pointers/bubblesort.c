// Function Pointer and Call-back functions: bubble sort

#include <stdio.h>

// for decreasing order, just change '>' to '<', so b will be greater than a
int compare(int a, int b){
	if (a > b) return 1;
	else return -1;
}

void BubbleSort(int A[], int n, int (*compare)(int, int)){
	int i, j, temp;

	for (i = 0; i < n; i++)
		for(j = 0; j < i; j++)
			if(compare(A[j], A[j + 1]) > 0){
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
}

int main(int argc, char *argv[]){
	int i, A[] = {2, 4, 3, 7, 5, 6};
	BubbleSort(A, 6, compare); // compare is a call-back function

	for (i = 0; i < 6; i++)
		printf("%d ", A[i]);
	printf("\n");

	
	return 0;
}

