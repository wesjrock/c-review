#include <stdlib.h>
#include <stdio.h>

int Is_X_LowerUpper_Bound(int x, int lower_bound, int upper_bound);

int main(){
	int x, lower_bound, upper_bound, res;

	printf("Type a value to check if is between a lower and upper_bound: \n");
	printf("Example:\n");
	printf("1000 500 2000\n");
	scanf("%d %d %d", &x, &lower_bound, &upper_bound);
	
	res = Is_X_LowerUpper_Bound(x, lower_bound, upper_bound);

	if(res)
		printf("%d is between %d and %d\n", x, lower_bound, upper_bound);

	return 0;
}

int Is_X_LowerUpper_Bound(int x, int lower_bound, int upper_bound){
	return (x >= lower_bound && x <= upper_bound);
}