#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DIM 20
#define SEP_NAME ", "

int main(){
	char first_name[DIM + 1], last_name[DIM + 1], full_name[2 * DIM + 1];

	while(1){
		printf("Name: "); 
		gets(first_name);

		if(strlen(first_name) == 0) 
			break;

		printf("Last Name: "); 
		gets(last_name);

		strcpy(full_name, last_name);
		strcat(full_name, SEP_NAME);
		strcat(full_name, first_name);

		puts(full_name);
	}

	return 0;
}