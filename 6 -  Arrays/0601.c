#include <stdlib.h>
#include <stdio.h>

// Arrays
int main(){
	int a[3]; 				  // size 3 array with 3 uninitialized elements
	int b[3] = {10, 20, 30};  // size 3 array with 3 initialized elements
	int c[10] = {10, 20, 30}; /* size 10 array with 3 initialized elements
							     plus 7 elements initialized with 0 */
	int d[] = {10, 20, 30};   // size 3 array with 3 initialized elements
	//int e[];				  // incorrect statement

	return 0;
}

/*
// ex 0601
int main(){
	float sal[12];

	float total;
	int i;

	for(i = 0; i < 12; i++){
		printf("Enter the salary of the month %d:", i + 1);
		scanf("%f", &sal[i]);
	}

	puts(" Month      Salary ");
	for(i = 0, total = 0.0; i < 12; i++){
		printf(" %3d      %9.2f\n", i + 1, sal[i]);
		total += sal[i];
	}

	printf("Annual Total: %9.2f\n", total);

	return 0;
}
*/

//ex0602
/*
int main(){
	float sal[13];

	float total;
	int i;

	// note that we're skipping sal[0]
	for(i = 1; i <= 12; i++){
		printf("Enter the salary of the month %d:", i);
		scanf("%f", &sal[i]);
	}

	puts(" Month      Salary ");
	for(i = 1, total = 0.0; i <= 12; i++){
		printf(" %3d      %9.2f\n", i, sal[i]);
		total += sal[i];
	}

	printf("Annual Total: %9.2f\n", total);

	return 0;
}
*/