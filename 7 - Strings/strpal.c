#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DIM 50

// Checks whether the string is a palindrome 
int strpal(char *s);

int main(){
	int res;
	char s[DIM] = "aba";

	res = strpal(s);

	printf("%d\n", res);

	return 0;
}

int strpal(char *s){
	int i, j;

	for(i = 0, j = strlen(s) - 1; i < j; i++, j--){
		if(s[i] != s[j])
			return 0; // false
	}

	return 1; // true
}