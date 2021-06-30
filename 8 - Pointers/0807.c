#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N_STRINGS 3

// Initialize an array of strings and print them using only pointers

int main(){
	char array[N_STRINGS][20] = {"Ola", "Anthony", "Susana"};
	char (*ptr)[20] = array; // Pointer to array of 20 chars
	char *p;

	while(ptr - array < N_STRINGS){
		printf("ptr = %ld\tarray = %ld\tptr - array = %ld\n", (long)ptr, (long)array, ptr - array);

		p = *ptr; // p receives the string pointed by ptr
		while(*p)
			putchar(*p++);
			putchar('\n');
			ptr++; 
	}

	return 0;
}

