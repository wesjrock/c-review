#include <stdio.h>

int main(){
	int n;

	puts("Enter an integer: ");

	// scanf returns the number of arguments that were successfully read
	// in this case if an integer is not entered, the loop will continue
	while(scanf("%d", &n) == 0){
		fflush(stdin);
	}

	printf("result: %d\n", n);

	return 0;
}