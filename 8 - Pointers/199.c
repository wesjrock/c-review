#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// EXERCISE PAGE 199 - Pointers

int main(){
	char s[10] = "Exams";
	char *ps;
	char **pps;

	ps = &s[0]; // or, ps = s;
	pps = &ps;

	// output: E E E
	printf("%c %c %c\n", s[0], *ps, **pps);

	// output: x a m
	printf("%c %c %c\n", s[1], *(ps + 2), *(*pps + 3) );

	//output: s s s
	//printf("%c %c %c\n", s[4], *(ps + 4), *(*pps + 4));
	printf("%c %c %c\n", *(s + 4), ps[4], (*pps)[4] );

	//output: 5 5 5
	printf("%d %d %d\n", strlen(s), strlen(ps), strlen(*pps) );

	return 0;
}

