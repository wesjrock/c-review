#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Pointer Increment

int main(){
	int   x = 5,    *px = &x;
	float y = 5.0,  *py = &y;
	char  ch = 'a', *p_ch = &ch;

	printf("VARIABLE\tPOINTER\n");

	// integer
	printf("%d\t\t%ld\n", x, (long) px);
	printf("%d\t\t%ld\n", x + 1, (long) (px + 1) );

	// float
	printf("%f\t%ld\n", y, (long) py);
	printf("%f\t%ld\n", y + 1, (long) (py + 1) );

	// char
	printf("%c\t\t%ld\n", ch, (long) p_ch);

	p_ch++;

	printf("%c\t\t%ld\n", ch, (long) p_ch);

	return 0;
}

