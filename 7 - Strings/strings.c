#include <stdlib.h>
#include <stdio.h>

int main(){
	/* char v[20] has a total of 19 characters + 1 null character which is the first character
	from the ascii table represented by \0
	"test               '\0'"
	*/

	/*
	char v[20] = "test"; 

	int i;

	for(i = 0; i < 20; i++)
		printf("%c\n", v[i]);
	*/


	// Difference between scanf() and gets()
	// scanf() will read till it finds a SPACE, TAB or ENTER
	// gets() can read more than one word
	char name[50];

	printf("Enter your name: ");
	//scanf("%s", name);
	gets(name);
	printf("%s\n", name);


	return 0;
}