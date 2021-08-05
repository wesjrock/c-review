#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * puts_rec(char *s);

int main(int argc, char *argv[])
{
	puts_rec("hello");
	
	return 0;
}

char * puts_rec(char *s){
	if(*s == '\0')
		putchar('\n');
	else{
		putchar(*s);
		puts_rec(s + 1);
	}
}