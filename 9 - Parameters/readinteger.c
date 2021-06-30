#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ReadInteger(char *prompt);

int main(int argc, char *argv[]){
	int age;

	age = ReadInteger("Enter your age: ");

	return 0;
}

int ReadInteger(char *prompt){
	int n;

	do{
		printf("%s", prompt);
		scanf("%d", &n);

	}while(n < 0);

	return n;
}