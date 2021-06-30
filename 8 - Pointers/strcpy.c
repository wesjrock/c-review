#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Explanation on pages 192
char * my_strcpy(char *dest, char *source);

int main(){
	char source[10] = "hello";
	char dest[10];

	my_strcpy(dest, source);
	printf("%s\n", dest);

	return 0;
}

char * my_strcpy(char *dest, char *source){
	char *tmp = dest;

	while( (*dest = *source) ){
		dest++;
		source++;
	}

	return tmp;
}

