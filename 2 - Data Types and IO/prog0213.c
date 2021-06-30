#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	// CASTING
	int a;

	printf("Type an integer: \n");
	scanf("%d", &a);
	printf("value = '%d' has ascii = %c\n", a, (char)a);
	printf("next value = '%d' has ascii = %c\n", a + 1, (char)a + 1);

	return 0;
}