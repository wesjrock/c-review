#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	// CASTING INT e FLOAT666664
	float a;

	scanf("%f", &a);
	printf("integer part = %d\n", (int)a );
	printf("decimal part = %f\n", a - (int)a );

	return 0;
}