#include <stdlib.h>
#include <stdio.h>

int Is_Odd(int x);

int main(){
	int x, res;

	printf("Type a value: ");
	scanf("%d", &x);

	res = Is_Odd(x);

	if(res == 1)
		printf("%d is odd\n", x);

	return 0;
}

int Is_Odd(int x){
	return x % 2; // x % 2 == 1 which means true 
}