#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DIM 100

// Given a string, return its numeric digits
int my_atoi(char *s);

int main(){
	char s[DIM] = "+51abc43"; 

	int res = my_atoi(s);

	printf("%d\n", res);

	return 0;
}

int my_atoi(char *s){
	int i = 0;
	int res = 0;
	int signal = 1;

	if(s[0] == '-' || s[0] == '+')
		i = 1;

	if(s[0] == '-')
		signal = -1;

	for( ; isdigit(s[i]) ; i++){ 
		/* each s[i] is of type char, i.e. we have to 
		   subtract s[i] from '0' which is 48 in the ascii table
		   to get the correct result */
		res = res * 10 + s[i] - '0' ;
	}

	return res * signal;
}
