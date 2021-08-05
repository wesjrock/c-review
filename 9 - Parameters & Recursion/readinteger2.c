#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ReadInteger(char *prompt, int *age);

int main(int argc, char *argv[]){
	int age;

	ReadInteger("Enter your age: ", &age);
	printf("age = %d\n", age);

	return 0;
}

void ReadInteger(char *prompt, int *age){
	do{
		printf("%s", prompt);
		scanf("%d", age);
	}while(*age < 0);
}