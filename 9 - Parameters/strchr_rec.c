#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Recursive strchr
char * strchr_rec(char *str, char ch);

int main(int argc, char *argv[]){
	char str[] = "ola";

	printf("%s\n", strchr_rec(str, 'a') );

	return 0;
}

char * strchr_rec(char *str, char ch){
	if(*str == '\0')
		return NULL;
	else
		if(*str == ch)
			return str;
		else
			return strchr_rec(str + 1, ch);
}