#include <stdlib.h>
#include <stdio.h>

// Recursive power function
float pow_rec(int base, int power);

int main(int argc, char *argv[])
{
	int base = 2;
	int power = 6;

	printf("%.1f\n", pow_rec(base, power) );

	return 0;
}

float pow_rec(int base, int power){
	if(power == 0)
		return 1.0;
	else{
		return base * pow_rec(base, power - 1);
	}
}