#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 25

/*
	returns 0 if both strings are equal
	returns >0 if string_1 is alphabetically greater than string_2
	returns <0 if string_1 is alphabetically less than string_2

	note: ignore case function
*/
int stricmp(char *s1, char *s2);

int main(){
	int res;
	char s1[DIM] = "maria";
	char s2[DIM] = "mario";

	res = my_strcmp(s1, s2);

	printf("%d\n", res);

	return 0;
}

int stricmp(char *s1, char *s2){
	int i = 0;

	while(s1[i] == s2[i] && s1[i] != '\0')
		i++;

	// return the result according to the ascii table
	return ( (unsigned char) s1[i] -  (unsigned char) s2[i] );
}