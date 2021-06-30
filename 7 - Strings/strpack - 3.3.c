#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

// remove repeated characters consecutively in a string
// in: abbbaa
// out: aba
char * strpack(char *s);

int main(){
	char s[DIM] = "abbbaa";

	printf("%s\n", strpack(s) );

	return 0;
}

char * strpack(char *s){
	int i, j;

	for(i = j = 0; s[i] != '\0'; i++){
		//printf("i = %d    j = %d\n", i, j);
		if(s[i] != s[j]){
			j++;
			s[j] = s[i];
		}
	}
	//printf("i = %d    j = %d\n", i, j);

	j++;
	s[j] = '\0';

	return s;
}