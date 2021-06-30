#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 50

// return the number of alphabetic characters in a string
int strcounta(char *s);

int main(){
	char s[DIM] = "testing";
	int count;

	count = strcounta(s);

	printf("%d\n", count);

	return 0;
}

int strcounta(char *s){
	int i, count;

	for (i = 0, count = 0; s[i] != '\0'; i++){
		if(isalpha(s[i])){
			count++;
		}
	}

	return count;	
}
