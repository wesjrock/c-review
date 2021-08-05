#include <stdlib.h>
#include <stdio.h>

// Recursive strlen
int strlen_rec(char *s);

int main(int argc, char *argv[]){
	
	printf("%d\n", strlen_rec("ola") );
	
	return 0;
}

int strlen_rec(char *s){
	if(*s == '\0')
		return 0;
	else
		return 1 + strlen_rec(s + 1);
}


