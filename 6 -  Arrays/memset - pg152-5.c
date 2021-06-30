#include <stdlib.h>
#include <stdio.h>

const int n = 5;

char* my_memset(char *dest, char *orig, int n);

int main(){
	int i;
	char dest[n] = {0, 0, 0, 0, 0};
	char orig[n] = {1, 2, 3, 4, 5};
	

	my_memset(dest, orig, n);

	for(i = 0 ; i < n; i++){
		printf("%d\n", dest[i]);
	}

	return 0;
}

char* my_memset(char *dest, char *orig, int n){
	int i;

	for(i = 0; i < n; i++){
		dest[i] = orig[i];
	}

	return dest;
}