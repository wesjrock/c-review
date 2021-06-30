#include <stdlib.h>
#include <stdio.h>

// Read names until an empty name is entered
int main(){
	char name[100];

	while(1){
		puts("Name:");
		gets(name);

		if(name[0] == '\0')
			break;
		else
			printf("Entered Name: %s\n", name);
	}

	return 0;
}