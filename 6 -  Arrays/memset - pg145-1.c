#include <stdlib.h>
#include <stdio.h>

const int n = 5;

char* my_memset(char *v, char ch, int n);

int main(){
	int i;
	char ch;
	
	char v[n];

	my_memset(v, '0', n);

	for(i = 0; i < n; i++)
		printf("%c\n", v[i]);
	
	return 0;
}

char* my_memset(char *v, char ch, int n){
	int i;

	for(i = 0; i < n; i++)
		v[i] = ch;

	return v;
}