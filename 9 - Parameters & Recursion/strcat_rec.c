#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Recursive strcat
char * strcat_rec(char *dest, char *source);

int main(int argc, char *argv[]){
	char dest[] = "hello";
	char source[] = "world";

	printf("%s\n", strcat_rec(dest, source));

	return 0;
}

/* In each iteration we are incremeting the address of 'dest' by 1,
   when 'dest' reaches \0, it executes strcpy and 'source' is copied to 'dest' \0 position */
char * strcat_rec(char *dest, char *source){
	printf("%li -> %c\n", dest, *dest);	 // DEBUG: to count the number of function calls

	if(*dest == '\0'){
		return strcpy(dest, source);
	}

	/* -1 because we need to get back to the first character of 'dest',
	   so strcat_rec() calls the function but -1 makes it go backwards in each call
	*/
	return strcat_rec(dest + 1, source) - 1; 
}

