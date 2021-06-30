#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

/* Transforms the string, leaving only the existing characters from n to n positions
in:  "ABCDEFGH", 2
out: ADG
*/
char * str_streaky(char *s, int n);

int main(){
	char s[DIM];
	int n = 1;

	strcpy(s, "ABCDEFGHIJKLMN");
	str_streaky(s, n);

	printf("%s\n", s);

	return 0;
}

char * str_streaky(char *s, int n){
	int i, j;
	int len = strlen(s);

	if(n == 0)	return s;

	for(i = j = 0; i < len; i += n+1){
		//printf("i = %d\n", i);
		s[j] = s[i];
		j++;
	}
	//printf("i = %d\n", i);
	s[j] = '\0';
	
	return s;
}