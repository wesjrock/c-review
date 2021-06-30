#include <stdlib.h>
#include <stdio.h>

int main(){
	int i, x, num;

	/*
	// ascending order
	i = 1;
	while(i <= 10){
		printf("%d\n", i);
		i++;
	}

	printf("\n");

	// descending order
	i = 10;
	while(i){
		printf("%d\n", i);
		i--;
	}

	printf("\n");
	

	// 5 times table 
	printf("Type a number: \n");
	scanf("%d", &x);
	i = 1;
	while(i <= 10){
		printf("%2d * %2d = %2d\n", x, i, x * i);
		i++;
	}
	*/

	num = 1;
	while(num <= 5){
		i = 1;
		while(i <= 10){	
			printf("%2d * %2d = %2d\n", num, i, num * i);
			i++;
		}
		printf("\n");
		num++;
	}


	return 0;
}