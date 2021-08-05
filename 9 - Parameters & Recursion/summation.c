#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Exercise: implement the summation of (a + i/n)^2 ranging from 1 to n
int Exp(int n, int a);

int main(int argc, char *argv[]){
	int n = 5;
	int a = 2;

	printf("%d\n", Exp(n, a) );	
	
	return 0;
}

int Exp(int n, int a){
	int i, res = 0;

	for(i = 0; i <= n; i++)
		res += (a + i/n) * (a + i/n);

	return res;
}